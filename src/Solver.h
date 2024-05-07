#ifndef PACE2024EXACT_SOLVER_H
#define PACE2024EXACT_SOLVER_H

#include "Graph.h"
#include "Partitioner.h"
#include "ExhaustiveSolver.h"
#include "Reducer.h"

namespace CrossGuard {

/**
 * Class to solve the problem.
 */
    class Solver {
    private:
        const Graph &m_graph;
        std::vector<int> m_solution;

        // timings
        std::chrono::steady_clock::time_point sp;
        std::chrono::steady_clock::time_point ep;

    public:
        /**
         * Default constructor.
         *
         * @param g The graph.
         */
        explicit Solver(const Graph &g) : m_graph(g) {}

        /**
         * Solves the problem.
         */
        void solve() {
            sp = std::chrono::steady_clock::now();

            // find components of the graph
            Partitioner partitioner(m_graph);
            partitioner.find_components();

            // std::cout << "n_components = " << partitioner.m_n_components << std::endl;

            // determine the component order
            Graph partition_g = partitioner.get_component_graph();
            ExhaustiveSolver component_solver(partition_g);
            component_solver.solve();
            std::vector<int> component_order = component_solver.get_solution();

            // solve each component
            std::vector<std::vector<int>> solutions;
            for (auto &g: partitioner.get_components()) {
                // solve sub-graph

                // Reducer reducer(g);
                // Graph reduced_g = reducer.reduce();

                ExhaustiveSolver s(g);
                s.solve();
                std::vector<int> exhaustive_sol = s.get_solution();

                // std::vector<int> reduced_sol = reducer.back_propagate(exhaustive_sol);

                solutions.push_back(exhaustive_sol);
            }

            m_solution = partitioner.back_propagate(solutions, component_order);

            ep = std::chrono::steady_clock::now();
        }

        /**
         * Returns the solution.
         *
         * @return The solution.
         */
        std::vector<int> get_solution() {
            std::vector<int> sol(m_solution);
            return sol;
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

        double get_time() {
            return get_seconds(sp, ep);
        }
    };

}

#endif //PACE2024EXACT_SOLVER_H
