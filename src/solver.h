#ifndef PACE2024EXACT_SOLVER_H
#define PACE2024EXACT_SOLVER_H

#include "graph.h"
#include "partitioner.h"
#include "exhaustive_solver.h"
#include "reducer.h"

namespace CrossGuard {

/**
 * Class to solve the problem.
 */
    class Solver {
    private:
        const Graph &m_graph;
        AlignedVector<u32> m_solution;

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
            ASSERT(m_graph.is_finalized);

            // find components of the graph
            Partitioner partitioner(m_graph);
            partitioner.find_components();

            // determine the component order
            Graph partition_g = partitioner.get_component_graph();
            ASSERT(partition_g.is_finalized);
            ExhaustiveSolver component_solver(partition_g);
            component_solver.solve();
            AlignedVector<u32> component_order = component_solver.get_solution();

            // std::cout << "\tNumber of components: " << component_order.size() << std::endl;

            // solve each component
            AlignedVector<AlignedVector<u32>> solutions;
            for (auto &g: partitioner.get_components()) {
                ASSERT(g.is_finalized);
                // solve sub-graph

                Reducer reducer(g, true);
                Graph reduced_g = reducer.reduce();
                ASSERT(reduced_g.is_finalized);

                // std::cout << "\t\tComponent reduced from " << g.n_B << " to " << reduced_g.n_B << std::flush;

                ExhaustiveSolver s(reduced_g);
                AlignedVector<u32> median_vector = reduced_g.get_median_solution();
                s.set_initial_solution(median_vector);
                s.solve();
                AlignedVector<u32> exhaustive_sol = s.get_solution();

                // std::cout << " -- Component solved" << std::endl;

                AlignedVector<unsigned int> reduced_sol = reducer.back_propagate(exhaustive_sol);

                solutions.push_back(reduced_sol);
            }

            m_solution = partitioner.back_propagate(solutions, component_order);

            ep = std::chrono::steady_clock::now();
        }

        /**
         * Returns the solution.
         *
         * @return The solution.
         */
        AlignedVector<unsigned int> get_solution() {
            AlignedVector<u32> sol(m_solution);
            return sol;
        }

        /**
         * Returns the permutation vector. All entries are in the range
         * [n_A + 1, ..., n_A + n_B].
         *
         * @return Permutation of B.
         */
        inline AlignedVector<unsigned int> get_shifted_solution() const {
            AlignedVector<u32> v(m_solution.size());
            std::copy(m_solution.begin(), m_solution.end(), v.begin());
            for (auto &x: v) {
                x += m_graph.n_A + 1;
            }
            return v;
        }

        double get_time() {
            return get_seconds(sp, ep);
        }
    };

}

#endif //PACE2024EXACT_SOLVER_H
