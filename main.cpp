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

    // args = {"", "../data/exact-public/87.gr", "res.txt"};
    // args = {"", "../data/test/medium_test_set/22.gr", "res.txt"};
    // args = {"", "../data/test/own/reduction_twins/5/48_8/4.gr", "res.txt"};
    // args = {"", "../data/test/own/random/2_3/26.gr", "res.txt"};
    // args = {"", "../data/test/own/partition/2/2_2/0.gr", "res.txt"};

    {
        Graph g(args[1]);
        Solver s(g);
        s.solve();
        AlignedVector<u32> solver_solution = s.get_solution();

        std::ofstream out(args[2], std::ios_base::app);
        out << args[1] << " : " << s.get_time() << std::endl;
        out.close();
        // std::cout << s.get_time() << std::endl;

        exit(EXIT_SUCCESS);
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

    return 0;
}
