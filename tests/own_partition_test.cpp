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
#define n_files 110

namespace CrossGuard {

    TEST(OwnPartition, TPar2) {
        int n_par = 2;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar3) {
        int n_par = 3;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar4) {
        int n_par = 4;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar5) {
        int n_par = 5;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar6) {
        int n_par = 6;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar7) {
        int n_par = 7;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar8) {
        int n_par = 8;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar9) {
        int n_par = 9;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }

    TEST(OwnPartition, TPar10) {
        int n_par = 10;
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_partition(g_path, s_path, n_par);
                    }
                }
            }
        }
    }
}
