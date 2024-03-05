#ifndef PACE2024EXACT_GRAPH_H
#define PACE2024EXACT_GRAPH_H

#include <cstdint>
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <sstream>

class Graph {
public:
    uint32_t n_A = 0;
    uint32_t n_B = 0;

    std::vector<std::vector<uint32_t>> adj_list;

    explicit Graph(std::string &file_path) {
        std::ifstream file(file_path);

        bool is_p_line = true;
        if (file.is_open()) {
            for (std::string line; std::getline(file, line); ) {
                if(line[0] == 'c'){
                    continue;
                }
                line.pop_back();

                if(is_p_line){
                    assert(line[0] == 'p');
                    assert(line[1] == ' ');
                    assert(line[2] == 'o');
                    assert(line[3] == 'c');
                    assert(line[4] == 'r');
                    assert(line[5] == ' ');

                    size_t i = 6;
                    std::string s_A;
                    std::string s_B;
                    for(; line[i] != ' '; ++i){
                        s_A.push_back(line[i]);
                    }
                    ++i;
                    for(; line[i] != ' '; ++i){
                        s_B.push_back(line[i]);
                    }

                    n_A = std::stoi(s_A);
                    n_B = std::stoi(s_B);

                    adj_list.resize(n_B);

                    is_p_line = false;
                } else{
                    std::stringstream ss(line);
                    uint32_t a, b;
                    ss >> a >> b;
                    b -= (n_A + 1);
                    adj_list[b].push_back(a-1);
                }
            }
            file.close();
        } else{
            std::cout << "Could not open file " << file_path << " !" << std::endl;
        }
    }
};


#endif //PACE2024EXACT_GRAPH_H
