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

class GraphGenerator {
public:
    uint32_t n_A;
    uint32_t n_B;
    std::vector<uint32_t> allowed_n_connections;

    std::vector<uint32_t> edge_list;

    GraphGenerator(uint32_t n_A,
                   uint32_t n_B,
                   std::vector<uint32_t> allowed_n_connections) {
        this->n_A = n_A;
        this->n_B = n_B;
        this->allowed_n_connections = std::move(allowed_n_connections);
    }

    void generate() {
        for (size_t i = 0; i < n_A; ++i) {
            uint32_t vertex_a = i + 1;
            uint32_t idx = random() % allowed_n_connections.size();
            uint32_t n_edges = allowed_n_connections[idx];

            for (size_t j = 0; j < n_edges; ++j) {
                uint32_t vertex_b = n_A + 1 + (random() % n_B);

                bool edge_found = false;
                for (size_t k = 0; k < edge_list.size() / 2; ++k) {
                    if (vertex_a == edge_list[2 * k] && vertex_b == edge_list[2 * k + 1]) {
                        edge_found = true;
                        break;
                    }
                }

                if (!edge_found) {
                    edge_list.push_back(vertex_a);
                    edge_list.push_back(vertex_b);
                }
            }
        }
    }

    void write_to_file(std::string &file_path) {
        std::ofstream file(file_path);

        if (file.is_open()) {
            file << "p ocr " << n_A << " " << n_B << " " << edge_list.size() / 2 << "\n";
            for (size_t i = 0; i < edge_list.size() / 2; ++i) {
                uint32_t vertex_a = edge_list[i * 2];
                uint32_t vertex_b = edge_list[i * 2 + 1];

                file << vertex_a << " " << vertex_b << "\n";
            }
            file.close();
        } else {
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }
    }
};


#endif //PACE2024EXACT_GRAPHGENERATOR_H
