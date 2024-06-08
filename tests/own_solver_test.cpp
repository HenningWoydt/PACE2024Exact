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

#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/misc.h"
#include "misc_test.h"

#define max_n_A 51
#define max_n_B 11
#define n_files 5
#define max_n_par 11
#define max_n_red 10

namespace CrossGuard {

    TEST(OwnSolver, Random) {
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_final_solver(g_path, sol_path);
                    }
                }
            }
        }
    }

    TEST(OwnSolver, Partition) {
        for (size_t n_par = 2; n_par < max_n_par; ++n_par) {
            for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
                for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                    for (size_t j = 0; j < n_files; ++j) {
                        std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                        std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                        if (file_exists(g_path)) {
                            compare_final_solver(g_path, s_path);
                        }
                    }
                }
            }
        }
    }

    TEST(OwnSolver, ReductionTwins) {
        for (size_t n_red = 1; n_red < max_n_red; ++n_red) {
            for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
                for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                    for (size_t j = 0; j < n_files; ++j) {
                        std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                        std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                        if (file_exists(g_path)) {
                            compare_final_solver(g_path, s_path);
                        }
                    }
                }
            }
        }
    }

    TEST(OwnSolver, OneVertexPartition) {
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/one_vertex_partition/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/one_vertex_partition/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_final_solver(g_path, s_path);
                    }
                }
            }
        }
    }

}
