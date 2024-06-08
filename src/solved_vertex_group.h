/* Crossing-Guard. Software to exactly solve the one-sided crossing
   minimization problem (OCM)
   Copyright (C) 2024  Henning Woydt

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or any
   later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.
==============================================================================*/

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
