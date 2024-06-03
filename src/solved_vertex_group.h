#ifndef PACE2024EXACT_SOLVED_VERTEX_GROUP_H
#define PACE2024EXACT_SOLVED_VERTEX_GROUP_H

#include <vector>
#include <cstdint>
#include <numeric>
#include <limits>

#include "definitions.h"
#include "macros.h"
#include "misc.h"
#include "graph.h"

namespace CrossGuard {

    // Class which holds, the minimum number of vertex cuts for a small group of
    // vertices
    class SolvedVertexGroup {
    public:
        AlignedVector<u32> vertices;
        AlignedVector<u64> vertex_marked;

        u32 n_best_cuts = 0; // actual best achievable number of cuts
        u32 n_min_cuts = 0; // lower bound of number of cuts

        SolvedVertexGroup() = default;

        void add_vertex(u32 v) {
            ASSERT(vertices.size() == vertex_marked.size());
            vertices.push_back(v);
            vertex_marked.push_back(0);
            ASSERT(vertices.size() == vertex_marked.size());
        }

        void set_n_best_cuts(u32 n) {
            n_best_cuts = n;
        }

        void set_n_min_cuts(u32 n) {
            n_min_cuts = n;
        }

        bool all_marked(u64 id){
            bool all = true;
            for(u8 x : vertex_marked){
                all &= (x == id);
            }
            return all;
        }
    };

}

#endif //PACE2024EXACT_SOLVED_VERTEX_GROUP_H
