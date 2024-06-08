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
#define n_files 0

namespace CrossGuard {

    TEST(OwnDominationReduction, T1) {
        size_t n_A = 1;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T2) {
        size_t n_A = 2;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T3) {
        size_t n_A = 3;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T4) {
        size_t n_A = 4;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T5) {
        size_t n_A = 5;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T6) {
        size_t n_A = 6;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T7) {
        size_t n_A = 7;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T8) {
        size_t n_A = 8;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T9) {
        size_t n_A = 9;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T10) {
        size_t n_A = 10;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T11) {
        size_t n_A = 11;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T12) {
        size_t n_A = 12;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T13) {
        size_t n_A = 13;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T14) {
        size_t n_A = 14;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T15) {
        size_t n_A = 15;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T16) {
        size_t n_A = 16;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T17) {
        size_t n_A = 17;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T18) {
        size_t n_A = 18;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T19) {
        size_t n_A = 19;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T20) {
        size_t n_A = 20;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T21) {
        size_t n_A = 21;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T22) {
        size_t n_A = 22;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T23) {
        size_t n_A = 23;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T24) {
        size_t n_A = 24;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T25) {
        size_t n_A = 25;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T26) {
        size_t n_A = 26;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T27) {
        size_t n_A = 27;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T28) {
        size_t n_A = 28;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T29) {
        size_t n_A = 29;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T30) {
        size_t n_A = 30;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T31) {
        size_t n_A = 31;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T32) {
        size_t n_A = 32;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T33) {
        size_t n_A = 33;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T34) {
        size_t n_A = 34;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T35) {
        size_t n_A = 35;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T36) {
        size_t n_A = 36;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T37) {
        size_t n_A = 37;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T38) {
        size_t n_A = 38;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T39) {
        size_t n_A = 39;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T40) {
        size_t n_A = 40;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T41) {
        size_t n_A = 41;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T42) {
        size_t n_A = 42;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T43) {
        size_t n_A = 43;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T44) {
        size_t n_A = 44;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T45) {
        size_t n_A = 45;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T46) {
        size_t n_A = 46;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T47) {
        size_t n_A = 47;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T48) {
        size_t n_A = 48;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T49) {
        size_t n_A = 49;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

    TEST(OwnDominationReduction, T50) {
        size_t n_A = 50;
        for (size_t n_B = 1; n_B < max_n_B; ++n_B) {
            for (size_t j = 0; j < n_files; ++j) {
                std::string g_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "/" + std::to_string(j) + ".gr";
                std::string sol_path = "../data/test/own/random/" + std::to_string(n_A) + "_" + std::to_string(n_B) + "-sol/" + std::to_string(j) + ".sol";

                if (file_exists(g_path)) {
                    compare_domination_reduction(g_path, sol_path);
                }
            }
        }
    }

}
