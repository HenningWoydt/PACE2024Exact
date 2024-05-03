#ifndef PACE2024EXACT_EXHAUSTIVESOLVER_H
#define PACE2024EXACT_EXHAUSTIVESOLVER_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "Graph.h"
#include "misc.h"
#include "CrossMatrix.h"
#include "CandidateManager.h"
#include "AlignedVector.h"


/**
 * Solver for the one-sided crossing minimization problem (OCM).
 */
class ExhaustiveSolver {
private:
    const Graph &m_graph;

    AlignedVector<int> m_permutation; // current linear order
    AlignedVector<int> m_is_used; // O(1) access to check if a vertex is used

    AlignedVector<int> m_counter; // used in iterative search
    AlignedVector<CandidateManager> m_candidate_order;

    AlignedVector<int> m_cuts; // number of cuts at each depth
    AlignedVector<int> m_intra_min_cuts; // number of intra min cuts per depth
    AlignedVector<AlignedVector<int>> m_cut_gain; // cut gain per depth per element

    // Minimum Cross Matrix
    CrossMatrix m_cross_matrix;

    // holds the best found permutation
    AlignedVector<int> m_solution;
    int m_solution_n_cuts;

    // holds the (optional) initial solution
    AlignedVector<int> m_init_sol;

    // timings
    std::chrono::steady_clock::time_point sp;
    std::chrono::steady_clock::time_point ep;

public:
    /**
     * Default constructor.
     *
     * @param g The graph to optimize.
     */
    explicit ExhaustiveSolver(Graph &g) : m_graph(g) {
        int size = m_graph.m_n_B;
        m_permutation.resize(size); // reserve space
        m_is_used.resize(size, false); // no vertex is used

        m_counter.resize(size, -1); // all m_counter are -1
        m_candidate_order.resize(size, CandidateManager(size));

        m_cuts.resize(size);
        m_intra_min_cuts.resize(size);
        m_cut_gain.resize(size, AlignedVector<int>(size));

        m_cross_matrix = CrossMatrix(size);

        m_solution.resize(size); // reserve space
        m_solution_n_cuts = std::numeric_limits<int>::max();
    }

    /**
     * Sets an initial solution.
     *
     * @param init_sol The initial solution.
     */
    inline void set_initial_solution(std::vector<int> &init_sol) {
        int size = m_graph.m_n_B;
        init_sol.resize(size);
        std::copy(init_sol.begin(), init_sol.end(), m_init_sol.begin());
    }

    /**
     * Determines the m_permutation, with the least number of cuts.
     */
    inline void solve() {
        sp = std::chrono::steady_clock::now();

        // initialize the Crossing Matrix
        initialize_CrossMatrix();

        // most simple solution
        std::iota(m_permutation.begin(), m_permutation.end(), 0);
        check_new_solution(m_permutation);

        // initial solution, if provided
        if (m_init_sol.size() > (size_t) 0) {
            check_new_solution(m_init_sol);
        }

        // check for a fast greedy solution
        initial_greedy();

        // exhaustive search
        iterative_search();

        ep = std::chrono::steady_clock::now();
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [0, ..., n_B - 1].
     *
     * @return Permutation of B.
     */
    inline std::vector<int> get_solution() const {
        std::vector<int> v(m_solution.size());
        std::copy(m_solution.begin(), m_solution.end(), v.begin());
        return v;
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [n_A + 1, ..., n_A + n_B].
     *
     * @return Permutation of B.
     */
    inline std::vector<int> get_shifted_solution() const {
        std::vector<int> v(m_solution.size());
        std::copy(m_solution.begin(), m_solution.end(), v.begin());
        for (auto &x: v) {
            x += m_graph.m_n_A + 1;
        }
        return v;
    }

    /**
     * Return the elapsed time in seconds.
     *
     * @return Time in seconds.
     */
    inline double get_time() const {
        return get_elapsed_seconds(sp, ep);
    }

private:
    /**
     * Determines is a new solution has been found.
     *
     * @param sol The possible solution.
     */
    inline bool check_new_solution(AlignedVector<int> &sol) {
        int size = m_graph.m_n_B;
        int n_cuts = count_cuts(sol, size);
        if (n_cuts < m_solution_n_cuts) {
            std::copy(sol.begin(), sol.end(), m_solution.begin());
            m_solution_n_cuts = n_cuts;
            return true;
        }
        return false;
    }

    /**
     * Counts the number of cuts, based on the current permutation.
     *
     * @return Number of cuts.
     */
    inline int count_cuts(AlignedVector<int> &perm, int size) {
        int n_cuts = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                n_cuts += m_cross_matrix.get_entry(perm[i], perm[j]);
            }
        }
        return n_cuts;
    }

