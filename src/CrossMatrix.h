#ifndef PACE2024EXACT_CROSSMATRIX_H
#define PACE2024EXACT_CROSSMATRIX_H

#include <vector>

#include "AlignedVector.h"

namespace CrossGuard {

/**
 * Class to hold a Minimum-Cross-Matrix.
 */
    class CrossMatrix {
    private:
        int m_n = 0;
        AlignedVector<int> m_matrix;

    public:

        /**
         * Default constructor.
         */
        CrossMatrix() = default;

        /**
         * Default constructor.
         *
         * @param n Size of the m_matrix.
         */
        explicit CrossMatrix(int n) {
            m_n = n;
            m_matrix.resize(m_n * m_n, 0);
        }

        /**
         * Sets the entry at the specified index.
         *
         * @param idx1 Index of first element.
         * @param idx2 Index of second element.
         * @param val The value to insert.
         */
        inline void set_entry(int idx1, int idx2, int val) {
            m_matrix[idx1 * m_n + idx2] = val;
        }

        /**
         * Returns the value at the specified index.
         *
         * @param idx1 Index of the first element.
         * @param idx2 Index of the second element.
         * @return The value at the index.
         */
        inline int get_entry(int idx1, int idx2) {
            return m_matrix[idx1 * m_n + idx2];
        }

        /**
         * Prints the matrix to the standard output.
         */
        inline void print() {
            for (int i = 0; i < m_n; ++i) {
                if (m_n == 0) {
                    std::cout << "[]" << std::endl;
                    continue;
                }
                std::cout << "[";
                for (int j = 0; j < m_n - 1; ++j) {
                    std::cout << m_matrix[i * m_n + j] << " ";
                }
                std::cout << m_matrix[i * m_n + m_n - 1] << "]" << std::endl;
            }
        }
    };

}

#endif //PACE2024EXACT_CROSSMATRIX_H
