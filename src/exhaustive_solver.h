#ifndef PACE2024EXACT_EXHAUSTIVESOLVER_H
#define PACE2024EXACT_EXHAUSTIVESOLVER_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "definitions.h"
#include "macros.h"
#include "misc.h"
#include "graph.h"
#include "cross_matrix.h"
#include "candidate_manager.h"
#include "perfect_pattern.h"

namespace CrossGuard {

    /**
     * Solver for the one-sided crossing minimization problem (OCM).
     */
    class ExhaustiveSolver {
    private:
        const Graph &m_graph;

        AlignedVector<u32> m_permutation; // current linear order
        AlignedVector<u32> m_is_used; // O(1) access to check if a vertex is used

        AlignedVector<s32> m_counter; // used in iterative search
        AlignedVector<CandidateManager> m_candidate_order;

        AlignedVector<u32> m_cuts; // number of cuts at each depth
        AlignedVector<u32> m_intra_min_cuts; // number of intra min cuts per depth
        AlignedVector<AlignedVector<u32>> m_cut_gain; // cut gain per depth per element

        // Minimum Cross Matrix
        CrossMatrix m_cross_matrix;
        PerfectPattern m_perfect_pattern;

        // holds the best found permutation
        AlignedVector<u32> m_solution;
        u32 m_solution_n_cuts;

        // holds the (optional) initial solution
        AlignedVector<u32> m_init_sol;

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
            u32 size = m_graph.n_B;
            m_permutation.resize(size); // reserve space
            m_is_used.resize(size, false); // no vertex is used

            m_counter.resize(size, -1); // all m_counter are -1
            m_candidate_order.reserve(size);
            for (u32 i = 0; i < size; ++i) {
                m_candidate_order.emplace_back(size - i);
            }

            m_cuts.resize(size);
            m_intra_min_cuts.resize(size);
            m_cut_gain.resize(size, AlignedVector<u32>(size));

            m_cross_matrix = CrossMatrix(size);
            m_perfect_pattern = PerfectPattern(size);

            m_solution.resize(size); // reserve space
            m_solution_n_cuts = std::numeric_limits<u32>::max();
        }

