#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/Graph.h"
#include "../src/Solver_BF.h"
#include "../src/misc.h"
#include "../src/Solver.h"

void compare_bf(std::string &graph_filepath, std::string &solution_filepath){
    Graph g(graph_filepath);

    Solver_BF solver_bf(g);
    solver_bf.solve();

    std::vector<uint32_t> bf_solution = solver_bf.solution;
    std::vector<uint32_t> real_solution = read_solution(solution_filepath);

    // scale solutions to [0, n_B - 1]
    for(size_t i = 0; i < g.n_B; ++i){
        bf_solution[i] -= (g.n_A + 1);
        real_solution[i] -= (g.n_A + 1);
    }

    // determine the number of cuts for both solutions
    uint32_t bf_n_cuts = g.determine_n_cuts(bf_solution);
    uint32_t real_n_cuts = g.determine_n_cuts(real_solution);

    EXPECT_EQ(bf_n_cuts, real_n_cuts);
}

void compare(std::string &graph_filepath, std::string &solution_filepath){
    return;
    Graph g(graph_filepath);

    Solver solver(g);
    solver.solve();

    std::vector<uint32_t> solver_solution = solver.solution;
    std::vector<uint32_t> real_solution = read_solution(solution_filepath);

    // scale solutions to [0, n_B - 1]
    for(size_t i = 0; i < g.n_B; ++i){
        solver_solution[i] -= (g.n_A + 1);
        real_solution[i] -= (g.n_A + 1);
    }

    // determine the number of cuts for both solutions
    uint32_t bf_n_cuts = g.determine_n_cuts(solver_solution);
    uint32_t real_n_cuts = g.determine_n_cuts(real_solution);

    EXPECT_EQ(bf_n_cuts, real_n_cuts);
}
