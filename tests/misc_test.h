#ifndef PACE2024EXACT_MISC_TEST_H
#define PACE2024EXACT_MISC_TEST_H

#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/Graph.h"
#include "../src/Solver_BF.h"
#include "../src/ExhaustiveSolver.h"
#include "../src/misc.h"

namespace CrossGuard {

    void compare_exhaustive(std::string &g_path, std::string &sol_path);

    void compare_partition(std::string &g_path, std::string &sol_path, int n_partitions);

    void compare_reduction_twins(std::string &g_path, std::string &sol_path, int n_reduce);

    void compare(std::string &g_path, std::string &sol_path);

}

#endif //PACE2024EXACT_MISC_TEST_H
