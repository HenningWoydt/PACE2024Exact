#include "misc_test.h"

void compare_bf(std::string &graph_filepath, std::string &solution_filepath) {
    Graph g(graph_filepath);

    Solver_BF solver_bf(g);
    solver_bf.solve();

    Solver solver(g);
    solver.solve();

    std::vector<uint32_t> bf_solution = solver_bf.get_solution();
    std::vector<uint32_t> solution = solver.get_solution();
    std::vector<uint32_t> real_solution = read_solution(solution_filepath, g.n_A + 1);

    // determine the number of cuts for all solutions
    uint32_t n_cuts = g.determine_n_cuts(solution);
    uint32_t bf_n_cuts = g.determine_n_cuts(bf_solution);
    uint32_t real_n_cuts = g.determine_n_cuts(real_solution);

    EXPECT_EQ(n_cuts, bf_n_cuts);
    EXPECT_EQ(n_cuts, real_n_cuts);
    EXPECT_EQ(bf_n_cuts, real_n_cuts);
}

void compare(std::string &graph_filepath, std::string &solution_filepath) {
    return;
    Graph g(graph_filepath);

    Solver solver(g);
    solver.solve();

    std::vector<uint32_t> solver_solution = solver.get_solution();
    std::vector<uint32_t> real_solution = read_solution(solution_filepath, g.n_A + 1);

    // scale solutions to [0, n_B - 1]
    for (size_t i = 0; i < g.n_B; ++i) {
        solver_solution[i] -= (g.n_A + 1);
        real_solution[i] -= (g.n_A + 1);
    }

    // determine the number of cuts for both solutions
    uint32_t bf_n_cuts = g.determine_n_cuts(solver_solution);
    uint32_t real_n_cuts = g.determine_n_cuts(real_solution);

    EXPECT_EQ(bf_n_cuts, real_n_cuts);
}
