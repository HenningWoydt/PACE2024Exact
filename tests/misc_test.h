/* Crossing-Guard. Software to exactly solve the one-sided crossing
   minimization problem (OCM)
   Copyright (C) 2024  Henning Woydt

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or any
   later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.
==============================================================================*/

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
