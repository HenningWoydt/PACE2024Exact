#include <iostream>
#include <filesystem>

#include "src/Graph.h"
#include "src/Solver_BF.h"
#include "src/GraphGenerator.h"
#include "src/Solver.h"

void generate_tiny_dataset(){
    for(int i = 1; i < 11; ++i){
        for(int j = 1; j < 11; ++j){
            std::string directory = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "/";
            std::string directory_sol = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "-sol/";

            if(std::filesystem::is_directory(directory)){
                continue;
            }

            std::filesystem::create_directories(directory);
            std::filesystem::create_directories(directory_sol);

            for(size_t k = 0; k < 100; ++k){
                std::string file_path = directory + "" + std::to_string(k) + ".gr";
                std::string file_path_sol = directory_sol + "" + std::to_string(k) + ".sol";

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

    // std::string file_path = "../data/test/tiny_test_set/star_6.gr";
    std::string file_path = "../data/test/medium_test_set/1.gr";

    {
        Graph g(file_path);
        Solver_BF solver_bf(g);

        std::chrono::steady_clock::time_point sp = std::chrono::steady_clock::now();
        // solver_bf.solve();
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
        Graph g(file_path);
        Solver solver(g);

        std::chrono::steady_clock::time_point sp = std::chrono::steady_clock::now();
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

    return 0;
}