    /**
     * Count the number of cuts, that are added by adding c to the permutation.
     *
     * @param perm The current permutation.
     * @param size Current size.
     * @param c The candidate c.
     * @return Number of additional cuts.
     */
    inline int count_cut_gain(AlignedVector<int> &perm, int size, int c) {
        return m_cut_gain[size - 1][c] + m_cross_matrix.get_entry(perm[size - 1], c);
    }

    /**
     * Initialize the Cross-Matrix.
     */
    inline void initialize_CrossMatrix() {
        for (int i = 0; i < m_graph.m_n_B; ++i) {
            for (int j = 0; j < m_graph.m_n_B; ++j) {
                int c = 0;
                // loop through the edges
                for (size_t k = 0; k < m_graph.m_adj_list[i].size(); ++k) {
                    for (size_t l = 0; l < m_graph.m_adj_list[j].size(); ++l) {
                        int a1_pos = m_graph.m_adj_list[i][k];
                        int a2_pos = m_graph.m_adj_list[j][l];

                        c += (a2_pos < a1_pos);
                    }
                }
                m_cross_matrix.set_entry(i, j, c);
            }
        }
    }

    /**
     * Computes an initial greedy solution.
     */
    inline void initial_greedy() {
        int size = m_graph.m_n_B;

        // get best current solution
        std::copy(m_solution.begin(), m_solution.end(), m_permutation.begin());

        size_t failed_swaps = 0;
        while (failed_swaps < 100) {

            size_t rnd_idx1 = random() % size;
            size_t rnd_idx2 = random() % size;

            int v1 = m_permutation[rnd_idx1];
            int v2 = m_permutation[rnd_idx2];

            m_permutation[rnd_idx1] = v2;
            m_permutation[rnd_idx2] = v1;
            // TODO: a specialized function, that determines the count after a swap
            if (!check_new_solution(m_permutation)) {
                // no new solution, so restore
                m_permutation[rnd_idx1] = v1;
                m_permutation[rnd_idx2] = v2;
                failed_swaps += 1;
            } else {
                failed_swaps = 0;
            }
        }
    }

#define TREE_UP 0
#define TREE_STAY 1

    /**
     * Iteratively searches for a solution.
     */
    inline void iterative_search() {
        execute_DCO_depth_0();
        m_cuts[0] = 0;
        m_intra_min_cuts[0] = calculate_intraMinCuts_depth_0();

        int depth = 0;
        int tree_movement = TREE_STAY;

        while (depth >= 0) {

            if (tree_movement == TREE_UP) {
                // go up
                depth -= 1;
                tree_movement = TREE_STAY;
                continue;
            } else {
                // release the current element and move further
                if (m_counter[depth] >= 0) {
                    m_is_used[m_candidate_order[depth][m_counter[depth]].c] = false;
                }
                m_counter[depth] += 1;

                // check if at the end
                if (m_counter[depth] == (int) m_candidate_order[depth].get_end()) {
                    tree_movement = TREE_UP;
                    continue;
                }

                // check if we can abort early
                int current_n_cuts = m_cuts[depth]; //count_cuts(m_permutation, depth);
                int min_cuts_remaining = get_minCutsRemaining(depth);
                if (current_n_cuts + min_cuts_remaining >= m_solution_n_cuts) {
                    // release the element, because we go up
                    m_is_used[m_candidate_order[depth][m_counter[depth]].c] = false;
                    tree_movement = TREE_UP;
                    continue;
                }

                // valid element found
                Candidate vertex = m_candidate_order[depth][m_counter[depth]];
                m_permutation[depth] = vertex.c;
                m_is_used[vertex.c] = true;

                // check if we arrived at the bottom
                if (depth + 1 == m_graph.m_n_B) {
                    if (m_cuts[depth] + vertex.gain < m_solution_n_cuts) {
                        std::copy(m_permutation.begin(), m_permutation.end(), m_solution.begin());
                        m_solution_n_cuts = m_cuts[depth] + vertex.gain;
                    }

                    // release the element, because we go up
                    m_is_used[vertex.c] = false;
                    tree_movement = TREE_UP;
                    continue;
                }

                // move down and reset counter
                depth += 1;
                m_cuts[depth] = m_cuts[depth - 1] + vertex.gain;
                m_counter[depth] = -1;
                execute_DCO(depth);
                m_intra_min_cuts[depth] = m_intra_min_cuts[depth - 1] - calculate_intraMinCuts(depth);

                tree_movement = TREE_STAY;
                continue;
            }
        }
    }

