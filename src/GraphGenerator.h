#ifndef PACE2024EXACT_GRAPHGENERATOR_H
#define PACE2024EXACT_GRAPHGENERATOR_H

#include <utility>
#include <vector>
#include <string>
#include <cstdint>
#include <random>
#include <sstream>
#include <fstream>
#include <iostream>

/**
 * Graph generator.
 */
class GraphGenerator {
public:
    int m_n_A;
    int m_n_B;
    std::vector<int> m_allowed_n_connections;

    std::vector<int> m_edge_list;

    /**
     * Constructor.
     *
     * @param n_A Number of vertices in A.
     * @param n_B Number of vertices in B.
     * @param allowed_n_connections Collection of possible number of edges per node.
     */
    GraphGenerator(int n_A,
                   int n_B,
                   std::vector<int> allowed_n_connections) {
        m_n_A = n_A;
        m_n_B = n_B;
        m_allowed_n_connections = std::move(allowed_n_connections);
    }

    /**
     * Generates a new m_graph.
     */
    void generate() {
        m_edge_list.clear();
        for (int i = 0; i < m_n_A; ++i) {
            int vertex_a = i + 1;
            int idx = (int) random() % (int) m_allowed_n_connections.size();
            int n_edges = m_allowed_n_connections[idx];

            for (int j = 0; j < n_edges; ++j) {
                int vertex_b = m_n_A + 1 + ((int) random() % m_n_B);

                bool edge_found = false;
                for (size_t k = 0; k < m_edge_list.size() / 2; ++k) {
                    if (vertex_a == m_edge_list[2 * k] && vertex_b == m_edge_list[2 * k + 1]) {
                        edge_found = true;
                        break;
                    }
                }

                if (!edge_found) {
                    m_edge_list.push_back(vertex_a);
                    m_edge_list.push_back(vertex_b);
                }
            }
        }
    }

    /**
     * Writes the generated m_graph to the file.
     *
     * @param file_path Path to the output file.
     */
    void write_to_file(std::string &file_path) {
        std::ofstream file(file_path);

        if (file.is_open()) {
            file << "p ocr " << m_n_A << " " << m_n_B << " " << m_edge_list.size() / 2 << "\n";
            for (size_t i = 0; i < m_edge_list.size() / 2; ++i) {
                int vertex_a = m_edge_list[i * 2];
                int vertex_b = m_edge_list[i * 2 + 1];

                file << vertex_a << " " << vertex_b << "\n";
            }
            file.close();
        } else {
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }
    }
};


#endif //PACE2024EXACT_GRAPHGENERATOR_H
