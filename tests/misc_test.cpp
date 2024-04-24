#include "misc_test.h"

void compare_bf(std::string &g_path, std::string &sol_path) {
    std::vector<int> solver_bf_solution;
    std::vector<int> solver_solution;

    int solver_bf_n_cuts;
    int solver_n_cuts;

    {
        Graph g(g_path);
        if (file_exists(sol_path)){
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
        Solver solver(g);
        solver.solve();
        solver_solution = solver.get_solution();
        solver_n_cuts = g.determine_n_cuts(solver_solution);
    }

    EXPECT_EQ(solver_n_cuts, solver_bf_n_cuts) << g_path << " " << sol_path << " " << to_string(solver_solution) << " " << to_string(solver_bf_solution);
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
