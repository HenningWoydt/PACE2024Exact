#ifndef PACE2024EXACT_MISC_TEST_H
#define PACE2024EXACT_MISC_TEST_H

#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/Graph.h"
#include "../src/Solver_BF.h"
#include "../src/Solver.h"
#include "../src/misc.h"

void compare_bf(std::string &graph_filepath, std::string &solution_filepath);

void compare(std::string &graph_filepath, std::string &solution_filepath);

#endif //PACE2024EXACT_MISC_TEST_H
