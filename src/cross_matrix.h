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

#ifndef PACE2024EXACT_CROSSMATRIX_H
#define PACE2024EXACT_CROSSMATRIX_H

#include <vector>

#include "definitions.h"
#include "macros.h"
#include "misc.h"

namespace CrossGuard {

    /**
     * Class to hold a Minimum-Cross-Matrix.
     */
    class CrossMatrix {
    public:
        u32 n = 0;
        AlignedVector<u32> matrix;

        /**
         * Default constructor.
         *
         * @param n Size of the m_matrix.
         */
        explicit CrossMatrix(u32 n) {
            this->n = n;
            matrix.resize(n * n, 0);
        }

        /**
         * Prints the matrix to the standard output.
         */
        inline void print() {
            for (u32 i = 0; i < n; ++i) {
                if (n == 0) {
                    std::cout << "[]" << std::endl;
                    continue;
                }
                std::cout << "[";
                for (u32 j = 0; j < n - 1; ++j) {
                    std::cout << matrix[i * n + j] << " ";
                }
                std::cout << matrix[i * n + n - 1] << "]" << std::endl;
            }
        }
    };

}

#endif //PACE2024EXACT_CROSSMATRIX_H
