#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "misc_test.h"

TEST(OwnTiny, T1) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/1_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/1_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T2) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/2_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/2_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T3) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/3_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/3_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T4) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/4_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/4_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T5) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/5_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/5_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T6) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/6_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/6_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T7) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/7_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/7_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T8) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/8_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/8_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T9) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/9_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/9_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}

TEST(OwnTiny, T10) {
    for (size_t i = 1; i < 11; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string graph_filepath = "../data/test/own/tiny/10_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string solution_file_path = "../data/test/own/tiny/10_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            compare_bf(graph_filepath, solution_file_path);
        }
    }
}
