#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "misc_test.h"

TEST(TinyTestSet, complete_4_5) {
    std::string graph_filepath = "../data/test/tiny_test_set/complete_4_5.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/complete_4_5.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, cycle_8_shuffled) {
    std::string graph_filepath = "../data/test/tiny_test_set/cycle_8_shuffled.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/cycle_8_shuffled.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, cycle_8_sorted) {
    std::string graph_filepath = "../data/test/tiny_test_set/cycle_8_sorted.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/cycle_8_sorted.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, grid_9_shuffled) {
    std::string graph_filepath = "../data/test/tiny_test_set/grid_9_shuffled.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/grid_9_shuffled.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, ladder_4_4_shuffled) {
    std::string graph_filepath = "../data/test/tiny_test_set/ladder_4_4_shuffled.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/ladder_4_4_shuffled.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, ladder_4_4_sorted) {
    std::string graph_filepath = "../data/test/tiny_test_set/ladder_4_4_sorted.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/ladder_4_4_sorted.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, matching_4_4) {
    std::string graph_filepath = "../data/test/tiny_test_set/matching_4_4.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/matching_4_4.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, path_9_shuffled) {
    std::string graph_filepath = "../data/test/tiny_test_set/path_9_shuffled.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/path_9_shuffled.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, path_9_sorted) {
    std::string graph_filepath = "../data/test/tiny_test_set/path_9_sorted.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/path_9_sorted.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, plane_5_6) {
    std::string graph_filepath = "../data/test/tiny_test_set/plane_5_6.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/plane_5_6.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, star_6) {
    std::string graph_filepath = "../data/test/tiny_test_set/star_6.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/star_6.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, tree_6_10) {
    std::string graph_filepath = "../data/test/tiny_test_set/tree_6_10.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/tree_6_10.sol";

    compare_bf(graph_filepath, solution_file_path);
}

TEST(TinyTestSet, website_20) {
    std::string graph_filepath = "../data/test/tiny_test_set/website_20.gr";
    std::string solution_file_path = "../data/test/tiny_test_set-sol/website_20.sol";

    compare_bf(graph_filepath, solution_file_path);
}