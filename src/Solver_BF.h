#ifndef PACE2024EXACT_SOLVER_BF_H
#define PACE2024EXACT_SOLVER_BF_H

#define BF_DEBUG 0

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "Graph.h"
#include "misc.h"

/**
 * Brute-Force Solver.
 */
class Solver_BF {
private:
    const Graph &graph;

    std::vector<int> permutation; // current linear order
    std::vector<bool> is_used; // O(1) access if a vertex is already used
    int curr_size;

    std::vector<int> solution;
    int solution_n_cuts;

    // debug vars
#if BF_DEBUG
    std::vector<std::vector<int>> all_permutations;
#endif

public:

    /**
     * Default constructor.
     *
     * @param g The m_graph to optimize.
     */
    explicit Solver_BF(Graph &g) : graph(g) {
        permutation.resize(graph.m_n_B);
        is_used.resize(graph.m_n_B, false);
        curr_size = 0;

        solution.resize(graph.m_n_B);
        solution_n_cuts = std::numeric_limits<int>::max();
    }

    /**
     * Determines the m_permutation, with the least number of cuts.
     */
    inline void solve() {
        recursive_solve();

#if BF_DEBUG
        // check that n! permutations have been found
        if (all_permutations.size() != fac(graph.m_n_B)) {
            std::cout << "WARNING: Not all permutations have been found! Only " << all_permutations.size() << " of " << fac(graph.m_n_B) << " have been found!" << std::endl;
        }

        // check that each entry has exactly m_n_B entries
        for (auto &vec: all_permutations) {
            if (vec.size() != graph.m_n_B) {
                std::cout << "WARNING: Permutation does not contain " << graph.m_n_B << " elements, but " << vec.size() << "!" << std::endl;
                std::cout << "Permutation: ";
                print(vec);
            }
        }

        // check that no entry has duplicates
        for (auto &vec: all_permutations) {
            if (!no_duplicates(vec)) {
                std::cout << "WARNING: Permutation contains duplicates!" << std::endl;
                std::cout << "Permutation: ";
                print(vec);
            }
        }

        // check that same m_permutation has not been found multiple times
        if(!no_duplicates(all_permutations)){
            std::cout << "WARNING: Permutation has been considered multiple times!" << std::endl;
        }
#endif
    }

    /**
     * Returns the m_permutation vector. All entries are in the range
     * [0, ..., n_B - 1].
     *
     * @return Permutation of B.
     */
    inline std::vector<int> get_solution() const {
        std::vector<int> v(solution);
        return v;
    }

    /**
     * Returns the m_permutation vector. All entries are in the range
     * [n_A + 1, ..., n_A + n_B].
     *
     * @return Permutation of B.
     */
    inline std::vector<int> get_shifted_solution() const {
        std::vector<int> v(solution);
        for (auto &x: v) {
            x += graph.m_n_A + 1;
        }
        return v;
    }


private:
    /**
     * Counts the number of cuts, based on the current m_permutation.
     *
     * @return Number of cuts.
     */
    inline int count_cuts() {
        int n_cuts = 0;
        for (int i = 0; i < curr_size; ++i) {
            for (int j = i + 1; j < curr_size; ++j) {
                int b1 = permutation[i];
                int b2 = permutation[j];

                // loop through the edges
                for (size_t k = 0; k < graph.m_adj_list[b1].size(); ++k) {
                    for (size_t l = 0; l < graph.m_adj_list[b2].size(); ++l) {
                        int a1_pos = graph.m_adj_list[b1][k];
                        int a2_pos = graph.m_adj_list[b2][l];

                        n_cuts += (a2_pos < a1_pos);
                    }
                }
            }
        }
        return n_cuts;
    }

    /**
     * Recursively searches the permutation tree.
     */
    inline void recursive_solve() {
        if (curr_size == graph.m_n_B) {
#if BF_DEBUG
            // add found m_permutation
            all_permutations.push_back(permutation);
#endif
            // we have a permutation, check the number of cuts
            int n_cuts = count_cuts();
            if (n_cuts < solution_n_cuts) {
                std::copy(permutation.begin(), permutation.end(), solution.begin());
                solution_n_cuts = n_cuts;
            }
            return;
        }

        for (int i = 0; i < graph.m_n_B; ++i) {
            if (!is_used[i]) {
                // vertex i is not used, so append it to the m_permutation
                permutation[curr_size] = i;
                is_used[i] = true;
                curr_size += 1;

                recursive_solve();

                is_used[i] = false;
                curr_size -= 1;
            }
        }
    }
};


#endif //PACE2024EXACT_SOLVER_BF_H
