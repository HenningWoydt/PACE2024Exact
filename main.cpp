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

std::string convert(std::vector<int> &vec) {
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
    std::vector<std::string> args(argv, argv + argc);

    args = {"", "../data/exact-public/87.gr", "res.txt"};
    // args = {"", "../data/test/medium_test_set/32.gr", "res.txt"};
    // args = {"", "../data/test/own/reduction_twins/5/48_8/4.gr", "res.txt"};
    // args = {"", "../data/test/own/random/3_3/30.gr", "res.txt"};
    // args = {"", "../data/test/own/partition/2/2_2/0.gr", "res.txt"};

    {
        CrossGuard::Graph g(args[1]);
        CrossGuard::Solver s(g);
        s.solve();
        std::vector<unsigned int> solver_solution = s.get_solution();

        std::ofstream out(args[2], std::ios_base::app);
        out << args[1] << " : " << s.get_time() << std::endl;
        out.close();
        // std::cout << s.get_time() << std::endl;

        exit(EXIT_SUCCESS);
    }

    {
        std::cout << "--- BF ---" << std::endl;
        CrossGuard::Graph g(args[1]);
        CrossGuard::Solver_BF s(g);
        s.solve();

        std::vector<unsigned int> solver_solution = s.get_solution();
        unsigned int solver_n_cuts = g.determine_n_cuts(solver_solution);
        CrossGuard::print(solver_solution);
        std::cout << solver_n_cuts << std::endl;
    }

    {
        std::cout << "--- Exhaustive ---" << std::endl;
        CrossGuard::Graph g(args[1]);
        CrossGuard::ExhaustiveSolver s(g);
        s.solve();

        std::vector<unsigned int> solver_solution = s.get_solution();
        unsigned int solver_n_cuts = g.determine_n_cuts(solver_solution);
        CrossGuard::print(solver_solution);
        std::cout << solver_n_cuts << std::endl;
    }

    {
        std::cout << "--- Partition ---" << std::endl;
        CrossGuard::Graph g(args[1]);

        // g.print();

        // find components of the graph
        CrossGuard::Partitioner partitioner(g);
        partitioner.find_components();

        // determine the component order
        CrossGuard::Graph partition_g = partitioner.get_component_graph();
        CrossGuard::ExhaustiveSolver component_solver(partition_g);
        component_solver.solve();
        std::vector<unsigned int> component_order = component_solver.get_solution();

        // solve each component
        std::vector<std::vector<unsigned int>> solutions;
        for (auto &sub_g: partitioner.get_components()) {
            // solve sub-graph
            CrossGuard::ExhaustiveSolver s(sub_g);
            s.solve();
            std::vector<unsigned int> temp = s.get_solution();
            solutions.push_back(temp);
        }

        std::vector<unsigned int> sol = partitioner.back_propagate(solutions, component_order);
        unsigned int solver_n_cuts = g.determine_n_cuts(sol);
        CrossGuard::print(sol);
        std::cout << solver_n_cuts << std::endl;
    }

    return 0;
}
