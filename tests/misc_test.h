#ifndef PACE2024EXACT_MISC_TEST_H
#define PACE2024EXACT_MISC_TEST_H

#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/Graph.h"
#include "../src/Solver_BF.h"
#include "../src/ExhaustiveSolver.h"
#include "../src/misc.h"

void compare_exhaustive(std::string &g_path, std::string &sol_path);

void compare(std::string &g_path, std::string &sol_path);

#endif //PACE2024EXACT_MISC_TEST_H
