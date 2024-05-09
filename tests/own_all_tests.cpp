#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "../src/misc.h"
#include "misc_test.h"

#define max_n_A 51
#define max_n_B 11
#define n_files 1000
#define max_n_par 11
#define max_n_red 10

namespace CrossGuard {

    TEST(OwnAll, Random) {
        for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
            for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                for (size_t j = 0; j < n_files; ++j) {
                    std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                    std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                    if (file_exists(g_path)) {
                        compare_all(g_path, sol_path);
                    }
                }
            }
        }
    }

    TEST(OwnAll, Partition) {
        for (size_t n_par = 2; n_par < max_n_par; ++n_par) {
            for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
                for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                    for (size_t j = 0; j < n_files; ++j) {
                        std::string g_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                        std::string s_path = "../data/test/own/partition/" + std::to_string(n_par) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                        if (file_exists(g_path)) {
                            compare_all(g_path, s_path);
                        }
                    }
                }
            }
        }
    }

    TEST(OwnAll, ReductionTwins) {
        for (size_t n_red = 1; n_red < max_n_red; ++n_red) {
            for (size_t n_A = 1; n_A < max_n_A; ++n_A) {
                for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
                    for (size_t j = 0; j < n_files; ++j) {
                        std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                        std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                        if (file_exists(g_path)) {
                            compare_all(g_path, s_path);
                        }
                    }
                }
            }
        }
    }

}