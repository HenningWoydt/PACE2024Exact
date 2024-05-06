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

}
