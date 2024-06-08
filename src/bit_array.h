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

#ifndef PACE2024EXACT_BIT_ARRAY_H
#define PACE2024EXACT_BIT_ARRAY_H

#include <iostream>
#include <vector>

#include "definitions.h"
#include "macros.h"
#include "misc.h"

namespace CrossGuard {

    class BitArray {
    private:
        AlignedVector<u32> m_vec;

    public:
        BitArray() = default;

        void resize(u32 n){
            u32 vec_size = n / 32 + (n % 32 != 0);
            m_vec.resize(vec_size);
            std::fill(m_vec.begin(), m_vec.end(), 0);
        }

        void set(u32 i) {
            u32 idx = i / 32;
            u32 offset = i % 32;
            m_vec[idx] |= (1 << offset);
        }

        void clear(u32 i) {
            u32 idx = i / 32;
            u32 offset = i % 32;
            m_vec[idx] &= ~(1 << offset);
        }

        bool get(u32 i) const {
            u32 idx = i / 32;
            u32 offset = i % 32;
            return (m_vec[idx] >> offset) & 1u;
        }

    };
}

#endif //PACE2024EXACT_BIT_ARRAY_H
