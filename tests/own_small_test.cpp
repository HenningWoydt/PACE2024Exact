#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "misc_test.h"

TEST(OwnSmall, T11) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/11_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/11_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T12) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/12_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/12_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T13) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/13_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/13_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T14) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/14_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/14_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T15) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/15_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/15_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T16) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/16_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/16_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T17) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/17_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/17_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T18) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/18_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/18_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T19) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/19_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/19_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}

TEST(OwnSmall, T20) {
    for (size_t i = 11; i < 21; ++i) {
        for (size_t j = 0; j < 100; ++j) {
            std::string g_path = "../data/test/own/small/20_" + std::to_string(i) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/tiny/20_" + std::to_string(i) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path) && file_exists(sol_path)) {
                compare(g_path, sol_path);
            }
        }
    }
}
