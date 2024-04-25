#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "misc_test.h"

TEST(Own, T1) {
    size_t n_A = 1;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T2) {
    size_t n_A = 2;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T3) {
    size_t n_A = 3;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T4) {
    size_t n_A = 4;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T5) {
    size_t n_A = 5;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T6) {
    size_t n_A = 6;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T7) {
    size_t n_A = 7;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T8) {
    size_t n_A = 8;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T9) {
    size_t n_A = 9;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T10) {
    size_t n_A = 10;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T11) {
    size_t n_A = 11;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T12) {
    size_t n_A = 12;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T13) {
    size_t n_A = 13;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T14) {
    size_t n_A = 14;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T15) {
    size_t n_A = 15;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T16) {
    size_t n_A = 16;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T17) {
    size_t n_A = 17;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T18) {
    size_t n_A = 18;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T19) {
    size_t n_A = 19;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T20) {
    size_t n_A = 20;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T21) {
    size_t n_A = 21;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T22) {
    size_t n_A = 22;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T23) {
    size_t n_A = 23;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T24) {
    size_t n_A = 24;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T25) {
    size_t n_A = 25;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T26) {
    size_t n_A = 26;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T27) {
    size_t n_A = 27;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T28) {
    size_t n_A = 28;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T29) {
    size_t n_A = 29;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T30) {
    size_t n_A = 30;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T31) {
    size_t n_A = 31;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T32) {
    size_t n_A = 32;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T33) {
    size_t n_A = 33;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T34) {
    size_t n_A = 34;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T35) {
    size_t n_A = 35;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T36) {
    size_t n_A = 36;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T37) {
    size_t n_A = 37;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, 38) {
    size_t n_A = 38;
    for (size_t n_B = 1; n_B < 13; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T39) {
    size_t n_A = 39;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T40) {
    size_t n_A = 40;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T41) {
    size_t n_A = 41;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T42) {
    size_t n_A = 42;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T43) {
    size_t n_A = 43;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T44) {
    size_t n_A = 44;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T45) {
    size_t n_A = 45;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T46) {
    size_t n_A = 46;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T47) {
    size_t n_A = 47;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T48) {
    size_t n_A = 48;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T49) {
    size_t n_A = 49;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}

TEST(Own, T50) {
    size_t n_A = 50;
    for (size_t n_B = 1; n_B < 11; ++n_B) {
        for (size_t j = 0; j < 1000; ++j) {
            std::string g_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
            std::string sol_path = "../data/test/own/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

            if(file_exists(g_path)) {
                compare_bf(g_path, sol_path);
            }
        }
    }
}
