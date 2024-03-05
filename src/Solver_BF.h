#ifndef PACE2024EXACT_SOLVER_BF_H
#define PACE2024EXACT_SOLVER_BF_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "Graph.h"
#include "misc.h"

class Solver_BF {
public:
    Graph &graph;

    std::vector<uint32_t> permutation; // current linear order
    std::vector<uint32_t> position; // O(1) access to the position of each vertex
    std::vector<bool> is_used; // O(1) access if a vertex is already used
    size_t curr_size;

    std::vector<uint32_t> solution;
    uint32_t solution_n_cuts;

    // debug vars
#define BF_DEBUG 1
#if BF_DEBUG
    std::vector<std::vector<uint32_t>> all_permutations;
#endif


    explicit Solver_BF(Graph &g) : graph(g) {
        permutation.resize(graph.n_B);
        position.resize(graph.n_B);
        is_used.resize(graph.n_B, false);
        curr_size = 0;

        solution.resize(graph.n_B);
        solution_n_cuts = std::numeric_limits<uint32_t>::max();
    }

    uint32_t count_cuts(){
        uint32_t n_cuts = 0;
        for(size_t i = 0; i < curr_size; ++i){
            for(size_t j = i+1; j < curr_size; ++j){
                uint32_t b1 = permutation[i];
                uint32_t b2 = permutation[j];

                uint32_t b1_pos = position[b1];
                uint32_t b2_pos = position[b2];

                // loop through the edges
                for(size_t k = 0; k < graph.adj_list[b1].size(); ++k){
                    for(size_t l = 0; l < graph.adj_list[b2].size(); ++l){
                        uint32_t a1_pos = graph.adj_list[b1][k];
                        uint32_t a2_pos = graph.adj_list[b2][l];

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

    void solve() {
        recursive_solve();

#if BF_DEBUG
        // check that n! permutations have been found
        if (all_permutations.size() != fac(graph.n_B)) {
            std::cout << "WARNING: Not all permutations have been found! Only " << all_permutations.size() << " of " << fac(graph.n_B) << " have been found!" << std::endl;
        }

        // check that no entry has duplicates
        for (auto &vec: all_permutations) {
            if (!no_duplicates(vec)) {
                std::cout << "WARNING: Permutation contains duplicates!" << std::endl;
                std::cout << "Permutation: ";
                print(vec);
            }
        }

        // check that same permutation has not been found multiple times
        if(!no_duplicates(all_permutations)){
            std::cout << "WARNING: Permutation has been considered multiple times!" << std::endl;
        }
#endif

        // shift solution vector to original space
        for(size_t i = 0; i < solution.size(); ++i){
            solution[i] += graph.n_A + 1;
        }
    }

    void recursive_solve() {
        if (curr_size == graph.n_B) {
#if BF_DEBUG
            // add found permutation
            all_permutations.push_back(permutation);
#endif
            // we have a permutation, check the number of cuts
            uint32_t n_cuts = count_cuts();
            if(n_cuts < solution_n_cuts){
                std::copy(permutation.begin(), permutation.end(), solution.begin());
                solution_n_cuts = n_cuts;
            }
            return;
        }

        for (uint32_t i = 0; i < graph.n_B; ++i) {
            if (!is_used[i]) {
                // vertex i is not used, so append it to the permutation
                permutation[curr_size] = i;
                position[i] = curr_size;
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
