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
#include "../src/twin_reducer.h"
#include "../src/solver.h"
#include "../src/useless_reducer.h"
#include "../src/front_back_reducer.h"
#include "../src/domination_reducer.h"

namespace CrossGuard {

    void compare_exhaustive(const std::string &g_path, const std::string &sol_path);

    void compare_partition(const std::string &g_path, const std::string &sol_path, int n_partitions);

    void compare_one_vertex_partition(const std::string &g_path, const std::string &sol_path);

    void compare_reduction_twins(const std::string &g_path, const std::string &sol_path, int n_reduce);

    void compare_domination_reduction(const std::string &g_path, const std::string &sol_path);

    void compare_front_back_reduction(const std::string &g_path, const std::string &sol_path);

    void compare_final_solver(const std::string &g_path, const std::string &sol_path);

    void compare_all(const std::string &g_path, const std::string &sol_path);

}

#endif //PACE2024EXACT_MISC_TEST_H
