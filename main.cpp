#include <iostream>
#include <filesystem>

#include "src/definitions.h"
#include "src/macros.h"
#include "src/misc.h"
#include "src/graph.h"
#include "src/solver_bf.h"
#include "src/exhaustive_solver.h"
#include "src/partitioner.h"
#include "src/solver.h"
#include "src/useless_reducer.h"
#include "src/front_back_reducer.h"

using namespace CrossGuard;

std::string convert(AlignedVector<int> &vec) {
    if (vec.empty()) {
        return "[]";
    }
    std::string s = "[";
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        s += std::to_string(vec[i]) + ", ";
    }
    s += std::to_string(vec.back()) + "]";
    return s;
}

int main(int argc, char *argv[]) {
    AlignedVector<std::string> args(argv, argv + argc);

    // args = {"", "../data/exact-public/83.gr", "res.txt"};
    // args = {"", "../data/test/medium_test_set/22.gr", "res.txt"};
    // args = {"", "../data/test/own/reduction_twins/5/48_8/4.gr", "res.txt"};
    args = {"", "../data/test/own/random/1_2/0.gr", "res.txt"};
    // args = {"", "../data/test/own/partition/2/2_2/0.gr", "res.txt"};


    {
        /*
        Graph g(args[1]);
        Solver s(g);
        s.solve(true);
        AlignedVector<u32> solver_solution = s.get_solution();

        std::ofstream out(args[2], std::ios_base::app);
        out << args[1] << " : " << s.get_time() << std::endl;
        out.close();
        // std::cout << s.get_time() << std::endl;

        exit(EXIT_SUCCESS);
         */
    }

    {
        std::cout << "--- BF ---" << std::endl;
        Graph g(args[1]);
        Solver_BF s(g);
        s.solve();

        AlignedVector<u32> solver_solution = s.get_solution();
        u32 solver_n_cuts = g.determine_n_cuts(solver_solution);
        print(solver_solution);
        std::cout << solver_n_cuts << std::endl;
    }

    {
        std::cout << "--- Front Back ---" << std::endl;
        Graph g(args[1]);

        g.print();

        UselessReducer useless_red(g);
        Graph useless_reduced = useless_red.reduce();
        useless_reduced.print();

        FrontBackReducer fb_reducer(useless_reduced);
        Graph reduced_g = fb_reducer.reduce();
        reduced_g.print();

        ExhaustiveSolver s(reduced_g);
        s.solve();
        AlignedVector<u32> exhaustive_sol = s.get_solution();
        print(exhaustive_sol);

        AlignedVector<u32> temp = fb_reducer.back_propagate(exhaustive_sol);
        temp = useless_red.back_propagate(temp);
        u32 cuts = g.determine_n_cuts(temp);

        print(temp);
        std::cout << cuts << std::endl;
    }
    exit(EXIT_SUCCESS);

    {
        std::cout << "--- One Vertex Partitioner ---" << std::endl;
        Graph g(args[1]);
        g.print();

        // find components of the graph
        OneVertexPartitioner partitioner(g);
        partitioner.find_components();

        std::cout << partitioner.n_comp << " " << partitioner.connecting_vertex << std::endl;

        // solve each component
        AlignedVector<AlignedVector<u32>> solutions;
        for (auto &sub_g: partitioner.get_components()) {
            // solve sub-graph
            ExhaustiveSolver s(sub_g);
            s.solve();
            AlignedVector<u32> exhaustive_sol = s.get_solution();
            solutions.push_back(exhaustive_sol);
        }
        AlignedVector<u32> temp = partitioner.back_propagate(solutions);
        u32 solver_n_cuts = g.determine_n_cuts(temp);
        print(temp);
        std::cout << solver_n_cuts << std::endl;
    }

    {
        std::cout << "--- Solver ---" << std::endl;
        Graph g(args[1]);
        // g.print();

        Solver s(g);
        s.solve(true);
        AlignedVector<u32> temp = s.get_solution();

        u32 solver_n_cuts = g.determine_n_cuts(temp);
        print(temp);
        std::cout << solver_n_cuts << std::endl;
    }

    exit(EXIT_SUCCESS);

    {
        std::cout << "--- Front Back ---" << std::endl;
        Graph g(args[1]);

        g.print();

        UselessReducer useless_red(g);
        Graph useless_reduced = useless_red.reduce();

        FrontBackReducer fb_reducer(g);
        Graph reduced_g = fb_reducer.reduce();

        // EXPECT_EQ(reduced_g.n_B, n_reduce) << g_path << " " << sol_path;

        ExhaustiveSolver s(reduced_g);
        s.solve();
        AlignedVector<u32> exhaustive_sol = s.get_solution();

        AlignedVector<u32> temp = fb_reducer.back_propagate(exhaustive_sol);
        temp = useless_red.back_propagate(temp);
        u32 cuts = g.determine_n_cuts(temp);

        print(temp);
        std::cout << cuts << std::endl;
    }

    /*
    {
        std::cout << "--- Exhaustive ---" << std::endl;
        Graph g(args[1]);
        ExhaustiveSolver s(g);
        s.solve();

        AlignedVector<u32> solver_solution = s.get_solution();
        u32 solver_n_cuts = g.determine_n_cuts(solver_solution);
        print(solver_solution);
        std::cout << solver_n_cuts << std::endl;
    }

    {
        std::cout << "--- Partition ---" << std::endl;
        Graph g(args[1]);

        // find components of the graph
        Partitioner partitioner(g);
        partitioner.find_components();

        // determine the component order
        Graph partition_g = partitioner.get_component_graph();
        ExhaustiveSolver component_solver(partition_g);
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

        AlignedVector<u32> sol = partitioner.back_propagate(solutions, component_order);
        u32 solver_n_cuts = g.determine_n_cuts(sol);
        print(sol);
        std::cout << solver_n_cuts << std::endl;
    }
     */

    return 0;
}
