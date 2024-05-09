#ifndef PACE2024EXACT_MISC_TEST_H
#define PACE2024EXACT_MISC_TEST_H

#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/misc.h"
#include "../src/definitions.h"
#include "../src/macros.h"
#include "../src/graph.h"
#include "../src/solver_bf.h"
#include "../src/exhaustive_solver.h"
#include "../src/partitioner.h"
#include "../src/reducer.h"
#include "../src/solver.h"

namespace CrossGuard {

    void compare_exhaustive(const std::string &g_path, const std::string &sol_path);

    void compare_partition(const std::string &g_path, const std::string &sol_path, int n_partitions);

    void compare_reduction_twins(const std::string &g_path, const std::string &sol_path, int n_reduce);

    void compare_final_solver(const std::string &g_path, const std::string &sol_path);

    void compare_all(const std::string &g_path, const std::string &sol_path);

}

#endif //PACE2024EXACT_MISC_TEST_H
