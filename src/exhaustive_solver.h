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
        const u32 n;

        AlignedVector<u32> m_permutation; // current linear order
        AlignedVector<u8> m_is_used; // O(1) access to check if a vertex is used

        AlignedVector<s32> m_counter; // used in iterative search
        AlignedVector<CandidateManager> m_candidate_order;

        AlignedVector<u32> m_cuts; // number of cuts at each depth
        AlignedVector<u32> m_intra_min_cuts; // number of intra min cuts per depth
        AlignedVector<u32> m_inter_min_cuts; // number of inter min cuts per depth

        // Minimum Cross Matrix
        CrossMatrix m_cross_matrix;
        PerfectPattern m_perfect_pattern;

        // holds the best found permutation
        AlignedVector<u32> m_solution;
        u32 m_solution_n_cuts;

        // holds the (optional) initial solution
        AlignedVector<u32> m_init_sol;

    public:
        /**
         * Default constructor.
         *
         * @param g The graph to optimize.
         */
        explicit ExhaustiveSolver(Graph &g) : m_graph(g),
                                              n(g.n_B),
                                              m_cross_matrix(g.n_B),
                                              m_perfect_pattern(g.n_B) {
            m_permutation.resize(n); // reserve space
            m_is_used.resize(n, false); // no vertex is used

            m_counter.resize(n, -1); // all m_counter are -1
            m_candidate_order.reserve(n);
            for (u32 i = 0; i < n; ++i) {
                m_candidate_order.emplace_back(1 + n - i);
            }

            m_cuts.resize(n);
            m_intra_min_cuts.resize(n);
            m_inter_min_cuts.resize(n);

            m_solution.resize(n); // reserve space
            m_solution_n_cuts = std::numeric_limits<u32>::max();
        }

        /**
         * Sets an initial solution.
         *
         * @param init_sol The initial solution.
         */
        inline void set_initial_solution(AlignedVector<unsigned int> &init_sol) {
            m_init_sol.resize(n);
            std::copy(init_sol.begin(), init_sol.end(), m_init_sol.begin());
        }

        /**
         * Determines the m_permutation, with the least number of cuts.
         */
        inline void solve() {
            // initialize the Crossing Matrix
            initialize_CrossMatrix();

            // most simple solution
            std::iota(m_permutation.begin(), m_permutation.end(), 0);
            check_new_solution(m_permutation);

            // initial solution, if provided
            if (!m_init_sol.empty()) {
                check_new_solution(m_init_sol);
            }

            // exhaustive search
            iterative_search();
        }

        /**
         * Returns the permutation vector. All entries are in the range
         * [0, ..., n - 1].
         *
         * @return Permutation of B.
         */
        inline AlignedVector<unsigned int> get_solution() const {
            AlignedVector<unsigned int> v(m_solution.size());
            std::copy(m_solution.begin(), m_solution.end(), v.begin());
            return v;
        }

    private:
        /**
         * Determines is a new solution has been found.
         *
         * @param sol The possible solution.
         */
        inline bool check_new_solution(AlignedVector<u32> &sol) {
            u32 n_cuts = count_cuts(sol, n);
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
                    n_cuts += m_cross_matrix.matrix[perm[i] * n + perm[j]];
                }
            }
            return n_cuts;
        }

        /**
         * Initialize the Cross-Matrix.
         */
        inline void initialize_CrossMatrix() {
            ASSERT(m_graph.is_finalized);

            for (u32 i = 0; i < n; ++i) {
                for (u32 j = i+1; j < n; ++j) {
                    u32 c1 = 0;
                    u32 c2 = 0;
                    // loop through the edges
                    for (size_t k = 0; k < m_graph.adj_list[i].size(); ++k) {
                        for (size_t l = 0; l < m_graph.adj_list[j].size(); ++l) {
                            Edge a1 = m_graph.adj_list[i][k];
                            Edge a2 = m_graph.adj_list[j][l];

                            u32 cuts = a1.weight * a2.weight;

                            c1 += (a2.vertex < a1.vertex) * cuts;
                            c2 += (a1.vertex < a2.vertex) * cuts;
                        }
                    }
                    m_cross_matrix.matrix[i * n + j] = c1;
                    m_cross_matrix.matrix[j * n + i] = c2;

                    if (c1 == 0 && c2 > 0) { m_perfect_pattern.add(i, j); }
                    if (c2 == 0 && c1 > 0) { m_perfect_pattern.add(j, i); }
                }
            }
        }

        /**
         * Iteratively searches for a solution.
         */
        inline void iterative_search() {
            execute_DCO_depth_0();
            m_cuts[0] = 0;
            m_intra_min_cuts[0] = calculate_intraMinCuts_depth_0();
            m_inter_min_cuts[0] = 0;

            int depth = 0;

            while (depth >= 0) {

                // release the current element and move further
                m_is_used[m_candidate_order[depth].candidates[std::max(0, m_counter[depth])].c] = false;
                m_counter[depth] += 1;

                // check if at the end
                if (m_counter[depth] == (s32) m_candidate_order[depth].size) {
                    depth -= 1;
                    continue;
                }

                // check if we can abort based on the number of cuts remaining
                if (m_cuts[depth] + m_intra_min_cuts[depth] + m_inter_min_cuts[depth] >= m_solution_n_cuts) {
                    depth -= 1;
                    continue;
                }

                // valid element found
                Candidate vertex = m_candidate_order[depth].candidates[m_counter[depth]];
                m_permutation[depth] = vertex.c;

                // check if we arrived at the bottom
                if ((u32) depth == n - 1) {
                    if (m_cuts[depth] + vertex.gain < m_solution_n_cuts) {
                        std::copy(m_permutation.begin(), m_permutation.end(), m_solution.begin());
                        m_solution_n_cuts = m_cuts[depth] + vertex.gain;
                    }

                    // go up
                    depth -= 1;
                    continue;
                }

                // mark element as found
                m_is_used[vertex.c] = true;

                // move down and reset counter
                depth += 1;
                bool abort = execute_DCO(depth);
                if(abort){
                    // go up
                    depth -= 1;
                    continue;
                }

                // reset the counter
                m_counter[depth] = -1;
            }
        }

        /**
         * Executes Dynamic-Candidate-Ordering at depth 0.
         */
        inline void execute_DCO_depth_0() {
            m_candidate_order[0].initialize_median_vec(n);
            for (u32 i = 0; i < n; ++i) {
                m_candidate_order[0].candidates[i] = {i, 0};
                m_candidate_order[0].median_candidate[i] = {i, m_graph.medians[i]};
                m_candidate_order[0].max_median = std::max(m_candidate_order[0].max_median, m_graph.medians[i]);
            }
            m_candidate_order[0].size = n;
            m_candidate_order[0].sort();
        };

        /**
         * Executes Dynamic-Candidate-Ordering.
         *
         * @param depth Current depth of the algorithm.
         */
        inline bool execute_DCO(int depth) {
            // get last added vertex
            Candidate last_added_vertex = m_candidate_order[depth - 1].candidates[m_counter[depth - 1]];

            // update the current number of cuts
            m_cuts[depth] = m_cuts[depth - 1] + last_added_vertex.gain;

            // determine the number of cuts between placed and still to be placed vertices
            u32 inter_cuts = 0;

            // count the number of cuts that get removed by adding the last vertex
            u32 n_intra_cuts_removed = 0;

            u32 idx = 0;
            for (u32 i = 0; i < m_candidate_order[depth - 1].size; ++i) {
                // curr vertex
                Candidate vertex = m_candidate_order[depth - 1].candidates[i];
                u32 vertex_not_used = (1 - m_is_used[vertex.c]); // 0 if vertex is used, 1 else

                // check if a pattern is violated
                if (m_perfect_pattern.matches(vertex.c, last_added_vertex.c)) {
                    return true;
                }

                // update inter cuts
                u32 extra_gain = m_cross_matrix.matrix[last_added_vertex.c * n + vertex.c];
                inter_cuts += vertex_not_used * (vertex.gain + extra_gain);

                // update intra cuts
                n_intra_cuts_removed += vertex_not_used * std::min(extra_gain, m_cross_matrix.matrix[vertex.c * n + last_added_vertex.c]);

                // place vertex
                m_candidate_order[depth].candidates[idx] = vertex;
                m_candidate_order[depth].candidates[idx].gain += extra_gain;
                idx += vertex_not_used;
            }
            // set size
            m_candidate_order[depth].size = idx;

            // update the intra cuts
            m_intra_min_cuts[depth] = m_intra_min_cuts[depth - 1] - n_intra_cuts_removed;

            // update the inter cuts
            m_inter_min_cuts[depth] = inter_cuts;

            return false;
        }

        /**
         * Gets the minimum amount of cuts between the candidates still to be
         * placed.
         *
         * @return Minimum number of cuts.
         */
        inline u32 calculate_intraMinCuts_depth_0() {
            u32 n_cuts = 0;
            for (u32 i = 0; i < m_candidate_order[0].size; ++i) {
                for (u32 j = i + 1; j < m_candidate_order[0].size; ++j) {
                    u32 c1 = m_candidate_order[0].candidates[i].c;
                    u32 c2 = m_candidate_order[0].candidates[j].c;

                    u32 cut1 = m_cross_matrix.matrix[c1 * n + c2];
                    u32 cut2 = m_cross_matrix.matrix[c2 * n + c1];

                    n_cuts += std::min(cut1, cut2);
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
            u32 c1 = m_permutation[depth - 1];
            for (u32 i = 0; i < m_candidate_order[depth].size; ++i) {
                u32 c2 = m_candidate_order[depth].candidates[i].c;

                u32 cut1 = m_cross_matrix.matrix[c1 * n + c2];
                u32 cut2 = m_cross_matrix.matrix[c2 * n + c1];

                n_cuts += std::min(cut1, cut2);
            }
            return n_cuts;
        }

        /**
         * Determines if a pattern is violated.
         *
         * @param depth Current depth.
         * @return True if a pattern is violated, false else.
         */
        inline bool pattern_violated(int depth){
            for (u32 i = 0; i < m_candidate_order[depth].size; ++i) {
                u32 included_vertex = m_permutation[depth - 1];
                u32 not_included_vertex = m_candidate_order[depth].candidates[i].c;
                if (m_perfect_pattern.matches(not_included_vertex, included_vertex)) {
                    return true;
                }
            }
            return false;
        }
    };

}


#endif //PACE2024EXACT_EXHAUSTIVESOLVER_H
