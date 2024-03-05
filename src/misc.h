#ifndef PACE2024EXACT_MISC_H
#define PACE2024EXACT_MISC_H

#include <vector>
#include <iostream>

template <typename T>
void print(const std::vector<T> &vec){
    if(vec.empty()){
        std::cout << "[]" << std::endl;
        return;
    }

    std::cout << "[";
    for(size_t i = 0; i < vec.size()-1; ++i){
        std::cout << vec[i] << ", ";
    }
    std::cout << vec.back() << "]" << std::endl;
}

template <typename T>
bool no_duplicates(const std::vector<T> &vec){
    for(size_t i = 0; i < vec.size(); ++i){
        for(size_t j = i + 1; j < vec.size(); ++j){
            if(vec[i] == vec[j]){
                return false;
            }
        }
    }
    return true;
}

template <typename T>
uint64_t fac(T n){
    uint64_t prod = 1;
    for(uint64_t i = 1; i <= n; ++i){
        prod *= i;
    }
    return prod;
}

#endif //PACE2024EXACT_MISC_H
