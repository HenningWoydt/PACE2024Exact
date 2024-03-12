#ifndef PACE2024EXACT_GRAPH_H
#define PACE2024EXACT_GRAPH_H

#include <cstdint>
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <sstream>

/**
 * Class to store the bipartite graph.
 */
class Graph {
public:
    uint32_t n_A = 0;
    uint32_t n_B = 0;

    std::vector<std::vector<uint32_t>> adj_list;

    /**
     * Reads a graph from a file.
     *
     * @param file_path Path to the file.
     */
    explicit Graph(std::string &file_path) {
        std::ifstream file(file_path);

        bool is_p_line = true;
        if (file.is_open()) {
            for (std::string line; std::getline(file, line);) {
                if (line[0] == 'c') {
                    continue;
                }
                if (line.back() == '\n' || line.back() == '\r') {
                    line.pop_back();
                }

                if (is_p_line) {
                    assert(line[0] == 'p');
                    assert(line[1] == ' ');
                    assert(line[2] == 'o');
                    assert(line[3] == 'c');
                    assert(line[4] == 'r');
                    assert(line[5] == ' ');

                    size_t i = 6;
                    std::string s_A;
                    std::string s_B;
                    for (; line[i] != ' '; ++i) {
                        s_A.push_back(line[i]);
                    }
                    ++i;
                    for (; line[i] != ' '; ++i) {
                        s_B.push_back(line[i]);
                    }

                    n_A = std::stoi(s_A);
                    n_B = std::stoi(s_B);

                    adj_list.resize(n_B);

                    is_p_line = false;
                } else {
                    std::stringstream ss(line);
                    uint32_t a, b;
                    ss >> a >> b;
                    b -= (n_A + 1);
                    adj_list[b].push_back(a - 1);
                }
            }
            file.close();
        } else {
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }
    }

    /**
     * Determines the number of cuts. Note that the vector should already be
     * shifted in the range [0, ..., n_B - 1].
     *
     * @param permutation The permutation.
     * @return Number of cuts.
     */
    uint32_t determine_n_cuts(std::vector<uint32_t> &permutation) {
        uint32_t n_cuts = 0;
        for (size_t i = 0; i < n_B; ++i) {
            for (size_t j = i + 1; j < n_B; ++j) {
                uint32_t b1 = permutation[i];
                uint32_t b2 = permutation[j];

                uint32_t b1_pos = i;
                uint32_t b2_pos = j;

                // loop through the edges
                for (size_t k = 0; k < adj_list[b1].size(); ++k) {
                    for (size_t l = 0; l < adj_list[b2].size(); ++l) {
                        uint32_t a1_pos = adj_list[b1][k];
                        uint32_t a2_pos = adj_list[b2][l];

                        bool cut1 = (a1_pos < a2_pos) && (b2_pos < b1_pos);
                        bool cut2 = (a2_pos < a1_pos) && (b1_pos < b2_pos);
                        bool cut = cut1 || cut2;
                        n_cuts += cut;
                    }
                }
            }
        }
        return n_cuts;
    }
};


#endif //PACE2024EXACT_GRAPH_H
