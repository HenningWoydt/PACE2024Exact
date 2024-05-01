#ifndef PACE2024EXACT_ALIGNEDVECTOR_H
#define PACE2024EXACT_ALIGNEDVECTOR_H

#include <vector>
#include <boost/align/aligned_allocator.hpp>

template <typename T>
using AlignedVector = std::vector<T, boost::alignment::aligned_allocator<T, 64>>;

#endif //PACE2024EXACT_ALIGNEDVECTOR_H
