#include <iostream>
#include <filesystem>

#include "src/Graph.h"
#include "src/Solver_BF.h"
#include "src/GraphGenerator.h"
#include "src/Solver.h"
#include "src/misc.h"

void generate_tiny_dataset() {
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
            std::string directory = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "/";
            std::string directory_sol = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "-sol/";

            if (!std::filesystem::is_directory(directory)) {
                std::filesystem::create_directories(directory);
            }
            if (!std::filesystem::is_directory(directory_sol)) {
                std::filesystem::create_directories(directory_sol);
            }
        }
    }

#pragma omp parallel for collapse(3)
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
            for (int k = 0; k < 100; ++k) {
                std::string directory = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "/";
                std::string directory_sol = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "-sol/";
                std::string file_path = directory + "" + std::to_string(k) + ".gr";
                std::string file_path_sol = directory_sol + "" + std::to_string(k) + ".sol";

                if (file_exists(file_path) && file_exists(file_path_sol)) {
                    continue;
                }
                std::cout << i << " " << j << " " << k << std::endl;

                GraphGenerator graphGenerator(i, j, {1, 2, 3});
                graphGenerator.generate();
                graphGenerator.write_to_file(file_path);

                Graph graph(file_path);
                Solver_BF solver_bf(graph);
                solver_bf.solve();
                std::vector<int> solution = solver_bf.get_shifted_solution();

                write_solution(solution, file_path_sol);
            }
        }
    }
}

void generate_small_dataset() {
    for (int i = 11; i < 21; ++i) {
        for (int j = 11; j < 21; ++j) {
            std::string directory = "../data/test/own/small/" + std::to_string(i) + "_" + std::to_string(j) + "/";
            std::string directory_sol = "../data/test/own/small/" + std::to_string(i) + "_" + std::to_string(j) + "-sol/";

            if (!std::filesystem::is_directory(directory)) {
                std::filesystem::create_directories(directory);
            }
            if (!std::filesystem::is_directory(directory_sol)) {
                std::filesystem::create_directories(directory_sol);
            }
        }
    }

#pragma omp parallel for collapse(3)
    for (int i = 11; i < 21; ++i) {
        for (int j = 11; j < 21; ++j) {
            for (int k = 0; k < 100; ++k) {
                std::string directory = "../data/test/own/small/" + std::to_string(i) + "_" + std::to_string(j) + "/";
                std::string directory_sol = "../data/test/own/small/" + std::to_string(i) + "_" + std::to_string(j) + "-sol/";

                std::string file_path = directory + "" + std::to_string(k) + ".gr";
                std::string file_path_sol = directory_sol + "" + std::to_string(k) + ".sol";

                if (file_exists(file_path) && file_exists(file_path_sol)) {
                    continue;
                }
                std::cout << i << " " << j << " " << k << std::endl;

                GraphGenerator graphGenerator(i, j, {1, 2, 3});
                graphGenerator.generate();
                graphGenerator.write_to_file(file_path);

                Graph graph(file_path);
                Solver_BF solver_bf(graph);
                solver_bf.solve();
                std::vector<int> solution = solver_bf.get_shifted_solution();

                write_solution(solution, file_path_sol);
            }
        }
    }
}

int main() {
    // generate_tiny_dataset();
    // generate_small_dataset();
    // return 0;

    // std::string file_path = "../data/test/own/tiny/5_8/64.gr"; std::string solution_path = "../data/test/own/tiny/5_8-sol/64.sol";
    // std::string file_path = "../data/test/own/tiny/5_7/93.gr"; std::string solution_path = "../data/test/own/tiny/5_7-sol/93.sol";
    // std::string file_path = "../data/test/tiny_test_set/complete_4_5.gr";
    // std::string file_path = "../data/test/tiny_test_set/star_6.gr";
    std::string file_path = "../data/test/medium_test_set/6.gr"; std::string solution_path = "../data/test/medium_test_set-sol/6.sol";

    {
        std::chrono::steady_clock::time_point sp = std::chrono::steady_clock::now();
        Graph g(file_path);
        Solver_BF solver_bf(g);
        if (g.m_n_B <= 10) {
            solver_bf.solve();
        }
        std::chrono::steady_clock::time_point ep = std::chrono::steady_clock::now();

        std::vector<int> internal_solution = solver_bf.get_solution();
        std::vector<int> solution = solver_bf.get_shifted_solution();

        std::cout << "--- Solver_BF ---" << std::endl;
        std::cout << "Solution: ";
        print(solution);
        std::cout << "Int Sol : ";
        print(internal_solution);
        std::cout << "#Cuts   : " << g.determine_n_cuts(internal_solution) << std::endl;
        std::cout << "Seconds : " << get_elapsed_seconds(sp, ep) << std::endl;
    }

    {
        std::chrono::steady_clock::time_point sp = std::chrono::steady_clock::now();
        Graph g(file_path);
        Solver solver(g);
        solver.solve();
        std::chrono::steady_clock::time_point ep = std::chrono::steady_clock::now();

        std::vector<int> internal_solution = solver.get_solution();
        std::vector<int> solution = solver.get_shifted_solution();

        std::cout << "--- Solver ---" << std::endl;
        std::cout << "Solution: ";
        print(solution);
        std::cout << "Int Sol : ";
        print(internal_solution);
        std::cout << "#Cuts   : " << g.determine_n_cuts(internal_solution) << std::endl;
        std::cout << "Seconds : " << get_elapsed_seconds(sp, ep) << std::endl;
    }

    {
        if (!solution_path.empty()) {
            Graph g(file_path);
            std::vector<int> sol = read_solution(solution_path, g.m_n_A + 1);
            std::cout << "--- Solution ---" << std::endl;
            print(sol);
            std::cout << "#Cuts   : " << g.determine_n_cuts(sol) << std::endl;
        }
    }

    return 0;
}
