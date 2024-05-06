#include <iostream>
#include <filesystem>

#include "src/Graph.h"
#include "src/Solver_BF.h"
#include "src/ExhaustiveSolver.h"
#include "src/misc.h"
#include "src/Partitioner.h"
#include "src/Solver.h"

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

    // args = {"", "../data/test/medium_test_set/32.gr", "res.txt"};
    // args = {"", "../data/test/test.gr", "res.txt"};

    {
        // Graph g(args[1]);
        // ExhaustiveSolver s(g);
        // s.solve();

        // std::vector<int> solver_solution = s.get_solution();
        // int solver_n_cuts = g.determine_n_cuts(solver_solution);
        // print(solver_solution);
        // print(s.get_shifted_solution());
        // std::cout << solver_n_cuts << std::endl;
        // double time = s.get_time();

        // if (!std::filesystem::exists(args[2])) {
        //     std::ofstream outfile(args[2]);
        // }
    }

    {
        CrossGuard::Graph g(args[1]);
        CrossGuard::Solver s(g);
        s.solve();
        std::vector<int> sol = s.get_solution();
        int solver_n_cuts = g.determine_n_cuts(sol);
        // print(sol);
        // print(s.get_shifted_solution());
        // std::cout << solver_n_cuts << std::endl;
        double time = s.get_time();

        if (!std::filesystem::exists(args[2])) {
            std::ofstream outfile(args[2]);
        }
        std::ofstream outfile(args[2], std::ios_base::app);
        outfile << args[1] << ";" << convert(sol) << ";" << solver_n_cuts << ";" << time << std::endl;
    }

    return 0;
}
