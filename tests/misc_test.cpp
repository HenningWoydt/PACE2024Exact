#include "misc_test.h"

namespace CrossGuard {

    void compare_exhaustive(const std::string &g_path, const std::string &sol_path) {
        std::vector<unsigned int> bf_solution;
        std::vector<unsigned int> exhaustive_solution;

        unsigned int bf_n_cuts;
        unsigned int exhaustive_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                std::vector<unsigned int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }
        {
            Graph g(g_path);
            ExhaustiveSolver solver(g);
            solver.solve();
            exhaustive_solution = solver.get_solution();
            exhaustive_n_cuts = g.determine_n_cuts(exhaustive_solution);
        }

        EXPECT_EQ(exhaustive_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(exhaustive_solution) << " " << to_string(bf_solution);
    }

    void compare_partition(const std::string &g_path, const std::string &sol_path, int n_partitions) {
        std::vector<unsigned int> bf_solution;
        std::vector<unsigned int> partition_solution;

        unsigned int bf_n_cuts;
        unsigned int partition_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                std::vector<unsigned int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
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
            std::vector<unsigned int> component_order = component_solver.get_solution();

            // solve each component
            std::vector<std::vector<unsigned int>> solutions;
            for (auto &sub_g: partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                std::vector<unsigned int> exhaustive_sol = s.get_solution();
                solutions.push_back(exhaustive_sol);
            }
            partition_solution = partitioner.back_propagate(solutions, component_order);
            partition_n_cuts = g.determine_n_cuts(partition_solution);
        }

        EXPECT_EQ(partition_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(partition_solution) << " " << to_string(bf_solution);
    }

    void compare_reduction_twins(const std::string &g_path, const std::string &sol_path, int n_reduce) {
        std::vector<unsigned int> bf_solution;
        std::vector<unsigned int> reduction_solution;

        unsigned int bf_n_cuts;
        unsigned int reduction_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                std::vector<unsigned int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);

            Reducer reducer(g, true);
            Graph reduced_g = reducer.reduce();

            EXPECT_EQ(reduced_g.n_B, n_reduce) << g_path << " " << sol_path;

            ExhaustiveSolver s(reduced_g);
            s.solve();
            std::vector<unsigned int> exhaustive_sol = s.get_solution();

            reduction_solution = reducer.back_propagate(exhaustive_sol);
            reduction_n_cuts = g.determine_n_cuts(reduction_solution);
        }

        EXPECT_EQ(reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(reduction_solution) << " " << to_string(bf_solution);
    }

    void compare_final_solver(const std::string &g_path, const std::string &sol_path) {
        std::vector<unsigned int> bf_solution;
        std::vector<unsigned int> solver_solution;

        unsigned int bf_n_cuts;
        unsigned int solver_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                std::vector<unsigned int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);
            Solver solver(g);
            solver.solve();
            solver_solution = solver.get_solution();
            solver_n_cuts = g.determine_n_cuts(solver_solution);
        }

        EXPECT_EQ(solver_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_solution) << " " << to_string(bf_solution);
    }

    void compare_all(const std::string &g_path, const std::string &sol_path){
        std::vector<unsigned int> bf_solution;
        std::vector<unsigned int> exhaustive_solution;
        std::vector<unsigned int> partition_solution;
        std::vector<unsigned int> reduction_solution;
        std::vector<unsigned int> solver_solution;

        unsigned int bf_n_cuts;
        unsigned int exhaustive_n_cuts;
        unsigned int partition_n_cuts;
        unsigned int reduction_n_cuts;
        unsigned int solver_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                std::vector<unsigned int> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);
            ExhaustiveSolver solver(g);
            solver.solve();
            exhaustive_solution = solver.get_solution();
            exhaustive_n_cuts = g.determine_n_cuts(exhaustive_solution);
        }

        {
            Graph g(g_path);

            // find components of the graph
            Partitioner partitioner(g);
            partitioner.find_components();

            // determine the component order
            Graph partition_g = partitioner.get_component_graph();
            ExhaustiveSolver component_solver(partition_g);
            component_solver.solve();
            std::vector<unsigned int> component_order = component_solver.get_solution();

            // solve each component
            std::vector<std::vector<unsigned int>> solutions;
            for (auto &sub_g: partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                std::vector<unsigned int> temp = s.get_solution();
                solutions.push_back(temp);
            }
            partition_solution = partitioner.back_propagate(solutions, component_order);
            partition_n_cuts = g.determine_n_cuts(partition_solution);
        }

        {
            Graph g(g_path);

            Reducer reducer(g, true);
            Graph reduced_g = reducer.reduce();

            ExhaustiveSolver s(reduced_g);
            s.solve();
            std::vector<unsigned int> temp = s.get_solution();

            reduction_solution = reducer.back_propagate(temp);
            reduction_n_cuts = g.determine_n_cuts(reduction_solution);
        }

        {
            Graph g(g_path);
            Solver solver(g);
            solver.solve();
            solver_solution = solver.get_solution();
            solver_n_cuts = g.determine_n_cuts(solver_solution);
        }

        EXPECT_EQ(exhaustive_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(exhaustive_solution) << " " << to_string(bf_solution);
        EXPECT_EQ(partition_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(partition_solution) << " " << to_string(bf_solution);
        EXPECT_EQ(reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(reduction_solution) << " " << to_string(bf_solution);
        EXPECT_EQ(solver_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_solution) << " " << to_string(bf_solution);
    }

}
