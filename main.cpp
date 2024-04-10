#include <iostream>
#include <filesystem>

#include "src/Graph.h"
#include "src/Solver_BF.h"
#include "src/GraphGenerator.h"
#include "src/Solver.h"
#include "src/misc.h"

std::string convert(std::vector<int> &vec){
    if(vec.empty()){
        return "[]";
    }
    std::string s = "[";
    for(size_t i = 0; i < vec.size() - 1; ++i){
        s += std::to_string(vec[i]) + ", ";
    }
    s += std::to_string(vec.back()) + "]";
    return s;
}

int main(int argc, char *argv[]) {
    std::vector<std::string> args(argv + 1, argv + argc);
    Graph g(args[0]);
    Solver s(g);
    s.solve();

    std::vector<int> solver_solution = s.get_solution();
    int solver_n_cuts = g.determine_n_cuts(solver_solution);

    std::ofstream outfile(args[2], std::ios_base::app);
    outfile << args[0] << ";" << convert(solver_solution) << ";" << solver_n_cuts << std::endl;

    return 0;
}
