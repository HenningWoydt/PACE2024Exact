#ifndef PACE2024EXACT_GRAPH_H
#define PACE2024EXACT_GRAPH_H

#include <cstdint>
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <sstream>

#include "misc.h"

/**
 * Class to store the bipartite m_graph.
 */
class Graph {
public:
    int m_n_A = 0;
    int m_n_B = 0;

    std::vector<std::vector<int>> m_adj_list;

    /**
     * Reads a m_graph from a file.
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

                    m_n_A = std::stoi(s_A);
                    m_n_B = std::stoi(s_B);

                    m_adj_list.resize(m_n_B);

                    is_p_line = false;
                } else {
                    std::stringstream ss(line);
                    int a, b;
                    ss >> a >> b;
                    b -= (m_n_A + 1);
                    m_adj_list[b].push_back(a - 1);
                }
            }
            file.close();
        } else {
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }
    }

    /**
     * Determines the number of cuts. Note that the vector should already be
     * shifted in the range [0, ..., m_n_B - 1].
     *
     * @param permutation The m_permutation.
     * @return Number of cuts.
     */
    int determine_n_cuts(std::vector<int> &permutation) {
        int n_cuts = 0;
        for (int i = 0; i < m_n_B; ++i) {
            for (int j = i + 1; j < m_n_B; ++j) {
                int b1 = permutation[i];
                int b2 = permutation[j];

                int b1_pos = i;
                int b2_pos = j;

                // loop through the edges
                for (size_t k = 0; k < m_adj_list[b1].size(); ++k) {
                    for (size_t l = 0; l < m_adj_list[b2].size(); ++l) {
                        int a1_pos = m_adj_list[b1][k];
                        int a2_pos = m_adj_list[b2][l];

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

    void print() const {
        for(int i = 0; i < m_n_B; ++i) {
            std::cout << i << ": ";
            ::print(m_adj_list[i]);
        }
    }
};


#endif //PACE2024EXACT_GRAPH_H
