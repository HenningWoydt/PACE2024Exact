#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "misc_test.h"

#define max_n_B 11
#define n_files 50

namespace CrossGuard {

    TEST(OwnReductionTwins, TRedTwin1A1) {
        size_t n_A = 1;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A2) {
        size_t n_A = 2;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A3) {
        size_t n_A = 3;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A4) {
        size_t n_A = 4;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A5) {
        size_t n_A = 5;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A6) {
        size_t n_A = 6;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A7) {
        size_t n_A = 7;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A8) {
        size_t n_A = 8;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A9) {
        size_t n_A = 9;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A10) {
        size_t n_A = 10;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A11) {
        size_t n_A = 11;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A12) {
        size_t n_A = 12;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A13) {
        size_t n_A = 13;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A14) {
        size_t n_A = 14;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A15) {
        size_t n_A = 15;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A16) {
        size_t n_A = 16;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A17) {
        size_t n_A = 17;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A18) {
        size_t n_A = 18;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A19) {
        size_t n_A = 19;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A20) {
        size_t n_A = 20;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A21) {
        size_t n_A = 21;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A22) {
        size_t n_A = 22;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A23) {
        size_t n_A = 23;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A24) {
        size_t n_A = 24;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A25) {
        size_t n_A = 25;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A26) {
        size_t n_A = 26;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A27) {
        size_t n_A = 27;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A28) {
        size_t n_A = 28;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A29) {
        size_t n_A = 29;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A30) {
        size_t n_A = 30;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A31) {
        size_t n_A = 31;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A32) {
        size_t n_A = 32;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A33) {
        size_t n_A = 33;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A34) {
        size_t n_A = 34;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A35) {
        size_t n_A = 35;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A36) {
        size_t n_A = 36;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A37) {
        size_t n_A = 37;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A38) {
        size_t n_A = 38;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A39) {
        size_t n_A = 39;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A40) {
        size_t n_A = 40;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A41) {
        size_t n_A = 41;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A42) {
        size_t n_A = 42;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A43) {
        size_t n_A = 43;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A44) {
        size_t n_A = 44;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A45) {
        size_t n_A = 45;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A46) {
        size_t n_A = 46;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A47) {
        size_t n_A = 47;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A48) {
        size_t n_A = 48;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A49) {
        size_t n_A = 49;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin1A50) {
        size_t n_A = 50;
        int n_red = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A1) {
        size_t n_A = 1;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A2) {
        size_t n_A = 2;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A3) {
        size_t n_A = 3;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A4) {
        size_t n_A = 4;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A5) {
        size_t n_A = 5;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A6) {
        size_t n_A = 6;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A7) {
        size_t n_A = 7;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A8) {
        size_t n_A = 8;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A9) {
        size_t n_A = 9;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A10) {
        size_t n_A = 10;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A11) {
        size_t n_A = 11;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A12) {
        size_t n_A = 12;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A13) {
        size_t n_A = 13;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A14) {
        size_t n_A = 14;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A15) {
        size_t n_A = 15;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A16) {
        size_t n_A = 16;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A17) {
        size_t n_A = 17;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A18) {
        size_t n_A = 18;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A19) {
        size_t n_A = 19;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A20) {
        size_t n_A = 20;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A21) {
        size_t n_A = 21;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A22) {
        size_t n_A = 22;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A23) {
        size_t n_A = 23;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A24) {
        size_t n_A = 24;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A25) {
        size_t n_A = 25;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A26) {
        size_t n_A = 26;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A27) {
        size_t n_A = 27;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A28) {
        size_t n_A = 28;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A29) {
        size_t n_A = 29;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A30) {
        size_t n_A = 30;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A31) {
        size_t n_A = 31;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A32) {
        size_t n_A = 32;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A33) {
        size_t n_A = 33;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A34) {
        size_t n_A = 34;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A35) {
        size_t n_A = 35;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A36) {
        size_t n_A = 36;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A37) {
        size_t n_A = 37;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A38) {
        size_t n_A = 38;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A39) {
        size_t n_A = 39;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A40) {
        size_t n_A = 40;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A41) {
        size_t n_A = 41;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A42) {
        size_t n_A = 42;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A43) {
        size_t n_A = 43;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A44) {
        size_t n_A = 44;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A45) {
        size_t n_A = 45;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A46) {
        size_t n_A = 46;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A47) {
        size_t n_A = 47;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A48) {
        size_t n_A = 48;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A49) {
        size_t n_A = 49;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin2A50) {
        size_t n_A = 50;
        int n_red = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A1) {
        size_t n_A = 1;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A2) {
        size_t n_A = 2;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A3) {
        size_t n_A = 3;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A4) {
        size_t n_A = 4;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A5) {
        size_t n_A = 5;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A6) {
        size_t n_A = 6;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A7) {
        size_t n_A = 7;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A8) {
        size_t n_A = 8;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A9) {
        size_t n_A = 9;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A10) {
        size_t n_A = 10;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A11) {
        size_t n_A = 11;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A12) {
        size_t n_A = 12;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A13) {
        size_t n_A = 13;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A14) {
        size_t n_A = 14;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A15) {
        size_t n_A = 15;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A16) {
        size_t n_A = 16;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A17) {
        size_t n_A = 17;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A18) {
        size_t n_A = 18;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A19) {
        size_t n_A = 19;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A20) {
        size_t n_A = 20;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A21) {
        size_t n_A = 21;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A22) {
        size_t n_A = 22;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A23) {
        size_t n_A = 23;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A24) {
        size_t n_A = 24;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A25) {
        size_t n_A = 25;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A26) {
        size_t n_A = 26;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A27) {
        size_t n_A = 27;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A28) {
        size_t n_A = 28;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A29) {
        size_t n_A = 29;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A30) {
        size_t n_A = 30;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A31) {
        size_t n_A = 31;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A32) {
        size_t n_A = 32;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A33) {
        size_t n_A = 33;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A34) {
        size_t n_A = 34;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A35) {
        size_t n_A = 35;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A36) {
        size_t n_A = 36;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A37) {
        size_t n_A = 37;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A38) {
        size_t n_A = 38;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A39) {
        size_t n_A = 39;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A40) {
        size_t n_A = 40;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A41) {
        size_t n_A = 41;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A42) {
        size_t n_A = 42;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A43) {
        size_t n_A = 43;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A44) {
        size_t n_A = 44;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A45) {
        size_t n_A = 45;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A46) {
        size_t n_A = 46;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A47) {
        size_t n_A = 47;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A48) {
        size_t n_A = 48;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A49) {
        size_t n_A = 49;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin3A50) {
        size_t n_A = 50;
        int n_red = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A1) {
        size_t n_A = 1;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A2) {
        size_t n_A = 2;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A3) {
        size_t n_A = 3;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A4) {
        size_t n_A = 4;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A5) {
        size_t n_A = 5;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A6) {
        size_t n_A = 6;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A7) {
        size_t n_A = 7;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A8) {
        size_t n_A = 8;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A9) {
        size_t n_A = 9;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A10) {
        size_t n_A = 10;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A11) {
        size_t n_A = 11;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A12) {
        size_t n_A = 12;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A13) {
        size_t n_A = 13;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A14) {
        size_t n_A = 14;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A15) {
        size_t n_A = 15;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A16) {
        size_t n_A = 16;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A17) {
        size_t n_A = 17;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A18) {
        size_t n_A = 18;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A19) {
        size_t n_A = 19;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A20) {
        size_t n_A = 20;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A21) {
        size_t n_A = 21;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A22) {
        size_t n_A = 22;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A23) {
        size_t n_A = 23;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A24) {
        size_t n_A = 24;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A25) {
        size_t n_A = 25;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A26) {
        size_t n_A = 26;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A27) {
        size_t n_A = 27;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A28) {
        size_t n_A = 28;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A29) {
        size_t n_A = 29;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A30) {
        size_t n_A = 30;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A31) {
        size_t n_A = 31;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A32) {
        size_t n_A = 32;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A33) {
        size_t n_A = 33;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A34) {
        size_t n_A = 34;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A35) {
        size_t n_A = 35;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A36) {
        size_t n_A = 36;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A37) {
        size_t n_A = 37;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A38) {
        size_t n_A = 38;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A39) {
        size_t n_A = 39;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A40) {
        size_t n_A = 40;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A41) {
        size_t n_A = 41;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A42) {
        size_t n_A = 42;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A43) {
        size_t n_A = 43;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A44) {
        size_t n_A = 44;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A45) {
        size_t n_A = 45;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A46) {
        size_t n_A = 46;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A47) {
        size_t n_A = 47;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A48) {
        size_t n_A = 48;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A49) {
        size_t n_A = 49;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin4A50) {
        size_t n_A = 50;
        int n_red = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A1) {
        size_t n_A = 1;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A2) {
        size_t n_A = 2;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A3) {
        size_t n_A = 3;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A4) {
        size_t n_A = 4;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A5) {
        size_t n_A = 5;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A6) {
        size_t n_A = 6;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A7) {
        size_t n_A = 7;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A8) {
        size_t n_A = 8;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A9) {
        size_t n_A = 9;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A10) {
        size_t n_A = 10;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A11) {
        size_t n_A = 11;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A12) {
        size_t n_A = 12;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A13) {
        size_t n_A = 13;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A14) {
        size_t n_A = 14;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A15) {
        size_t n_A = 15;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A16) {
        size_t n_A = 16;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A17) {
        size_t n_A = 17;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A18) {
        size_t n_A = 18;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A19) {
        size_t n_A = 19;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A20) {
        size_t n_A = 20;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A21) {
        size_t n_A = 21;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A22) {
        size_t n_A = 22;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A23) {
        size_t n_A = 23;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A24) {
        size_t n_A = 24;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A25) {
        size_t n_A = 25;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A26) {
        size_t n_A = 26;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A27) {
        size_t n_A = 27;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A28) {
        size_t n_A = 28;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A29) {
        size_t n_A = 29;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A30) {
        size_t n_A = 30;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A31) {
        size_t n_A = 31;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A32) {
        size_t n_A = 32;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A33) {
        size_t n_A = 33;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A34) {
        size_t n_A = 34;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A35) {
        size_t n_A = 35;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A36) {
        size_t n_A = 36;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A37) {
        size_t n_A = 37;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A38) {
        size_t n_A = 38;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A39) {
        size_t n_A = 39;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A40) {
        size_t n_A = 40;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A41) {
        size_t n_A = 41;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A42) {
        size_t n_A = 42;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A43) {
        size_t n_A = 43;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A44) {
        size_t n_A = 44;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A45) {
        size_t n_A = 45;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A46) {
        size_t n_A = 46;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A47) {
        size_t n_A = 47;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A48) {
        size_t n_A = 48;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A49) {
        size_t n_A = 49;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin5A50) {
        size_t n_A = 50;
        int n_red = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A1) {
        size_t n_A = 1;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A2) {
        size_t n_A = 2;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A3) {
        size_t n_A = 3;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A4) {
        size_t n_A = 4;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A5) {
        size_t n_A = 5;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A6) {
        size_t n_A = 6;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A7) {
        size_t n_A = 7;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A8) {
        size_t n_A = 8;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A9) {
        size_t n_A = 9;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A10) {
        size_t n_A = 10;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A11) {
        size_t n_A = 11;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A12) {
        size_t n_A = 12;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A13) {
        size_t n_A = 13;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A14) {
        size_t n_A = 14;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A15) {
        size_t n_A = 15;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A16) {
        size_t n_A = 16;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A17) {
        size_t n_A = 17;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A18) {
        size_t n_A = 18;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A19) {
        size_t n_A = 19;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A20) {
        size_t n_A = 20;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A21) {
        size_t n_A = 21;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A22) {
        size_t n_A = 22;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A23) {
        size_t n_A = 23;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A24) {
        size_t n_A = 24;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A25) {
        size_t n_A = 25;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A26) {
        size_t n_A = 26;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A27) {
        size_t n_A = 27;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A28) {
        size_t n_A = 28;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A29) {
        size_t n_A = 29;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A30) {
        size_t n_A = 30;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A31) {
        size_t n_A = 31;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A32) {
        size_t n_A = 32;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A33) {
        size_t n_A = 33;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A34) {
        size_t n_A = 34;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A35) {
        size_t n_A = 35;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A36) {
        size_t n_A = 36;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A37) {
        size_t n_A = 37;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A38) {
        size_t n_A = 38;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A39) {
        size_t n_A = 39;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A40) {
        size_t n_A = 40;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A41) {
        size_t n_A = 41;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A42) {
        size_t n_A = 42;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A43) {
        size_t n_A = 43;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A44) {
        size_t n_A = 44;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A45) {
        size_t n_A = 45;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A46) {
        size_t n_A = 46;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A47) {
        size_t n_A = 47;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A48) {
        size_t n_A = 48;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A49) {
        size_t n_A = 49;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin6A50) {
        size_t n_A = 50;
        int n_red = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A1) {
        size_t n_A = 1;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A2) {
        size_t n_A = 2;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A3) {
        size_t n_A = 3;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A4) {
        size_t n_A = 4;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A5) {
        size_t n_A = 5;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A6) {
        size_t n_A = 6;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A7) {
        size_t n_A = 7;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A8) {
        size_t n_A = 8;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A9) {
        size_t n_A = 9;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A10) {
        size_t n_A = 10;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A11) {
        size_t n_A = 11;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A12) {
        size_t n_A = 12;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A13) {
        size_t n_A = 13;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A14) {
        size_t n_A = 14;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A15) {
        size_t n_A = 15;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A16) {
        size_t n_A = 16;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A17) {
        size_t n_A = 17;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A18) {
        size_t n_A = 18;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A19) {
        size_t n_A = 19;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A20) {
        size_t n_A = 20;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A21) {
        size_t n_A = 21;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A22) {
        size_t n_A = 22;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A23) {
        size_t n_A = 23;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A24) {
        size_t n_A = 24;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A25) {
        size_t n_A = 25;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A26) {
        size_t n_A = 26;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A27) {
        size_t n_A = 27;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A28) {
        size_t n_A = 28;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A29) {
        size_t n_A = 29;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A30) {
        size_t n_A = 30;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A31) {
        size_t n_A = 31;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A32) {
        size_t n_A = 32;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A33) {
        size_t n_A = 33;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A34) {
        size_t n_A = 34;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A35) {
        size_t n_A = 35;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A36) {
        size_t n_A = 36;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A37) {
        size_t n_A = 37;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A38) {
        size_t n_A = 38;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A39) {
        size_t n_A = 39;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A40) {
        size_t n_A = 40;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A41) {
        size_t n_A = 41;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A42) {
        size_t n_A = 42;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A43) {
        size_t n_A = 43;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A44) {
        size_t n_A = 44;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A45) {
        size_t n_A = 45;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A46) {
        size_t n_A = 46;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A47) {
        size_t n_A = 47;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A48) {
        size_t n_A = 48;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A49) {
        size_t n_A = 49;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin7A50) {
        size_t n_A = 50;
        int n_red = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A1) {
        size_t n_A = 1;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A2) {
        size_t n_A = 2;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A3) {
        size_t n_A = 3;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A4) {
        size_t n_A = 4;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A5) {
        size_t n_A = 5;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A6) {
        size_t n_A = 6;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A7) {
        size_t n_A = 7;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A8) {
        size_t n_A = 8;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A9) {
        size_t n_A = 9;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A10) {
        size_t n_A = 10;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A11) {
        size_t n_A = 11;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A12) {
        size_t n_A = 12;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A13) {
        size_t n_A = 13;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A14) {
        size_t n_A = 14;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A15) {
        size_t n_A = 15;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A16) {
        size_t n_A = 16;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A17) {
        size_t n_A = 17;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A18) {
        size_t n_A = 18;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A19) {
        size_t n_A = 19;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A20) {
        size_t n_A = 20;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A21) {
        size_t n_A = 21;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A22) {
        size_t n_A = 22;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A23) {
        size_t n_A = 23;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A24) {
        size_t n_A = 24;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A25) {
        size_t n_A = 25;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A26) {
        size_t n_A = 26;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A27) {
        size_t n_A = 27;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A28) {
        size_t n_A = 28;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A29) {
        size_t n_A = 29;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A30) {
        size_t n_A = 30;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A31) {
        size_t n_A = 31;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A32) {
        size_t n_A = 32;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A33) {
        size_t n_A = 33;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A34) {
        size_t n_A = 34;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A35) {
        size_t n_A = 35;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A36) {
        size_t n_A = 36;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A37) {
        size_t n_A = 37;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A38) {
        size_t n_A = 38;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A39) {
        size_t n_A = 39;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A40) {
        size_t n_A = 40;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A41) {
        size_t n_A = 41;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A42) {
        size_t n_A = 42;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A43) {
        size_t n_A = 43;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A44) {
        size_t n_A = 44;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A45) {
        size_t n_A = 45;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A46) {
        size_t n_A = 46;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A47) {
        size_t n_A = 47;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A48) {
        size_t n_A = 48;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A49) {
        size_t n_A = 49;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin8A50) {
        size_t n_A = 50;
        int n_red = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A1) {
        size_t n_A = 1;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A2) {
        size_t n_A = 2;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A3) {
        size_t n_A = 3;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A4) {
        size_t n_A = 4;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A5) {
        size_t n_A = 5;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A6) {
        size_t n_A = 6;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A7) {
        size_t n_A = 7;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A8) {
        size_t n_A = 8;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A9) {
        size_t n_A = 9;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A10) {
        size_t n_A = 10;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A11) {
        size_t n_A = 11;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A12) {
        size_t n_A = 12;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A13) {
        size_t n_A = 13;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A14) {
        size_t n_A = 14;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A15) {
        size_t n_A = 15;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A16) {
        size_t n_A = 16;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A17) {
        size_t n_A = 17;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A18) {
        size_t n_A = 18;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A19) {
        size_t n_A = 19;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A20) {
        size_t n_A = 20;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A21) {
        size_t n_A = 21;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A22) {
        size_t n_A = 22;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A23) {
        size_t n_A = 23;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A24) {
        size_t n_A = 24;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A25) {
        size_t n_A = 25;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A26) {
        size_t n_A = 26;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A27) {
        size_t n_A = 27;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A28) {
        size_t n_A = 28;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A29) {
        size_t n_A = 29;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A30) {
        size_t n_A = 30;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A31) {
        size_t n_A = 31;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A32) {
        size_t n_A = 32;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A33) {
        size_t n_A = 33;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A34) {
        size_t n_A = 34;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A35) {
        size_t n_A = 35;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A36) {
        size_t n_A = 36;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A37) {
        size_t n_A = 37;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A38) {
        size_t n_A = 38;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A39) {
        size_t n_A = 39;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A40) {
        size_t n_A = 40;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A41) {
        size_t n_A = 41;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A42) {
        size_t n_A = 42;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A43) {
        size_t n_A = 43;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A44) {
        size_t n_A = 44;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A45) {
        size_t n_A = 45;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A46) {
        size_t n_A = 46;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A47) {
        size_t n_A = 47;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A48) {
        size_t n_A = 48;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A49) {
        size_t n_A = 49;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }

    TEST(OwnReductionTwins, TRedTwin9A50) {
        size_t n_A = 50;
        int n_red = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string s_path = "../data/test/own/reduction_twins/" + std::to_string(n_red) + "/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_reduction_twins(g_path, s_path, n_red);
                }
            }
        }
    }
}
