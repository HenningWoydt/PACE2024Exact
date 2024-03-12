#ifndef PACE2024EXACT_SOLVER_H
#define PACE2024EXACT_SOLVER_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "Graph.h"
#include "misc.h"
#include "MinCrossMatrix.h"


struct Element {
    int e; // the element
    int gain; // gain in the number of cuts
};

/**
 * Solver for the one-sided crossing minimization problem (OCM).
 */
class Solver {
private:
    const Graph &graph;

    std::vector<int> permutation; // current linear order
    std::vector<int> is_used; // O(1) access to check if a vertex is used

    // holds the number of cuts on each level
    std::vector<int> depth_n_cuts;

    std::vector<int> counter; // used in iterative search
    std::vector<std::vector<Element>> element_order;

    MinCrossMatrix min_cross_matrix;


    std::vector<int> solution; // holds the best found permutation
    int solution_n_cuts;

public:
    /**
     * Default constructor.
     *
     * @param g The graph to optimize.
     */
    explicit Solver(Graph &g) : graph(g) {
        permutation.resize(graph.n_B); // reserve space
        is_used.resize(graph.n_B, false); // no vertex is used

        depth_n_cuts.resize(graph.n_B);

        counter.resize(graph.n_B, -1); // all counter are -1
        element_order.resize(graph.n_B, {});
        for(size_t i = 0; i < (size_t) graph.n_B; ++i){
            element_order[i].resize(graph.n_B - i);
        }

        min_cross_matrix = MinCrossMatrix(graph.n_B);

        solution.resize(graph.n_B); // reserve space
        solution_n_cuts = std::numeric_limits<int>::max();
    }

    /**
     * Determines the permutation, with the least number of cuts.
     */
    void solve() {
        initial_greedy();

        iterative_search();
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [0, ..., n_B - 1].
     *
     * @return Permutation of B.
     */
    [[nodiscard]] std::vector<int> get_solution() const {
        std::vector<int> v(solution);
        return v;
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [n_A + 1, ..., n_A + n_B].
     *
     * @return Permutation of B.
     */
    [[nodiscard]] std::vector<int> get_shifted_solution() const {
        std::vector<int> v(solution);
        for (auto &x: v) {
            x += graph.n_A + 1;
        }
        return v;
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
                int b1 = perm[i];
                int b2 = perm[j];

                int b1_pos = i;
                int b2_pos = j;

                // loop through the edges
                for (size_t k = 0; k < graph.adj_list[b1].size(); ++k) {
                    for (size_t l = 0; l < graph.adj_list[b2].size(); ++l) {
                        int a1_pos = graph.adj_list[b1][k];
                        int a2_pos = graph.adj_list[b2][l];

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
     * Computes an initial greedy solution.
     */
    void initial_greedy(){
        int size = graph.n_B;
        std::iota(permutation.begin(), permutation.end(), 0);
        int n_cuts = count_cuts(permutation, size);

        std::copy(permutation.begin(), permutation.end(), solution.begin());
        solution_n_cuts = n_cuts;

        size_t n_swaps = size * size;
        for(size_t i = 0; i < n_swaps; ++i){

            size_t rnd_idx1 = random() % size;
            size_t rnd_idx2 = random() % size;

            int v1 = permutation[rnd_idx1];
            int v2 = permutation[rnd_idx2];

            permutation[rnd_idx1] = v2;
            permutation[rnd_idx2] = v1;

            int new_n_cuts = count_cuts(permutation, size);
            if(new_n_cuts < n_cuts){
                n_cuts = new_n_cuts;
            } else{
                permutation[rnd_idx1] = v1;
                permutation[rnd_idx2] = v2;
            }
        }

        std::copy(permutation.begin(), permutation.end(), solution.begin());
        solution_n_cuts = n_cuts;
    }

#define TREE_UP 0
#define TREE_STAY 1

    /**
     * Iteratively searches the permutation tree.
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
                if (counter[depth] >= 0) {
                    is_used[counter[depth]] = false;
                }
                counter[depth] += 1;

                // look for valid element
                while (counter[depth] != graph.n_B && is_used[counter[depth]]) {
                    counter[depth] += 1;
                }

                // check if not enough elements remain
                if (counter[depth] == graph.n_B) {
                    tree_movement = TREE_UP;
                    continue;
                }

                // valid element found
                permutation[depth] = counter[depth];
                is_used[counter[depth]] = true;

                // check if we arrived at the bottom
                if (depth + 1 == graph.n_B) {
                    int n_cuts = count_cuts(permutation, depth + 1);
                    if (n_cuts < solution_n_cuts) {
                        std::copy(permutation.begin(), permutation.end(), solution.begin());
                        solution_n_cuts = n_cuts;
                    }

                    // release the element, because we go up
                    is_used[counter[depth]] = false;
                    tree_movement = TREE_UP;
                    continue;
                }

                // check if we can abort early
                int current_n_cuts = count_cuts(permutation, depth + 1);
                if (current_n_cuts >= solution_n_cuts) {
                    // release the element, because we go up
                    is_used[counter[depth]] = false;
                    tree_movement = TREE_UP;
                    continue;
                }
                depth_n_cuts[depth] = current_n_cuts;

                // move down and reset counter
                depth += 1;
                counter[depth] = -1;

                tree_movement = TREE_STAY;
                continue;
            }
        }
    }
};


#endif //PACE2024EXACT_SOLVER_H
