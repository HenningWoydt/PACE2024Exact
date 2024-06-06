#include "misc.h"

namespace CrossGuard {

    bool file_exists(const std::string &file_path) {
        struct stat buffer{};
        return (stat(file_path.c_str(), &buffer) == 0);
    }

    bool no_duplicates(const AlignedVector<AlignedVector<int>> &vec) {
        for (size_t i = 0; i < vec.size(); ++i) {
            for (size_t j = i + 1; j < vec.size(); ++j) {
                AlignedVector<int> vec1 = vec[i];
                AlignedVector<int> vec2 = vec[j];

                bool is_same = true;
                for (size_t k = 0; k < vec1.size(); ++k) {
                    if (vec1[k] != vec2[k]) {
                        is_same = false;
                        break;
                    }
                }

                if (is_same) {
                    return false;
                }
            }
        }
        return true;
    }

    AlignedVector<unsigned int> read_solution(const std::string &file_path, unsigned int shift) {
        AlignedVector<unsigned int> vec;

        std::ifstream file(file_path);
        if (file.is_open()) {
            for (std::string line; std::getline(file, line);) {
                if (line.back() == '\n' || line.back() == '\r') {
                    line.pop_back();
                }
                int vertex = std::stoi(line);
                vec.push_back(vertex - shift);
            }
        } else {
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }

        return vec;
    }

    void write_solution(const AlignedVector<unsigned int> &solution, const std::string &file_path) {
        std::ofstream file(file_path);

        if (file.is_open()) {
            for (unsigned int i: solution) {
                file << i << "\n";
            }
            file.close();
        } else {
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }
    }

    double get_seconds(std::chrono::steady_clock::time_point sp,
                       std::chrono::steady_clock::time_point ep) {
        return (double) std::chrono::duration_cast<std::chrono::nanoseconds>(ep - sp).count() / 1e9;
    }

    u64 hash(const AlignedVector<Edge> &vec) {
        std::size_t seed = vec.size();
        for(auto e : vec) {
            u64 x = e.vertex;
            x = ((x >> 16) ^ x) * 0x45d9f3b;
            x = ((x >> 16) ^ x) * 0x45d9f3b;
            x = (x >> 16) ^ x;
            seed ^= x + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }

    bool is_contained(const AlignedVector<Edge>& smaller_vector, const AlignedVector<Edge>& larger_vector) {

        for(Edge e1 : smaller_vector){
            bool found = false;
            for(Edge e2 : larger_vector){
                if(e1.vertex == e2.vertex){
                    found = true;
                    break;
                }
            }
            if(!found){
                return false;
            }
        }

        return true;

        u64 smaller_len = smaller_vector.size();
        u64 larger_len = larger_vector.size();

        u64 i = 0; // Pointer for smaller vector
        u64 j = 0; // Pointer for larger vector

        while (i < smaller_len && j < larger_len) {
            if (smaller_vector[i] < larger_vector[j]) {
                // If the element in smaller vector is smaller, move its pointer
                i++;
            } else if (smaller_vector[i] == larger_vector[j]) {
                // If elements are equal, move both pointers
                i++;
                j++;
            } else {
                // If element in smaller vector is larger, it's not contained
                return false;
            }
        }

        // If all elements of smaller vector are found in larger vector
        // then return true
        return i == smaller_len;
    }

}
