#include "misc.h"

bool file_exists(const std::string &file_path) {
    struct stat buffer{};
    return (stat(file_path.c_str(), &buffer) == 0);
}

bool no_duplicates(const std::vector<std::vector<int>> &vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        for (size_t j = i + 1; j < vec.size(); ++j) {
            std::vector<int> vec1 = vec[i];
            std::vector<int> vec2 = vec[j];

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

std::vector<int> read_solution(std::string &file_path, int shift) {
    std::vector<int> vec;

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

void write_solution(std::vector<int> &solution, std::string &file_path) {
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

double get_elapsed_seconds(std::chrono::steady_clock::time_point sp,
                           std::chrono::steady_clock::time_point ep) {
    return (double) std::chrono::duration_cast<std::chrono::nanoseconds>(ep - sp).count() / 1e9;
}
