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

#ifndef PACE2024EXACT_PERFECT_PATTERN_H
#define PACE2024EXACT_PERFECT_PATTERN_H

#include <algorithm>
#include <cstring>

#include "definitions.h"
#include "macros.h"
#include "misc.h"

namespace CrossGuard {

    class PerfectPattern {
    public:
        u32 m_n = 0;
        AlignedVector<u8> m_matches;

    public:
        explicit PerfectPattern(u32 n) {
            m_n = n;
            m_matches.resize(n * n, 0);
        }

        inline void add(u32 i, u32 j) {
            ASSERT((i * m_n) + j < m_n * m_n);
            ASSERT(i < m_n);
            ASSERT(j < m_n);
            m_matches[i * m_n + j] = 1;
        }

        inline bool matches(u32 i, u32 j) {
            ASSERT((i * m_n) + j < m_n * m_n);
            ASSERT(i < m_n);
            ASSERT(j < m_n);
            return m_matches[i * m_n + j];
        }
    };

}

#endif //PACE2024EXACT_PERFECT_PATTERN_H
