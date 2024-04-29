#ifndef PACE2024EXACT_SOLVER_H
#define PACE2024EXACT_SOLVER_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "Graph.h"
#include "misc.h"
#include "CrossMatrix.h"
#include "CandidateManager.h"


/**
 * Solver for the one-sided crossing minimization problem (OCM).
 */
class Solver {
private:
    const Graph &m_graph;

    std::vector<int> m_permutation; // current linear order
    std::vector<int> m_is_used; // O(1) access to check if a vertex is used

    std::vector<int> m_counter; // used in iterative search
    std::vector<CandidateManager> m_candidate_order;

    // Minimum Cross Matrix
    CrossMatrix m_cross_matrix;

    std::vector<int> m_solution; // holds the best found m_permutation
    int m_solution_n_cuts;

    std::chrono::steady_clock::time_point sp;
    std::chrono::steady_clock::time_point ep;

public:
    /**
     * Default constructor.
     *
     * @param g The graph to optimize.
     */
    explicit Solver(Graph &g) : m_graph(g) {
        m_permutation.resize(m_graph.m_n_B); // reserve space
        m_is_used.resize(m_graph.m_n_B, false); // no vertex is used

        m_counter.resize(m_graph.m_n_B, -1); // all m_counter are -1
        m_candidate_order.resize(m_graph.m_n_B, CandidateManager(m_graph.m_n_B));

        m_cross_matrix = CrossMatrix(m_graph.m_n_B);

        m_solution.resize(m_graph.m_n_B); // reserve space
        m_solution_n_cuts = std::numeric_limits<int>::max();
    }