        /**
         * Sets an initial solution.
         *
         * @param init_sol The initial solution.
         */
        inline void set_initial_solution(AlignedVector<unsigned int> &init_sol) {
            u32 size = m_graph.n_B;
            m_init_sol.resize(size);
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
        inline AlignedVector<unsigned int> get_solution() const {
            AlignedVector<unsigned int> v(m_solution.size());
            std::copy(m_solution.begin(), m_solution.end(), v.begin());
            return v;
        }

        /**
         * Returns the permutation vector. All entries are in the range
         * [n_A + 1, ..., n_A + n_B].
         *
         * @return Permutation of B.
         */
        inline AlignedVector<unsigned int> get_shifted_solution() const {
            AlignedVector<unsigned int> v(m_solution.size());
            std::copy(m_solution.begin(), m_solution.end(), v.begin());
            for (auto &x: v) {
                x += m_graph.n_A + 1;
            }
            return v;
        }

        /**
         * Return the elapsed time in seconds.
         *
         * @return Time in seconds.
         */
        inline double get_time() const {
            return get_seconds(sp, ep);
        }

    private:
        /**
         * Determines is a new solution has been found.
         *
         * @param sol The possible solution.
         */
        inline bool check_new_solution(AlignedVector<u32> &sol) {
            u32 size = m_graph.n_B;
            u32 n_cuts = count_cuts(sol, size);
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
        inline u32 count_cuts(AlignedVector<u32> &perm, u32 size) {
            u32 n_cuts = 0;
            for (u32 i = 0; i < size; ++i) {
                for (u32 j = i + 1; j < size; ++j) {
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
        inline u32 count_cut_gain(AlignedVector<u32> &perm, u32 size, u32 c) {
            return m_cut_gain[size - 1][c] + m_cross_matrix.get_entry(perm[size - 1], c);
        }

        /**
         * Initialize the Cross-Matrix.
         */
        inline void initialize_CrossMatrix() {
            for (u32 i = 0; i < m_graph.n_B; ++i) {
                for (u32 j = 0; j < m_graph.n_B; ++j) {
                    u32 c = 0;
                    // loop through the edges
                    for (size_t k = 0; k < m_graph.adj_list[i].size(); ++k) {
                        for (size_t l = 0; l < m_graph.adj_list[j].size(); ++l) {
                            Edge a1 = m_graph.adj_list[i][k];
                            Edge a2 = m_graph.adj_list[j][l];

                            c += (a2.vertex < a1.vertex) * (a1.weight * a2.weight);
                        }
                    }
                    m_cross_matrix.set_entry(i, j, c);
                }
            }

            for (u32 i = 0; i < m_graph.n_B; ++i) {
                for (u32 j = i + 1; j < m_graph.n_B; ++j) {
                    u32 e1 = m_cross_matrix.get_entry(i, j);
                    u32 e2 = m_cross_matrix.get_entry(j, i);
                    if(e1 == 0 && e2 > 0){
                        m_perfect_pattern.add(i, j);
                    }
                    if(e2 == 0 && e1 > 0){
                        m_perfect_pattern.add(j, i);
                    }
                }
            }
            m_perfect_pattern.finalize();
        }

        /**
         * Computes an initial greedy solution.
         */
        inline void initial_greedy() {
            u32 size = m_graph.n_B;

            // get best current solution
            std::copy(m_solution.begin(), m_solution.end(), m_permutation.begin());

            u32 failed_swaps = 0;
            while (failed_swaps < 100) {

                u32 rnd_idx1 = random() % size;
                u32 rnd_idx2 = random() % size;

                u32 v1 = m_permutation[rnd_idx1];
                u32 v2 = m_permutation[rnd_idx2];

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
            u32 tree_movement = TREE_STAY;

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
                    if (m_counter[depth] == (s32) m_candidate_order[depth].get_end()) {
                        tree_movement = TREE_UP;
                        continue;
                    }

                    // check if we are violating a perfect 0/j pattern
                    if(depth > 0) {
                        bool violated = false;
                        for (u32 i = (u32) m_counter[depth]; i < m_candidate_order[depth].get_end(); ++i) {
                            u32 included_vertex = m_permutation[depth - 1];
                            u32 not_included_vertex = m_candidate_order[depth][i].c;
                            if (m_perfect_pattern.matches(not_included_vertex, included_vertex)) {
                                violated = true;
                                break;
                            }
                        }
                        if (violated) {
                            // std::cout << "Found Violation" << std::endl;
                            m_is_used[m_candidate_order[depth][m_counter[depth]].c] = false;
                            tree_movement = TREE_UP;
                            continue;
                        }
                    }

                    // check if we can abort early
                    u32 current_n_cuts = m_cuts[depth]; //count_cuts(m_permutation, depth);
                    u32 min_cuts_remaining = get_minCutsRemaining(depth);
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
                    if ((u32) (depth + 1) == m_graph.n_B) {
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
            for (u32 i = 0; i < m_graph.n_B; ++i) {
                m_candidate_order[0].push_back({i, 0, m_graph.medians[i]});
                m_cut_gain[0][i] = 0;
            }
            m_candidate_order[0].sort();
        };

        /**
         * Executes Dynamic-Candidate-Ordering.
         *
         * @param depth Current depth of the algorithm.
         */
        inline void execute_DCO(int depth) {
            m_candidate_order[depth].clear();
            for (u32 i = 0; i < m_candidate_order[depth - 1].get_end(); ++i) {
                Candidate vertex = m_candidate_order[depth - 1][i];
                if (!m_is_used[vertex.c]) {
                    u32 c = vertex.c;
                    u32 gain = count_cut_gain(m_permutation, depth, c);
                    m_candidate_order[depth].push_back({c, gain, vertex.median});
                    m_cut_gain[depth][c] = gain;
                }
            }

            // m_candidate_order[depth].sort();
        }

        /**
         * Gets the minimum amount of remaining cuts.
         *
         * @param depth Current depth of the algorithm
         * @return Number of cuts.
         */
        inline u32 get_minCutsRemaining(int depth) {
            u32 n_cuts = 0;
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
        inline u32 calculate_intraMinCuts_depth_0() {
            u32 n_cuts = 0;
            for (u32 i = 0; i < m_candidate_order[0].get_end(); ++i) {
                for (u32 j = i + 1; j < m_candidate_order[0].get_end(); ++j) {
                    u32 c1 = m_candidate_order[0][i].c;
                    u32 c2 = m_candidate_order[0][j].c;

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
        inline u32 calculate_intraMinCuts(int depth) {
            u32 n_cuts = 0;
            u32 c2 = m_permutation[depth - 1];
            for (u32 i = 0; i < m_candidate_order[depth].get_end(); ++i) {
                u32 c1 = m_candidate_order[depth][i].c;

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
        inline u32 get_interMinCuts(int depth) {
            u32 n_cuts = 0;
            for (u32 i = 0; i < m_candidate_order[depth].get_end(); ++i) {
                n_cuts += m_candidate_order[depth][i].gain;
            }
            return n_cuts;
        }
    };

}


#endif //PACE2024EXACT_EXHAUSTIVESOLVER_H
