#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "misc_test.h"

#define max_n_B 11
#define n_files 50

TEST(OwnPartition, TPar2A1) {
    size_t n_A = 1;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A2) {
    size_t n_A = 2;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A3) {
    size_t n_A = 3;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A4) {
    size_t n_A = 4;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A5) {
    size_t n_A = 5;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A6) {
    size_t n_A = 6;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A7) {
    size_t n_A = 7;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A8) {
    size_t n_A = 8;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A9) {
    size_t n_A = 9;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A10) {
    size_t n_A = 10;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A11) {
    size_t n_A = 11;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A12) {
    size_t n_A = 12;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A13) {
    size_t n_A = 13;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A14) {
    size_t n_A = 14;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A15) {
    size_t n_A = 15;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A16) {
    size_t n_A = 16;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A17) {
    size_t n_A = 17;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A18) {
    size_t n_A = 18;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A19) {
    size_t n_A = 19;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A20) {
    size_t n_A = 20;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A21) {
    size_t n_A = 21;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A22) {
    size_t n_A = 22;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A23) {
    size_t n_A = 23;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A24) {
    size_t n_A = 24;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A25) {
    size_t n_A = 25;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A26) {
    size_t n_A = 26;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A27) {
    size_t n_A = 27;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A28) {
    size_t n_A = 28;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A29) {
    size_t n_A = 29;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A30) {
    size_t n_A = 30;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A31) {
    size_t n_A = 31;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A32) {
    size_t n_A = 32;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A33) {
    size_t n_A = 33;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A34) {
    size_t n_A = 34;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A35) {
    size_t n_A = 35;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A36) {
    size_t n_A = 36;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A37) {
    size_t n_A = 37;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A38) {
    size_t n_A = 38;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A39) {
    size_t n_A = 39;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A40) {
    size_t n_A = 40;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A41) {
    size_t n_A = 41;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A42) {
    size_t n_A = 42;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A43) {
    size_t n_A = 43;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A44) {
    size_t n_A = 44;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A45) {
    size_t n_A = 45;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A46) {
    size_t n_A = 46;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A47) {
    size_t n_A = 47;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A48) {
    size_t n_A = 48;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A49) {
    size_t n_A = 49;
    int n_par = 2;
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

TEST(OwnPartition, TPar2A50) {
    size_t n_A = 50;
    int n_par = 2;
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

TEST(OwnPartition, TPar3A1) {
    size_t n_A = 1;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A2) {
    size_t n_A = 2;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A3) {
    size_t n_A = 3;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A4) {
    size_t n_A = 4;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A5) {
    size_t n_A = 5;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A6) {
    size_t n_A = 6;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A7) {
    size_t n_A = 7;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A8) {
    size_t n_A = 8;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A9) {
    size_t n_A = 9;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A10) {
    size_t n_A = 10;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A11) {
    size_t n_A = 11;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A12) {
    size_t n_A = 12;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A13) {
    size_t n_A = 13;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A14) {
    size_t n_A = 14;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A15) {
    size_t n_A = 15;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A16) {
    size_t n_A = 16;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A17) {
    size_t n_A = 17;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A18) {
    size_t n_A = 18;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A19) {
    size_t n_A = 19;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A20) {
    size_t n_A = 20;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A21) {
    size_t n_A = 21;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A22) {
    size_t n_A = 22;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A23) {
    size_t n_A = 23;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A24) {
    size_t n_A = 24;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A25) {
    size_t n_A = 25;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A26) {
    size_t n_A = 26;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A27) {
    size_t n_A = 27;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A28) {
    size_t n_A = 28;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A29) {
    size_t n_A = 29;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A30) {
    size_t n_A = 30;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A31) {
    size_t n_A = 31;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A32) {
    size_t n_A = 32;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A33) {
    size_t n_A = 33;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A34) {
    size_t n_A = 34;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A35) {
    size_t n_A = 35;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A36) {
    size_t n_A = 36;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A37) {
    size_t n_A = 37;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A38) {
    size_t n_A = 38;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A39) {
    size_t n_A = 39;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A40) {
    size_t n_A = 40;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A41) {
    size_t n_A = 41;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A42) {
    size_t n_A = 42;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A43) {
    size_t n_A = 43;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A44) {
    size_t n_A = 44;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A45) {
    size_t n_A = 45;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A46) {
    size_t n_A = 46;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A47) {
    size_t n_A = 47;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A48) {
    size_t n_A = 48;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A49) {
    size_t n_A = 49;
    int n_par = 3;
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

TEST(OwnPartition, TPar3A50) {
    size_t n_A = 50;
    int n_par = 3;
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

TEST(OwnPartition, TPar4A1) {
    size_t n_A = 1;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A2) {
    size_t n_A = 2;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A3) {
    size_t n_A = 3;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A4) {
    size_t n_A = 4;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A5) {
    size_t n_A = 5;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A6) {
    size_t n_A = 6;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A7) {
    size_t n_A = 7;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A8) {
    size_t n_A = 8;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A9) {
    size_t n_A = 9;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A10) {
    size_t n_A = 10;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A11) {
    size_t n_A = 11;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A12) {
    size_t n_A = 12;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A13) {
    size_t n_A = 13;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A14) {
    size_t n_A = 14;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A15) {
    size_t n_A = 15;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A16) {
    size_t n_A = 16;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A17) {
    size_t n_A = 17;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A18) {
    size_t n_A = 18;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A19) {
    size_t n_A = 19;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A20) {
    size_t n_A = 20;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A21) {
    size_t n_A = 21;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A22) {
    size_t n_A = 22;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A23) {
    size_t n_A = 23;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A24) {
    size_t n_A = 24;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A25) {
    size_t n_A = 25;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A26) {
    size_t n_A = 26;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A27) {
    size_t n_A = 27;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A28) {
    size_t n_A = 28;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A29) {
    size_t n_A = 29;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A30) {
    size_t n_A = 30;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A31) {
    size_t n_A = 31;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A32) {
    size_t n_A = 32;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A33) {
    size_t n_A = 33;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A34) {
    size_t n_A = 34;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A35) {
    size_t n_A = 35;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A36) {
    size_t n_A = 36;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A37) {
    size_t n_A = 37;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A38) {
    size_t n_A = 38;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A39) {
    size_t n_A = 39;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A40) {
    size_t n_A = 40;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A41) {
    size_t n_A = 41;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A42) {
    size_t n_A = 42;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A43) {
    size_t n_A = 43;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A44) {
    size_t n_A = 44;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A45) {
    size_t n_A = 45;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A46) {
    size_t n_A = 46;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A47) {
    size_t n_A = 47;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A48) {
    size_t n_A = 48;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A49) {
    size_t n_A = 49;
    int n_par = 4;
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

TEST(OwnPartition, TPar4A50) {
    size_t n_A = 50;
    int n_par = 4;
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

TEST(OwnPartition, TPar5A1) {
    size_t n_A = 1;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A2) {
    size_t n_A = 2;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A3) {
    size_t n_A = 3;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A4) {
    size_t n_A = 4;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A5) {
    size_t n_A = 5;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A6) {
    size_t n_A = 6;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A7) {
    size_t n_A = 7;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A8) {
    size_t n_A = 8;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A9) {
    size_t n_A = 9;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A10) {
    size_t n_A = 10;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A11) {
    size_t n_A = 11;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A12) {
    size_t n_A = 12;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A13) {
    size_t n_A = 13;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A14) {
    size_t n_A = 14;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A15) {
    size_t n_A = 15;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A16) {
    size_t n_A = 16;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A17) {
    size_t n_A = 17;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A18) {
    size_t n_A = 18;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A19) {
    size_t n_A = 19;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A20) {
    size_t n_A = 20;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A21) {
    size_t n_A = 21;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A22) {
    size_t n_A = 22;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A23) {
    size_t n_A = 23;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A24) {
    size_t n_A = 24;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A25) {
    size_t n_A = 25;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A26) {
    size_t n_A = 26;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A27) {
    size_t n_A = 27;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A28) {
    size_t n_A = 28;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A29) {
    size_t n_A = 29;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A30) {
    size_t n_A = 30;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A31) {
    size_t n_A = 31;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A32) {
    size_t n_A = 32;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A33) {
    size_t n_A = 33;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A34) {
    size_t n_A = 34;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A35) {
    size_t n_A = 35;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A36) {
    size_t n_A = 36;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A37) {
    size_t n_A = 37;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A38) {
    size_t n_A = 38;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A39) {
    size_t n_A = 39;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A40) {
    size_t n_A = 40;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A41) {
    size_t n_A = 41;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A42) {
    size_t n_A = 42;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A43) {
    size_t n_A = 43;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A44) {
    size_t n_A = 44;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A45) {
    size_t n_A = 45;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A46) {
    size_t n_A = 46;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A47) {
    size_t n_A = 47;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A48) {
    size_t n_A = 48;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A49) {
    size_t n_A = 49;
    int n_par = 5;
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

TEST(OwnPartition, TPar5A50) {
    size_t n_A = 50;
    int n_par = 5;
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

TEST(OwnPartition, TPar6A1) {
    size_t n_A = 1;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A2) {
    size_t n_A = 2;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A3) {
    size_t n_A = 3;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A4) {
    size_t n_A = 4;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A5) {
    size_t n_A = 5;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A6) {
    size_t n_A = 6;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A7) {
    size_t n_A = 7;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A8) {
    size_t n_A = 8;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A9) {
    size_t n_A = 9;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A10) {
    size_t n_A = 10;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A11) {
    size_t n_A = 11;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A12) {
    size_t n_A = 12;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A13) {
    size_t n_A = 13;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A14) {
    size_t n_A = 14;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A15) {
    size_t n_A = 15;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A16) {
    size_t n_A = 16;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A17) {
    size_t n_A = 17;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A18) {
    size_t n_A = 18;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A19) {
    size_t n_A = 19;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A20) {
    size_t n_A = 20;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A21) {
    size_t n_A = 21;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A22) {
    size_t n_A = 22;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A23) {
    size_t n_A = 23;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A24) {
    size_t n_A = 24;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A25) {
    size_t n_A = 25;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A26) {
    size_t n_A = 26;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A27) {
    size_t n_A = 27;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A28) {
    size_t n_A = 28;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A29) {
    size_t n_A = 29;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A30) {
    size_t n_A = 30;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A31) {
    size_t n_A = 31;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A32) {
    size_t n_A = 32;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A33) {
    size_t n_A = 33;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A34) {
    size_t n_A = 34;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A35) {
    size_t n_A = 35;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A36) {
    size_t n_A = 36;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A37) {
    size_t n_A = 37;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A38) {
    size_t n_A = 38;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A39) {
    size_t n_A = 39;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A40) {
    size_t n_A = 40;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A41) {
    size_t n_A = 41;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A42) {
    size_t n_A = 42;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A43) {
    size_t n_A = 43;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A44) {
    size_t n_A = 44;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A45) {
    size_t n_A = 45;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A46) {
    size_t n_A = 46;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A47) {
    size_t n_A = 47;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A48) {
    size_t n_A = 48;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A49) {
    size_t n_A = 49;
    int n_par = 6;
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

TEST(OwnPartition, TPar6A50) {
    size_t n_A = 50;
    int n_par = 6;
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

TEST(OwnPartition, TPar7A1) {
    size_t n_A = 1;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A2) {
    size_t n_A = 2;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A3) {
    size_t n_A = 3;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A4) {
    size_t n_A = 4;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A5) {
    size_t n_A = 5;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A6) {
    size_t n_A = 6;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A7) {
    size_t n_A = 7;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A8) {
    size_t n_A = 8;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A9) {
    size_t n_A = 9;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A10) {
    size_t n_A = 10;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A11) {
    size_t n_A = 11;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A12) {
    size_t n_A = 12;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A13) {
    size_t n_A = 13;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A14) {
    size_t n_A = 14;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A15) {
    size_t n_A = 15;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A16) {
    size_t n_A = 16;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A17) {
    size_t n_A = 17;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A18) {
    size_t n_A = 18;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A19) {
    size_t n_A = 19;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A20) {
    size_t n_A = 20;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A21) {
    size_t n_A = 21;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A22) {
    size_t n_A = 22;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A23) {
    size_t n_A = 23;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A24) {
    size_t n_A = 24;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A25) {
    size_t n_A = 25;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A26) {
    size_t n_A = 26;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A27) {
    size_t n_A = 27;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A28) {
    size_t n_A = 28;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A29) {
    size_t n_A = 29;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A30) {
    size_t n_A = 30;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A31) {
    size_t n_A = 31;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A32) {
    size_t n_A = 32;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A33) {
    size_t n_A = 33;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A34) {
    size_t n_A = 34;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A35) {
    size_t n_A = 35;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A36) {
    size_t n_A = 36;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A37) {
    size_t n_A = 37;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A38) {
    size_t n_A = 38;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A39) {
    size_t n_A = 39;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A40) {
    size_t n_A = 40;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A41) {
    size_t n_A = 41;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A42) {
    size_t n_A = 42;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A43) {
    size_t n_A = 43;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A44) {
    size_t n_A = 44;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A45) {
    size_t n_A = 45;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A46) {
    size_t n_A = 46;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A47) {
    size_t n_A = 47;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A48) {
    size_t n_A = 48;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A49) {
    size_t n_A = 49;
    int n_par = 7;
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

TEST(OwnPartition, TPar7A50) {
    size_t n_A = 50;
    int n_par = 7;
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

TEST(OwnPartition, TPar8A1) {
    size_t n_A = 1;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A2) {
    size_t n_A = 2;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A3) {
    size_t n_A = 3;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A4) {
    size_t n_A = 4;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A5) {
    size_t n_A = 5;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A6) {
    size_t n_A = 6;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A7) {
    size_t n_A = 7;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A8) {
    size_t n_A = 8;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A9) {
    size_t n_A = 9;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A10) {
    size_t n_A = 10;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A11) {
    size_t n_A = 11;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A12) {
    size_t n_A = 12;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A13) {
    size_t n_A = 13;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A14) {
    size_t n_A = 14;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A15) {
    size_t n_A = 15;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A16) {
    size_t n_A = 16;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A17) {
    size_t n_A = 17;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A18) {
    size_t n_A = 18;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A19) {
    size_t n_A = 19;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A20) {
    size_t n_A = 20;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A21) {
    size_t n_A = 21;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A22) {
    size_t n_A = 22;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A23) {
    size_t n_A = 23;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A24) {
    size_t n_A = 24;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A25) {
    size_t n_A = 25;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A26) {
    size_t n_A = 26;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A27) {
    size_t n_A = 27;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A28) {
    size_t n_A = 28;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A29) {
    size_t n_A = 29;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A30) {
    size_t n_A = 30;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A31) {
    size_t n_A = 31;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A32) {
    size_t n_A = 32;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A33) {
    size_t n_A = 33;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A34) {
    size_t n_A = 34;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A35) {
    size_t n_A = 35;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A36) {
    size_t n_A = 36;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A37) {
    size_t n_A = 37;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A38) {
    size_t n_A = 38;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A39) {
    size_t n_A = 39;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A40) {
    size_t n_A = 40;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A41) {
    size_t n_A = 41;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A42) {
    size_t n_A = 42;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A43) {
    size_t n_A = 43;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A44) {
    size_t n_A = 44;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A45) {
    size_t n_A = 45;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A46) {
    size_t n_A = 46;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A47) {
    size_t n_A = 47;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A48) {
    size_t n_A = 48;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A49) {
    size_t n_A = 49;
    int n_par = 8;
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

TEST(OwnPartition, TPar8A50) {
    size_t n_A = 50;
    int n_par = 8;
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

TEST(OwnPartition, TPar9A1) {
    size_t n_A = 1;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A2) {
    size_t n_A = 2;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A3) {
    size_t n_A = 3;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A4) {
    size_t n_A = 4;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A5) {
    size_t n_A = 5;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A6) {
    size_t n_A = 6;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A7) {
    size_t n_A = 7;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A8) {
    size_t n_A = 8;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A9) {
    size_t n_A = 9;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A10) {
    size_t n_A = 10;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A11) {
    size_t n_A = 11;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A12) {
    size_t n_A = 12;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A13) {
    size_t n_A = 13;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A14) {
    size_t n_A = 14;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A15) {
    size_t n_A = 15;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A16) {
    size_t n_A = 16;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A17) {
    size_t n_A = 17;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A18) {
    size_t n_A = 18;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A19) {
    size_t n_A = 19;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A20) {
    size_t n_A = 20;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A21) {
    size_t n_A = 21;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A22) {
    size_t n_A = 22;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A23) {
    size_t n_A = 23;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A24) {
    size_t n_A = 24;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A25) {
    size_t n_A = 25;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A26) {
    size_t n_A = 26;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A27) {
    size_t n_A = 27;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A28) {
    size_t n_A = 28;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A29) {
    size_t n_A = 29;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A30) {
    size_t n_A = 30;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A31) {
    size_t n_A = 31;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A32) {
    size_t n_A = 32;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A33) {
    size_t n_A = 33;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A34) {
    size_t n_A = 34;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A35) {
    size_t n_A = 35;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A36) {
    size_t n_A = 36;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A37) {
    size_t n_A = 37;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A38) {
    size_t n_A = 38;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A39) {
    size_t n_A = 39;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A40) {
    size_t n_A = 40;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A41) {
    size_t n_A = 41;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A42) {
    size_t n_A = 42;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A43) {
    size_t n_A = 43;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A44) {
    size_t n_A = 44;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A45) {
    size_t n_A = 45;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A46) {
    size_t n_A = 46;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A47) {
    size_t n_A = 47;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A48) {
    size_t n_A = 48;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A49) {
    size_t n_A = 49;
    int n_par = 9;
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

TEST(OwnPartition, TPar9A50) {
    size_t n_A = 50;
    int n_par = 9;
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

TEST(OwnPartition, TPar10A1) {
    size_t n_A = 1;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A2) {
    size_t n_A = 2;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A3) {
    size_t n_A = 3;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A4) {
    size_t n_A = 4;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A5) {
    size_t n_A = 5;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A6) {
    size_t n_A = 6;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A7) {
    size_t n_A = 7;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A8) {
    size_t n_A = 8;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A9) {
    size_t n_A = 9;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A10) {
    size_t n_A = 10;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A11) {
    size_t n_A = 11;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A12) {
    size_t n_A = 12;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A13) {
    size_t n_A = 13;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A14) {
    size_t n_A = 14;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A15) {
    size_t n_A = 15;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A16) {
    size_t n_A = 16;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A17) {
    size_t n_A = 17;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A18) {
    size_t n_A = 18;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A19) {
    size_t n_A = 19;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A20) {
    size_t n_A = 20;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A21) {
    size_t n_A = 21;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A22) {
    size_t n_A = 22;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A23) {
    size_t n_A = 23;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A24) {
    size_t n_A = 24;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A25) {
    size_t n_A = 25;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A26) {
    size_t n_A = 26;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A27) {
    size_t n_A = 27;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A28) {
    size_t n_A = 28;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A29) {
    size_t n_A = 29;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A30) {
    size_t n_A = 30;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A31) {
    size_t n_A = 31;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A32) {
    size_t n_A = 32;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A33) {
    size_t n_A = 33;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A34) {
    size_t n_A = 34;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A35) {
    size_t n_A = 35;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A36) {
    size_t n_A = 36;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A37) {
    size_t n_A = 37;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A38) {
    size_t n_A = 38;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A39) {
    size_t n_A = 39;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A40) {
    size_t n_A = 40;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A41) {
    size_t n_A = 41;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A42) {
    size_t n_A = 42;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A43) {
    size_t n_A = 43;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A44) {
    size_t n_A = 44;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A45) {
    size_t n_A = 45;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A46) {
    size_t n_A = 46;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A47) {
    size_t n_A = 47;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A48) {
    size_t n_A = 48;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A49) {
    size_t n_A = 49;
    int n_par = 10;
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

TEST(OwnPartition, TPar10A50) {
    size_t n_A = 50;
    int n_par = 10;
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
