#include <iostream>
#include "src/Graph.h"
#include "src/Solver_BF.h"

int main() {
    std::string file_path = "../data/test/tiny_test_set/complete_4_5.gr";
    Graph g(file_path);

    Solver_BF solver_bf(g);
    solver_bf.solve();

    print(solver_bf.solution);

    return 0;
}
