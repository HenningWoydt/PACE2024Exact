#ifndef PACE2024EXACT_MINCROSSMATRIX_H
#define PACE2024EXACT_MINCROSSMATRIX_H

#include <vector>

/**
 * Class to hold a Minimum-Cross-Matrix.
 */
class MinCrossMatrix {
private:
    int n = 0;
    std::vector<int> matrix;

public:

    /**
     * Default constructor.
     */
    MinCrossMatrix() = default;

    /**
     * Default constructor.
     *
     * @param n Size of the matrix.
     */
    explicit MinCrossMatrix(int n){
        this->n = n;
        matrix.resize(n*n);
    }

    /**
     * Sets the entry at the specified index.
     *
     * @param idx1 Index of first element.
     * @param idx2 Index of second element.
     * @param val The value to insert.
     */
    void set_entry(int idx1, int idx2, int val){
        int i1 = std::max(idx1, idx2);
        int i2 = std::min(idx1, idx2);

        matrix[i1 *n + i2] = val;
    }

    /**
     * Returns the value at the specified index.
     *
     * @param idx1 Index of the first element.
     * @param idx2 Index of the second element.
     * @return The value at the index.
     */
    int get_entry(int idx1, int idx2){
        int i1 = std::max(idx1, idx2);
        int i2 = std::min(idx1, idx2);

        return matrix[i1 *n + i2];
    }
};

#endif //PACE2024EXACT_MINCROSSMATRIX_H
