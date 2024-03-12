#include <iostream>
#include <filesystem>

#include "src/Graph.h"
#include "src/Solver_BF.h"
#include "src/GraphGenerator.h"

void generate_dataset(){
    for(size_t i = 1; i < 11; ++i){
        for(size_t j = 1; j < 11; ++j){
            std::string directory = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "/";
            std::string directory_sol = "../data/test/own/tiny/" + std::to_string(i) + "_" + std::to_string(j) + "-sol/";

            if(std::filesystem::is_directory(directory)){
                continue;
            }

            std::filesystem::create_directory(directory);
            std::filesystem::create_directory(directory_sol);

            for(size_t k = 0; k < 100; ++k){
                std::string file_path = directory + "" + std::to_string(k) + ".gr";
                std::string file_path_sol = directory_sol + "" + std::to_string(k) + ".sol";

                GraphGenerator graphGenerator(i, j, {1, 2, 3});
                graphGenerator.generate();
                graphGenerator.write_to_file(file_path);

                Graph graph(file_path);
                Solver_BF solver_bf(graph);
                solver_bf.solve();

                write_solution(solver_bf.solution, file_path_sol);
            }
        }
    }
}

int main() {
    std::string file_path = "../data/test/tiny_test_set/complete_4_5.gr";
    Graph g(file_path);

    Solver_BF solver_bf(g);
    solver_bf.solve();

    print(solver_bf.solution);

    generate_dataset();

    return 0;
}
