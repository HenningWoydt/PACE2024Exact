#ifndef PACE2024EXACT_SOLVER_H
#define PACE2024EXACT_SOLVER_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "Graph.h"
#include "misc.h"
#include "MinCrossMatrix.h"
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
    MinCrossMatrix m_min_cross_matrix;

    std::vector<int> m_solution; // holds the best found m_permutation
    int m_solution_n_cuts;

public:
    /**
     * Default constructor.
     *
     * @param g The m_graph to optimize.
     */
    explicit Solver(Graph &g) : m_graph(g) {
        m_permutation.resize(m_graph.m_n_B); // reserve space
        m_is_used.resize(m_graph.m_n_B, false); // no vertex is used

        m_counter.resize(m_graph.m_n_B, -1); // all m_counter are -1
        m_candidate_order.resize(m_graph.m_n_B, CandidateManager(m_graph.m_n_B));

        m_min_cross_matrix = MinCrossMatrix(m_graph.m_n_B);

        m_solution.resize(m_graph.m_n_B); // reserve space
        m_solution_n_cuts = std::numeric_limits<int>::max();
    }

    /**
     * Determines the m_permutation, with the least number of cuts.
     */
    void solve() {
        initialize_MinCrossMatrix();

        initial_greedy();

        execute_DCO_depth_0();
        iterative_search();
    }

    /**
     * Returns the m_permutation vector. All entries are in the range
     * [0, ..., n_B - 1].
     *
     * @return Permutation of B.
     */
    [[nodiscard]] std::vector<int> get_solution() const {
        std::vector<int> v(m_solution);
        return v;
    }

    /**
     * Returns the m_permutation vector. All entries are in the range
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

private:
    /**
     * Counts the number of cuts, based on the current m_permutation.
     *
     * @return Number of cuts.
     */
    int count_cuts(std::vector<int> &perm, int size) {
        int n_cuts = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                int b1 = perm[i];
                int b2 = perm[j];

                int b1_pos = i;
                int b2_pos = j;

                // loop through the edges
                for (size_t k = 0; k < m_graph.m_adj_list[b1].size(); ++k) {
                    for (size_t l = 0; l < m_graph.m_adj_list[b2].size(); ++l) {
                        int a1_pos = m_graph.m_adj_list[b1][k];
                        int a2_pos = m_graph.m_adj_list[b2][l];

                        bool cut1 = (a1_pos < a2_pos) && (b2_pos < b1_pos);
                        bool cut2 = (a2_pos < a1_pos) && (b1_pos < b2_pos);
                        bool cut = cut1 || cut2;
                        n_cuts += cut;
                    }
                }
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
            int b1 = perm[i];
            int b2 = c;

            int b1_pos = i;
            int b2_pos = size;

            // loop through the edges
            for (size_t k = 0; k < m_graph.m_adj_list[b1].size(); ++k) {
                for (size_t l = 0; l < m_graph.m_adj_list[b2].size(); ++l) {
                    int a1_pos = m_graph.m_adj_list[b1][k];
                    int a2_pos = m_graph.m_adj_list[b2][l];

                    bool cut1 = (a1_pos < a2_pos) && (b2_pos < b1_pos);
                    bool cut2 = (a2_pos < a1_pos) && (b1_pos < b2_pos);
                    bool cut = cut1 || cut2;
                    n_cuts += cut;
                }
            }
        }
        return n_cuts;
    }

    /**
     * Initialize the Minimum-Cross-Matrix.
     */
    void initialize_MinCrossMatrix() {
        for (int i = 0; i < m_graph.m_n_B; ++i) {
            for (int j = i + 1; j < m_graph.m_n_B; ++j) {
                m_permutation[0] = i;
                m_permutation[1] = j;
                int c1 = count_cuts(m_permutation, 2);

                m_permutation[1] = i;
                m_permutation[0] = j;
                int c2 = count_cuts(m_permutation, 2);
                m_min_cross_matrix.set_entry(i, j, std::min(c1, c2));
            }
        }
    }

    /**
     * Computes an initial greedy m_solution.
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

#define MOVE_UP() depth -= 1; continue
#define MOVE_DOWN() depth += 1; execute_DCO(depth); m_counter[depth] = -1; continue

    /**
     * Iteratively searches for a solution.
     */
    void iterative_search() {
        int depth = 0;
        while (depth >= 0) {

            if(depth > 0) {
                // TODO: Error here somewhere
                int curr_cuts = count_cuts(m_permutation, depth);
                int min_remaining_cuts = 0; //get_minCutsRemaining(depth);
                if (curr_cuts + min_remaining_cuts >= m_solution_n_cuts) {
                    m_is_used[m_candidate_order[depth - 1][m_counter[depth - 1]].c] = false;
                    MOVE_UP();
                }
            }

            // release the current element and move further
            if (m_counter[depth] >= 0) {
                m_is_used[m_candidate_order[depth][m_counter[depth]].c] = false;
            }
            m_counter[depth] += 1;

            // check if at the end
            if (m_counter[depth] == (int) m_candidate_order[depth].get_end()) {
                MOVE_UP();
            }

            // valid element found, put in permutation and mark as used
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
                MOVE_UP();
            }

            // move down and reset counter
            MOVE_DOWN();
        }
    }

    /**
     * Recursively searches the m_permutation tree.
     */
     /*
    void recursive_search(int depth) {
        // print(m_permutation, m_curr_size);
        if (depth == m_graph.m_n_B) {
            int n_cuts = count_cuts(m_permutation, m_curr_size);
            if (n_cuts < m_solution_n_cuts) {
                m_solution_n_cuts = n_cuts;
                std::copy(m_permutation.begin(), m_permutation.end(), m_solution.begin());
            }
            return;
        }

        execute_DCO(depth);

        int curr_cuts = count_cuts(m_permutation, m_curr_size);
        int min_remaining_cuts = get_minCutsRemaining(depth);
        if (curr_cuts + min_remaining_cuts >= m_solution_n_cuts) {
            return;
        }

        for (size_t i = 0; i < m_candidate_order[depth].get_end(); ++i) {
            m_permutation[depth] = m_candidate_order[depth][i].c;
            m_is_used[m_candidate_order[depth][i].c] = 1;
            m_curr_size += 1;

            recursive_search(depth + 1);

            m_is_used[m_candidate_order[depth][i].c] = 0;
            m_curr_size -= 1;
        }

    }
      */

    /**
     * Executes Dynamic-Candidate-Ordering at depth 0.
     */
    void execute_DCO_depth_0() {
        for (int i = 0; i < m_graph.m_n_B; ++i) {
            m_candidate_order[0].push_back({i, 0});
        }
        // m_candidate_order[0].print();
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
                int gain = 0; // count_cut_gain(m_permutation, m_curr_size, c);
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

                n_cuts += m_min_cross_matrix.get_entry(c1, c2);
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
