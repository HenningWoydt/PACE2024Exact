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

#ifndef PACE2024EXACT_EDGE_H
#define PACE2024EXACT_EDGE_H

#include <iostream>

#include "definitions.h"

namespace CrossGuard {
    /**
     * Represents one edge.
     */
    class Edge {
    public:
        u32 vertex;
        u32 weight;
    };

    bool operator==(const Edge &lhs, const Edge &rhs);

    bool operator<=(const Edge &lhs, const Edge &rhs);

    bool operator<(const Edge &lhs, const Edge &rhs);

    std::ostream &operator<<(std::ostream &os, const Edge &obj);

}

#endif //PACE2024EXACT_EDGE_H
