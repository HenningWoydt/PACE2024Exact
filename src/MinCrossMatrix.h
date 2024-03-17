#ifndef PACE2024EXACT_MINCROSSMATRIX_H
#define PACE2024EXACT_MINCROSSMATRIX_H

#include <vector>

/**
 * Class to hold a Minimum-Cross-Matrix.
 */
class MinCrossMatrix {
private:
    int m_n = 0;
    std::vector<int> m_matrix;

public:

    /**
     * Default constructor.
     */
    MinCrossMatrix() = default;

    /**
     * Default constructor.
     *
     * @param n Size of the m_matrix.
     */
    explicit MinCrossMatrix(int n) {
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
    void set_entry(int idx1, int idx2, int val) {
        int i1 = std::max(idx1, idx2);
        int i2 = std::min(idx1, idx2);

        m_matrix[i1 * m_n + i2] = val;
    }

    /**
     * Returns the value at the specified index.
     *
     * @param idx1 Index of the first element.
     * @param idx2 Index of the second element.
     * @return The value at the index.
     */
    int get_entry(int idx1, int idx2) {
        int i1 = std::max(idx1, idx2);
        int i2 = std::min(idx1, idx2);

        return m_matrix[i1 * m_n + i2];
    }

    /**
     * Prints the matrix to the standard output.
     */
    void print() {
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

#endif //PACE2024EXACT_MINCROSSMATRIX_H