    /**
     * Executes Dynamic-Candidate-Ordering at depth 0.
     */
    inline void execute_DCO_depth_0() {
        for (int i = 0; i < m_graph.m_n_B; ++i) {
            m_candidate_order[0].push_back({i, 0});
            m_cut_gain[0][i] = 0;
        }
    };

    /**
     * Executes Dynamic-Candidate-Ordering.
     *
     * @param depth Current depth of the algorithm.
     */
    inline void execute_DCO(int depth) {
        m_candidate_order[depth].clear();
        for (size_t i = 0; i < m_candidate_order[depth - 1].get_end(); ++i) {
            Candidate vertex = m_candidate_order[depth - 1][i];
            if (!m_is_used[vertex.c]) {
                int c = vertex.c;
                int gain = count_cut_gain(m_permutation, depth, c);
                m_candidate_order[depth].push_back({c, gain});
                m_cut_gain[depth][c] = gain;
            }
        }

        m_candidate_order[depth].sort();
    }

    /**
     * Gets the minimum amount of remaining cuts.
     *
     * @param depth Current depth of the algorithm
     * @return Number of cuts.
     */
    inline int get_minCutsRemaining(int depth) {
        int n_cuts = 0;
        // get remaining cuts between still to place elements
        n_cuts += m_intra_min_cuts[depth];

        // get remaining cuts between placed and still to place elements
        n_cuts += get_interMinCuts(depth);

        return n_cuts;
    }

    /**
     * Gets the minimum amount of cuts between the candidates still to be
     * placed.
     *
     * @return Minimum number of cuts.
     */
    inline int calculate_intraMinCuts_depth_0() {
        int n_cuts = 0;
        for (size_t i = 0; i < m_candidate_order[0].get_end(); ++i) {
            for (size_t j = i + 1; j < m_candidate_order[0].get_end(); ++j) {
                int c1 = m_candidate_order[0][i].c;
                int c2 = m_candidate_order[0][j].c;

                n_cuts += std::min(m_cross_matrix.get_entry(c1, c2), m_cross_matrix.get_entry(c2, c1));
            }
        }
        return n_cuts;
    }

    /**
     * Gets the minimum amount of cuts between the candidates still to be
     * placed.
     *
     * @param depth Current depth of the algorithm.
     * @return Minimum number of cuts.
     */
    inline int calculate_intraMinCuts(int depth) {
        int n_cuts = 0;
        int c2 = m_permutation[depth - 1];
        for (size_t i = 0; i < m_candidate_order[depth].get_end(); ++i) {
            int c1 = m_candidate_order[depth][i].c;

            n_cuts += std::min(m_cross_matrix.get_entry(c1, c2), m_cross_matrix.get_entry(c2, c1));
        }
        return n_cuts;
    }

    /**
     * Gets the number of cuts between placed and still to be placed candidates.
     *
     * @param depth Current depth of the algorithm.
     * @return Number of cuts.
     */
    inline int get_interMinCuts(int depth) {
        int n_cuts = 0;
        for (size_t i = 0; i < m_candidate_order[depth].get_end(); ++i) {
            n_cuts += m_candidate_order[depth][i].gain;
        }
        return n_cuts;
    }
};


#endif //PACE2024EXACT_EXHAUSTIVESOLVER_H
