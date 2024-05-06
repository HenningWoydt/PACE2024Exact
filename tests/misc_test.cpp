#include "misc_test.h"
#include "../src/Solver.h"

namespace CrossGuard {

    void compare_exhaustive(std::string &g_path, std::string &sol_path) {
        std::vector<int> solver_bf_solution;
        std::vector<int> solver_exhaustive_solution;
        std::vector<int> solver_solution;

        int solver_bf_n_cuts;
        int solver_exhaustive_n_cuts;
        int solver_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                solver_bf_solution = read_solution(sol_path, g.m_n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                solver_bf_solution = solver_bf.get_solution();
                std::vector<int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            solver_bf_n_cuts = g.determine_n_cuts(solver_bf_solution);
        }
        {
            Graph g(g_path);
            ExhaustiveSolver solver(g);
            solver.solve();
            solver_exhaustive_solution = solver.get_solution();
            solver_exhaustive_n_cuts = g.determine_n_cuts(solver_exhaustive_solution);
        }
        {
            Graph g(g_path);
            Solver solver(g);
            solver.solve();
            solver_solution = solver.get_solution();
            solver_n_cuts = g.determine_n_cuts(solver_exhaustive_solution);
        }

        EXPECT_EQ(solver_exhaustive_n_cuts, solver_bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_exhaustive_solution) << " " << to_string(solver_bf_solution);
        EXPECT_EQ(solver_n_cuts, solver_bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_solution) << " " << to_string(solver_bf_solution);
    }

    void compare_partition(std::string &g_path, std::string &sol_path, int n_partitions) {
        std::vector<int> solver_bf_solution;
        std::vector<int> solver_partition_solution;

        int solver_bf_n_cuts;
        int solver_partition_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                solver_bf_solution = read_solution(sol_path, g.m_n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                solver_bf_solution = solver_bf.get_solution();
                std::vector<int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            solver_bf_n_cuts = g.determine_n_cuts(solver_bf_solution);
        }

        {
            Graph g(g_path);

            // find components of the graph
            Partitioner partitioner(g);
            partitioner.find_components();

            EXPECT_EQ(n_partitions, partitioner.m_n_components) << g_path << " " << sol_path;

            // determine the component order
            Graph partition_g = partitioner.get_component_graph();
            ExhaustiveSolver component_solver(partition_g);
            component_solver.solve();
            std::vector<int> component_order = component_solver.get_solution();

            // solve each component
            std::vector<std::vector<int>> solutions;
            for (auto &sub_g: partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                std::vector<int> exhaustive_sol = s.get_solution();
                solutions.push_back(exhaustive_sol);
            }
            solver_partition_solution = partitioner.back_propagate(solutions, component_order);
            solver_partition_n_cuts = g.determine_n_cuts(solver_partition_solution);
        }

        EXPECT_EQ(solver_partition_n_cuts, solver_bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_partition_solution) << " " << to_string(solver_bf_solution);
    }

    void compare_reduction_twins(std::string &g_path, std::string &sol_path, int n_reduce) {
        std::vector<int> solver_bf_solution;
        std::vector<int> solver_reduction_twins_solution;

        int solver_bf_n_cuts;
        int solver_reduction_twins_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                solver_bf_solution = read_solution(sol_path, g.m_n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                solver_bf_solution = solver_bf.get_solution();
                std::vector<int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            solver_bf_n_cuts = g.determine_n_cuts(solver_bf_solution);
        }

        {
            Graph g(g_path);

            Reducer reducer(g, true, false);
            Graph reduced_g = reducer.reduce();

            EXPECT_EQ(reduced_g.m_n_B, n_reduce);

            ExhaustiveSolver s(reduced_g);
            s.solve();
            std::vector<int> exhaustive_sol = s.get_solution();

            solver_reduction_twins_solution = reducer.back_propagate(exhaustive_sol);
            solver_reduction_twins_n_cuts = g.determine_n_cuts(solver_reduction_twins_solution);
        }

        EXPECT_EQ(solver_reduction_twins_n_cuts, solver_bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_reduction_twins_solution) << " " << to_string(solver_bf_solution);
    }

    void compare(std::string &g_path, std::string &sol_path) {
        return;
        std::vector<int> solver_solution;
        std::vector<int> real_solution;

        int solver_n_cuts;
        int real_n_cuts;

        {
            Graph g(g_path);
            Solver solver(g);
            solver.solve();
            solver_solution = solver.get_solution();
            solver_n_cuts = g.determine_n_cuts(solver_solution);
        }
        {
            Graph g(g_path);
            real_solution = read_solution(sol_path, g.m_n_A + 1);
            real_n_cuts = g.determine_n_cuts(real_solution);
        }

        EXPECT_EQ(solver_n_cuts, real_n_cuts) << g_path << " " << sol_path;
    }

}
