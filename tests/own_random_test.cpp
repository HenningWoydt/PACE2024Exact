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

#define max_n_B 11
#define n_files 110

namespace CrossGuard {

    TEST(OwnRandom, T1) {
        size_t n_A = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T2) {
        size_t n_A = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T3) {
        size_t n_A = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T4) {
        size_t n_A = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T5) {
        size_t n_A = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T6) {
        size_t n_A = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T7) {
        size_t n_A = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T8) {
        size_t n_A = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T9) {
        size_t n_A = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T10) {
        size_t n_A = 10;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T11) {
        size_t n_A = 11;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T12) {
        size_t n_A = 12;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T13) {
        size_t n_A = 13;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T14) {
        size_t n_A = 14;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T15) {
        size_t n_A = 15;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T16) {
        size_t n_A = 16;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T17) {
        size_t n_A = 17;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T18) {
        size_t n_A = 18;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T19) {
        size_t n_A = 19;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T20) {
        size_t n_A = 20;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T21) {
        size_t n_A = 21;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T22) {
        size_t n_A = 22;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T23) {
        size_t n_A = 23;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T24) {
        size_t n_A = 24;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T25) {
        size_t n_A = 25;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T26) {
        size_t n_A = 26;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T27) {
        size_t n_A = 27;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T28) {
        size_t n_A = 28;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T29) {
        size_t n_A = 29;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T30) {
        size_t n_A = 30;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T31) {
        size_t n_A = 31;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T32) {
        size_t n_A = 32;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T33) {
        size_t n_A = 33;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T34) {
        size_t n_A = 34;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T35) {
        size_t n_A = 35;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T36) {
        size_t n_A = 36;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T37) {
        size_t n_A = 37;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T38) {
        size_t n_A = 38;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T39) {
        size_t n_A = 39;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T40) {
        size_t n_A = 40;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T41) {
        size_t n_A = 41;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T42) {
        size_t n_A = 42;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T43) {
        size_t n_A = 43;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T44) {
        size_t n_A = 44;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T45) {
        size_t n_A = 45;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T46) {
        size_t n_A = 46;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T47) {
        size_t n_A = 47;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T48) {
        size_t n_A = 48;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T49) {
        size_t n_A = 49;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnRandom, T50) {
        size_t n_A = 50;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_exhaustive(g_path, sol_path);
                }
            }
        }
    }

}
