/* Crossing-Guard. Software to exactly solve the one-sided crossing
   minimization problem (OCM)
   Copyright (C) 2024  Henning Woydt

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or any
   later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.
==============================================================================*/

#include "misc_test.h"

namespace CrossGuard {

    void compare_exhaustive(const std::string &g_path, const std::string &sol_path) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> exhaustive_solution;

        u32 bf_n_cuts;
        u32 exhaustive_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
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
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> partition_solution;

        u32 bf_n_cuts;
        u32 partition_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
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
            Graph partition_order_g = partitioner.get_component_graph();
            ExhaustiveSolver component_solver(partition_order_g);
            component_solver.solve();
            AlignedVector<u32> component_order = component_solver.get_solution();

            // solve each component
            AlignedVector<AlignedVector<u32>> solutions;
            for (auto &sub_g: partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                AlignedVector<u32> exhaustive_sol = s.get_solution();
                solutions.push_back(exhaustive_sol);
            }
            partition_solution = partitioner.back_propagate(solutions, component_order);
            partition_n_cuts = g.determine_n_cuts(partition_solution);
        }

        EXPECT_EQ(partition_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(partition_solution) << " " << to_string(bf_solution);
    }

    void compare_one_vertex_partition(const std::string &g_path, const std::string &sol_path) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> one_vertex_partition_solution;

        u32 bf_n_cuts;
        u32 one_vertex_partition_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);

            // find components of the graph
            OneVertexPartitioner one_vertex_partitioner(g);
            one_vertex_partitioner.find_components();

            EXPECT_EQ(2, one_vertex_partitioner.n_comp) << g_path << " " << sol_path;

            // solve each component
            AlignedVector<AlignedVector<u32>> solutions;
            for (auto &sub_g: one_vertex_partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                AlignedVector<u32> exhaustive_sol = s.get_solution();
                solutions.push_back(exhaustive_sol);
            }
            one_vertex_partition_solution = one_vertex_partitioner.back_propagate(solutions);
            one_vertex_partition_n_cuts = g.determine_n_cuts(one_vertex_partition_solution);
        }

        EXPECT_EQ(one_vertex_partition_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(one_vertex_partition_solution) << " " << to_string(bf_solution);
    }

    void compare_reduction_twins(const std::string &g_path, const std::string &sol_path, int n_reduce) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> twin_reduction_solution;

        u32 bf_n_cuts;
        u32 twin_reduction_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);

            TwinReducer twin_reducer(g);
            Graph twin_reduced_g = twin_reducer.reduce();

            EXPECT_EQ(twin_reduced_g.n_B, n_reduce) << g_path << " " << sol_path;

            ExhaustiveSolver s(twin_reduced_g);
            s.solve();
            AlignedVector<u32> exhaustive_sol = s.get_solution();

            twin_reduction_solution = twin_reducer.back_propagate(exhaustive_sol);
            twin_reduction_n_cuts = g.determine_n_cuts(twin_reduction_solution);
        }

        EXPECT_EQ(twin_reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(twin_reduction_solution) << " " << to_string(bf_solution);
    }

    void compare_domination_reduction(const std::string &g_path, const std::string &sol_path) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> domination_reduction_solution;

        u32 bf_n_cuts;
        u32 domination_reduction_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);

            DominationReducer dom_reducer(g);
            Graph dom_reduced_g = dom_reducer.reduce();

            // EXPECT_EQ(twin_reduced_g.n_B, n_reduce) << g_path << " " << sol_path;

            ExhaustiveSolver s(dom_reduced_g);
            s.solve();
            AlignedVector<u32> exhaustive_sol = s.get_solution();

            domination_reduction_solution = dom_reducer.back_propagate(exhaustive_sol);
            domination_reduction_n_cuts = g.determine_n_cuts(domination_reduction_solution);
        }

        EXPECT_EQ(domination_reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(domination_reduction_solution) << " " << to_string(bf_solution);
    }

    void compare_front_back_reduction(const std::string &g_path, const std::string &sol_path) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> fb_reduction_solution;

        u32 bf_n_cuts;
        u32 fb_reduction_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
                write_solution(shifted_solution, sol_path);
            }
            bf_n_cuts = g.determine_n_cuts(bf_solution);
        }

        {
            Graph g(g_path);

            UselessReducer useless_reducer(g);
            Graph useless_g = useless_reducer.reduce();

            FrontBackReducer fb_reducer(useless_g);
            Graph fb_reduced_g = fb_reducer.reduce();

            ExhaustiveSolver s(fb_reduced_g);
            s.solve();
            AlignedVector<u32> exhaustive_sol = s.get_solution();

            AlignedVector<u32> temp = fb_reducer.back_propagate(exhaustive_sol);
            fb_reduction_solution = useless_reducer.back_propagate(temp);
            fb_reduction_n_cuts = g.determine_n_cuts(fb_reduction_solution);
        }

        EXPECT_EQ(fb_reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(fb_reduction_solution) << " " << to_string(bf_solution);
    }

    void compare_final_solver(const std::string &g_path, const std::string &sol_path) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> solver_solution;

        u32 bf_n_cuts;
        u32 solver_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
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

    void compare_all(const std::string &g_path, const std::string &sol_path) {
        AlignedVector<u32> bf_solution;
        AlignedVector<u32> exhaustive_solution;
        AlignedVector<u32> partition_solution;
        AlignedVector<u32> one_vertex_partition_solution;
        AlignedVector<u32> twin_reduction_solution;
        AlignedVector<u32> fb_reduction_solution;
        AlignedVector<u32> solver_solution;

        u32 bf_n_cuts;
        u32 exhaustive_n_cuts;
        u32 partition_n_cuts;
        u32 one_vertex_partition_n_cuts;
        u32 twin_reduction_n_cuts;
        u32 fb_reduction_n_cuts;
        u32 solver_n_cuts;

        {
            Graph g(g_path);
            if (file_exists(sol_path)) {
                bf_solution = read_solution(sol_path, g.n_A + 1);
            } else {
                Solver_BF solver_bf(g);
                solver_bf.solve();
                bf_solution = solver_bf.get_solution();
                AlignedVector<u32> shifted_solution = solver_bf.get_shifted_solution();
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
            Graph partition_order_g = partitioner.get_component_graph();
            ExhaustiveSolver component_solver(partition_order_g);
            component_solver.solve();
            AlignedVector<u32> component_order = component_solver.get_solution();

            // solve each component
            AlignedVector<AlignedVector<u32>> solutions;
            for (auto &sub_g: partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                AlignedVector<u32> temp = s.get_solution();
                solutions.push_back(temp);
            }
            partition_solution = partitioner.back_propagate(solutions, component_order);
            partition_n_cuts = g.determine_n_cuts(partition_solution);
        }

        {
            Graph g(g_path);

            TwinReducer twin_reducer(g);
            Graph twin_reduced_g = twin_reducer.reduce();

            ExhaustiveSolver s(twin_reduced_g);
            s.solve();
            AlignedVector<u32> temp = s.get_solution();

            twin_reduction_solution = twin_reducer.back_propagate(temp);
            twin_reduction_n_cuts = g.determine_n_cuts(twin_reduction_solution);
        }

        {
            Graph g(g_path);

            UselessReducer useless_reducer(g);
            Graph useless_g = useless_reducer.reduce();

            FrontBackReducer fb_reducer(useless_g);
            Graph reduced_g = fb_reducer.reduce();

            ExhaustiveSolver s(reduced_g);
            s.solve();
            AlignedVector<u32> exhaustive_sol = s.get_solution();

            AlignedVector<u32> temp = fb_reducer.back_propagate(exhaustive_sol);
            fb_reduction_solution = useless_reducer.back_propagate(temp);
            fb_reduction_n_cuts = g.determine_n_cuts(fb_reduction_solution);
        }

        {
            Graph g(g_path);

            // find components of the graph
            OneVertexPartitioner one_vertex_partitioner(g);
            one_vertex_partitioner.find_components();

            // solve each component
            AlignedVector<AlignedVector<u32>> solutions;
            for (auto &sub_g: one_vertex_partitioner.get_components()) {
                // solve sub-graph
                ExhaustiveSolver s(sub_g);
                s.solve();
                AlignedVector<u32> exhaustive_sol = s.get_solution();
                solutions.push_back(exhaustive_sol);
            }
            one_vertex_partition_solution = one_vertex_partitioner.back_propagate(solutions);
            one_vertex_partition_n_cuts = g.determine_n_cuts(one_vertex_partition_solution);
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
        EXPECT_EQ(one_vertex_partition_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(one_vertex_partition_solution) << " " << to_string(bf_solution);
        EXPECT_EQ(twin_reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(twin_reduction_solution) << " " << to_string(bf_solution);
        EXPECT_EQ(fb_reduction_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(fb_reduction_solution) << " " << to_string(bf_solution);
        EXPECT_EQ(solver_n_cuts, bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_solution) << " " << to_string(bf_solution);
    }
}
