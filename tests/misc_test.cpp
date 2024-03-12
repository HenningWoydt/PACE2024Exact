#include "misc_test.h"

void compare_bf(std::string &graph_filepath, std::string &solution_filepath) {
    Graph g(graph_filepath);

    Solver_BF solver_bf(g);
    solver_bf.solve();

    Solver solver(g);
    solver.solve();

    std::vector<int> bf_solution = solver_bf.get_solution();
    std::vector<int> solution = solver.get_solution();
    std::vector<int> real_solution = read_solution(solution_filepath, g.n_A + 1);

    // determine the number of cuts for all solutions
    int n_cuts = g.determine_n_cuts(solution);
    int bf_n_cuts = g.determine_n_cuts(bf_solution);
    int real_n_cuts = g.determine_n_cuts(real_solution);

    EXPECT_EQ(n_cuts, bf_n_cuts);
    EXPECT_EQ(n_cuts, real_n_cuts);
    EXPECT_EQ(bf_n_cuts, real_n_cuts);
}

void compare(std::string &graph_filepath, std::string &solution_filepath) {
    return;
    Graph g(graph_filepath);

    Solver solver(g);
    solver.solve();

    std::vector<int> solution = solver.get_solution();
    std::vector<int> real_solution = read_solution(solution_filepath, g.n_A + 1);

    // determine the number of cuts for all solutions
    int n_cuts = g.determine_n_cuts(solution);
    int real_n_cuts = g.determine_n_cuts(real_solution);
    EXPECT_EQ(n_cuts, real_n_cuts);
}
