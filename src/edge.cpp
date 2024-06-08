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

#include "edge.h"

namespace CrossGuard {


    bool operator==(const CrossGuard::Edge &lhs, const CrossGuard::Edge &rhs) {
        return lhs.vertex == rhs.vertex;
    }

    bool operator<=(const CrossGuard::Edge &lhs, const CrossGuard::Edge &rhs) {
        return lhs.vertex <= rhs.vertex;
    }

    bool operator<(const CrossGuard::Edge &lhs, const CrossGuard::Edge &rhs) {
        return lhs.vertex < rhs.vertex;
    }

    std::ostream &operator<<(std::ostream &os, const CrossGuard::Edge &obj) {
        os << "(" << obj.vertex << ", " << obj.weight << ")";
        return os;
    }

}