    /**
     * Determines the m_permutation, with the least number of cuts.
     */
    void solve() {
        sp = std::chrono::steady_clock::now();

        initialize_CrossMatrix();

        initial_greedy();

        execute_DCO_depth_0();
        iterative_search();

        ep = std::chrono::steady_clock::now();
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [0, ..., n_B - 1].
     *
     * @return Permutation of B.
     */
    [[nodiscard]] std::vector<int> get_solution() const {
        std::vector<int> v(m_solution);
        return v;
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [n_A + 1, ..., n_A + n_B].
     *
     * @return Permutation of B.
     */
    [[nodiscard]] std::vector<int> get_shifted_solution() const {
        std::vector<int> v(m_solution);
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
    [[nodiscard]] double get_time() const {
        return (double) ((double) std::chrono::duration_cast<std::chrono::nanoseconds>(ep - sp).count() / 1000000000.0);
    }

private:
    /**
     * Counts the number of cuts, based on the current permutation.
     *
     * @return Number of cuts.
     */
    int count_cuts(std::vector<int> &perm, int size) {
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
    int count_cut_gain(std::vector<int> &perm, int size, int c) {
        int n_cuts = 0;
        for (int i = 0; i < size; ++i) {
            n_cuts += m_cross_matrix.get_entry(perm[i], c);
        }
        return n_cuts;
    }

    /**
     * Initialize the Cross-Matrix.
     */
    void initialize_CrossMatrix() {
        for (int i = 0; i < m_graph.m_n_B; ++i) {
            for (int j = 0; j < m_graph.m_n_B; ++j) {
                m_permutation[0] = i;
                m_permutation[1] = j;
                int c = 0;
                if (i != j) {
                    // loop through the edges
                    for (size_t k = 0; k < m_graph.m_adj_list[i].size(); ++k) {
                        for (size_t l = 0; l < m_graph.m_adj_list[j].size(); ++l) {
                            int a1_pos = m_graph.m_adj_list[i][k];
                            int a2_pos = m_graph.m_adj_list[j][l];

                            c += (a2_pos < a1_pos);
                        }
                    }
                }
                m_cross_matrix.set_entry(i, j, c);
            }
        }
    }

    /**
     * Computes an initial greedy solution.
     */
    void initial_greedy() {
        int size = m_graph.m_n_B;
        std::iota(m_permutation.begin(), m_permutation.end(), 0);
        int n_cuts = count_cuts(m_permutation, size);

        std::copy(m_permutation.begin(), m_permutation.end(), m_solution.begin());
        m_solution_n_cuts = n_cuts;

        size_t n_swaps = size * size;
        for (size_t i = 0; i < n_swaps; ++i) {

            size_t rnd_idx1 = random() % size;
            size_t rnd_idx2 = random() % size;

            int v1 = m_permutation[rnd_idx1];
            int v2 = m_permutation[rnd_idx2];

            m_permutation[rnd_idx1] = v2;
            m_permutation[rnd_idx2] = v1;

            int new_n_cuts = count_cuts(m_permutation, size);
            if (new_n_cuts < n_cuts) {
                n_cuts = new_n_cuts;
            } else {
                m_permutation[rnd_idx1] = v1;
                m_permutation[rnd_idx2] = v2;
            }
        }

        std::copy(m_permutation.begin(), m_permutation.end(), m_solution.begin());
        m_solution_n_cuts = n_cuts;
    }

#define TREE_UP 0
#define TREE_STAY 1

    /**
     * Iteratively searches for a solution.
     */
    void iterative_search() {
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
                int current_n_cuts = count_cuts(m_permutation, depth);
                int min_cuts_remaining = get_minCutsRemaining(depth);
                if (current_n_cuts + min_cuts_remaining >= m_solution_n_cuts) {
                    // release the element, because we go up
                    m_is_used[m_candidate_order[depth][m_counter[depth]].c] = false;
                    tree_movement = TREE_UP;
                    continue;
                }

                // valid element found
                m_permutation[depth] = m_candidate_order[depth][m_counter[depth]].c;
                m_is_used[m_candidate_order[depth][m_counter[depth]].c] = true;

                // check if we arrived at the bottom
                if (depth + 1 == m_graph.m_n_B) {
                    int n_cuts = count_cuts(m_permutation, depth + 1);
                    if (n_cuts < m_solution_n_cuts) {
                        std::copy(m_permutation.begin(), m_permutation.end(), m_solution.begin());
                        m_solution_n_cuts = n_cuts;
                    }

                    // release the element, because we go up
                    m_is_used[m_candidate_order[depth][m_counter[depth]].c] = false;
                    tree_movement = TREE_UP;
                    continue;
                }

                // move down and reset counter
                depth += 1;
                m_counter[depth] = -1;
                execute_DCO(depth);

                tree_movement = TREE_STAY;
                continue;
            }
        }
    }

    /**
     * Executes Dynamic-Candidate-Ordering at depth 0.
     */
    void execute_DCO_depth_0() {
        for (int i = 0; i < m_graph.m_n_B; ++i) {
            m_candidate_order[0].push_back({i, 0});
        }
    };

    /**
     * Executes Dynamic-Candidate-Ordering.
     *
     * @param depth Current depth of the algorithm.
     */
    void execute_DCO(int depth) {
        m_candidate_order[depth].clear();
        for (size_t i = 0; i < m_candidate_order[depth - 1].get_end(); ++i) {
            if (!m_is_used[m_candidate_order[depth - 1][i].c]) {
                int c = m_candidate_order[depth - 1][i].c;
                int gain = count_cut_gain(m_permutation, depth, c);
                m_candidate_order[depth].push_back({c, gain});
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
    int get_minCutsRemaining(int depth) {
        int n_cuts = 0;
        // get remaining cuts between still to place elements
        n_cuts += get_intraMinCuts(depth);

        // get remaining cuts between placed and still to place elements
        n_cuts += get_interMinCuts(depth);

        return n_cuts;
    }

    /**
     * Gets the minimum amount of cuts between the candidates still to be
     * placed.
     *
     * @param depth Current depth of the algorithm.
     * @return Minimum number of cuts.
     */
    int get_intraMinCuts(int depth) {
        int n_cuts = 0;
        for (size_t i = 0; i < m_candidate_order[depth].get_end(); ++i) {
            for (size_t j = i + 1; j < m_candidate_order[depth].get_end(); ++j) {
                int c1 = m_candidate_order[depth][i].c;
                int c2 = m_candidate_order[depth][j].c;

                n_cuts += std::min(m_cross_matrix.get_entry(c1, c2), m_cross_matrix.get_entry(c2, c1));
            }
        }
        return n_cuts;
    }

    /**
     * Gets the number of cuts between placed and still to be placed candidates.
     *
     * @param depth Current depth of the algorithm.
     * @return Number of cuts.
     */
    int get_interMinCuts(int depth) {
        int n_cuts = 0;
        for (size_t i = 0; i < m_candidate_order[depth].get_end(); ++i) {
            n_cuts += m_candidate_order[depth][i].gain;
        }
        return n_cuts;
    }
};


#endif //PACE2024EXACT_SOLVER_H
