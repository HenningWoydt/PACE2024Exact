#ifndef PACE2024EXACT_MISC_H
#define PACE2024EXACT_MISC_H

#include <vector>
#include <iostream>
#include <cstdint>
#include <fstream>

/**
 * Prints the content of a vector in a Numpy-style way. The '<<' operator must
 * be defined for T.
 *
 * @tparam T Type of the vector.
 * @param vec The vector.
 */
template<typename T>
void print(const std::vector<T> &vec) {
    if (vec.empty()) {
        std::cout << "[]" << std::endl;
        return;
    }

    std::cout << "[";
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        std::cout << vec[i] << ", ";
    }
    std::cout << vec.back() << "]" << std::endl;
}

/**
 * Determines if a vector contains a duplicate item. The '==' operator must be
 * defined for T.
 *
 * @tparam T Type of the vector.
 * @param vec The vector.
 * @return True if no duplicates are present, false else.
 */
template<typename T>
bool no_duplicates(const std::vector<T> &vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        for (size_t j = i + 1; j < vec.size(); ++j) {
            if (vec[i] == vec[j]) {
                return false;
            }
        }
    }
    return true;
}

/**
 * Specialized function that determines if each vector inside the vector is
 * unique.
 *
 * @param vec Vector of vectors.
 * @return True if no duplicates are present, false else.
 */
bool no_duplicates(const std::vector<std::vector<uint32_t>> &vec);

/**
 * Computes the factorial of a number.
 *
 * @tparam T Type of the number.
 * @param n The number.
 * @return n!
 */
template<typename T>
uint64_t fac(T n) {
    uint64_t prod = 1;
    for (uint64_t i = 1; i <= n; ++i) {
        prod *= i;
    }
    return prod;
}

/**
 * Reads a solution from a .sol file.
 *
 * @param file_path Path to the file.
 * @param shift Shifts the read numbers to the left (x -= shift).
 * @return Vector containing the solution.
 */
std::vector<uint32_t> read_solution(std::string &file_path, uint32_t shift);

/**
 * Write a solution vector to a file.
 *
 * @param solution Vector holding the solution.
 * @param file_path Path to the file.
 */
void write_solution(std::vector<uint32_t> &solution, std::string &file_path);

#endif //PACE2024EXACT_MISC_H
