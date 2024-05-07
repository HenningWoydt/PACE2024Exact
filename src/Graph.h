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
#include "AlignedVector.h"

namespace CrossGuard {

/**
 * Class to store the bipartite graph.
 */
    class Graph {
    public:
        int m_n_A = 0;
        int m_n_B = 0;
        int m_n_edges = 0;

        AlignedVector<AlignedVector<int>> m_adj_list;

        AlignedVector<AlignedVector<int>> m_adj_list_from_A;

        /**
         * Reads a graph from a file.
         *
         * @param file_path Path to the file.
         */
        explicit Graph(const std::string &file_path) {
            std::ios_base::sync_with_stdio(false);
            std::ifstream file(file_path);

            std::string line(64, ' ');
            if (file.is_open()) {
                while (std::getline(file, line)) {
                    if (line[0] == 'c') { continue; }
                    if (line.back() == '\n' || line.back() == '\r') { line.pop_back(); }

                    assert(line[0] == 'p');
                    assert(line[1] == ' ');
                    assert(line[2] == 'o');
                    assert(line[3] == 'c');
                    assert(line[4] == 'r');
                    assert(line[5] == ' ');

                    m_n_A = 0;
                    m_n_B = 0;
                    m_n_edges = 0;
                    size_t i = 6;

                    // read in n_A
                    while (line[i] != ' ') {
                        m_n_A = m_n_A * 10 + line[i] - '0';
                        i += 1;
                    }
                    i += 1;

                    // read in n_B
                    while (line[i] != ' ') {
                        m_n_B = m_n_B * 10 + line[i] - '0';
                        i += 1;
                    }

                    // adjacency list for vertices of A
                    m_adj_list_from_A.resize(m_n_A);
                    for (int j = 0; j < m_n_A; ++j) {
                        m_adj_list_from_A[j].reserve(16);
                    }

                    // adjacency list for vertices of B
                    m_adj_list.resize(m_n_B);
                    for (int j = 0; j < m_n_B; ++j) {
                        m_adj_list[j].reserve(16);
                    }
                    break;
                }

                while (std::getline(file, line)) {
                    if (line[0] == 'c') { continue; }
                    if (line.back() == '\n' || line.back() == '\r') { line.pop_back(); }

                    int a = 0, b = 0;
                    size_t i = 0;

                    // read in vertex a
                    while (line[i] != ' ') {
                        a = a * 10 + line[i] - '0';
                        i += 1;
                    }
                    a -= 1;
                    i += 1;

                    // read in vertex b
                    while (i < line.size()) {
                        b = b * 10 + line[i] - '0';
                        i += 1;
                    }

                    b -= (m_n_A + 1);
                    add_edge(a, b);
                }
                file.close();

                // sort each neighborhood
                sort_neighborhoods();
            } else {
                std::cout << "Could not open file " << file_path << " !" << std::endl;
            }
        }

        /**
         * Initializes the graph.
         *
         * @param n_A Number of fixed vertices.
         * @param n_B Number of movable vertices.
         */
        Graph(int n_A, int n_B) {
            m_n_A = n_A;
            m_n_B = n_B;
            m_n_edges = 0;

            m_adj_list.resize(m_n_B);
            m_adj_list_from_A.resize(m_n_A);
        }

        Graph() {
            m_n_A = 0;
            m_n_B = 0;
            m_n_edges = 0;
        }

        /**
         * Adds an edge to the graph. Note that a must be in the range
         * {0, ..., n_A - 1} and b must be in the range {0, ..., n_B - 1}.
         *
         * @param a Vertex a (fixed vertex).
         * @param b Vertex b (movable vertex).
         */
        inline void add_edge(int a, int b) {
            m_n_edges += 1;
            m_adj_list[b].push_back(a);
            m_adj_list_from_A[a].push_back(b);
        }

        /**
         * Sorts each neighborhood ascending.
         */
        inline void sort_neighborhoods() {
            // sort each neighborhood
            for (int i = 0; i < m_n_B; ++i) {
                std::sort(m_adj_list[i].begin(), m_adj_list[i].end());
            }

            for (int i = 0; i < m_n_A; ++i) {
                std::sort(m_adj_list_from_A[i].begin(), m_adj_list_from_A[i].end());
            }
        }

        /**
         * Determines the number of cuts. Note that the vector should already be
         * shifted in the range [0, ..., m_n_B - 1].
         *
         * @param permutation The m_permutation.
         * @return Number of cuts.
         */
        inline int determine_n_cuts(const std::vector<int> &permutation) {
            int n_cuts = 0;
            for (int i = 0; i < m_n_B; ++i) {
                for (int j = i + 1; j < m_n_B; ++j) {
                    int b1 = permutation[i];
                    int b2 = permutation[j];

                    // loop through the edges
                    for (size_t k = 0; k < m_adj_list[b1].size(); ++k) {
                        for (size_t l = 0; l < m_adj_list[b2].size(); ++l) {
                            int a1_pos = m_adj_list[b1][k];
                            int a2_pos = m_adj_list[b2][l];

                            n_cuts += (a2_pos < a1_pos);
                        }
                    }
                }
            }
            return n_cuts;
        }

        /**
         * Prints the graph as an adjacency list. Only prints the adjacency of
         * movable nodes.
         */
        inline void print() const {
            for (int i = 0; i < m_n_B; ++i) {
                std::cout << i << ": ";
                CrossGuard::print(m_adj_list[i]);
            }
        }
    };


}

#endif //PACE2024EXACT_GRAPH_H
