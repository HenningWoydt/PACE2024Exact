#include "misc.h"

bool no_duplicates(const std::vector<std::vector<uint32_t>> &vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        for (size_t j = i + 1; j < vec.size(); ++j) {
            std::vector<uint32_t> vec1 = vec[i];
            std::vector<uint32_t> vec2 = vec[j];

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

std::vector<uint32_t> read_solution(std::string &file_path, uint32_t shift) {
    std::vector<uint32_t> vec;

    std::ifstream file(file_path);
    if (file.is_open()) {
        for (std::string line; std::getline(file, line);) {
            if (line.back() == '\n' || line.back() == '\r') {
                line.pop_back();
            }
            uint32_t vertex = std::stoi(line);
            vec.push_back(vertex - shift);
        }
    } else {
        std::cout << "Could not open file " << file_path << " !" << std::endl;
    }

    return vec;
}

void write_solution(std::vector<uint32_t> &solution, std::string &file_path) {
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
