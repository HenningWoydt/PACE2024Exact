#ifndef PACE2024EXACT_PERFECT_PATTERN_H
#define PACE2024EXACT_PERFECT_PATTERN_H

#include <algorithm>

#include "definitions.h"
#include "macros.h"
#include "misc.h"

namespace CrossGuard {

    class PerfectPattern {
    private:
        u32 m_n = 0;
        AlignedVector<AlignedVector<u32>> m_matches;

    public:
        explicit PerfectPattern() = default;

        explicit PerfectPattern(u32 n) {
            m_n = n;
            m_matches.resize(n, AlignedVector<u32>(n, 0));
        }

        void add(u32 i, u32 j){
            m_matches[i][j] = 1;
        }

        bool matches(u32 i, u32 j){
            return m_matches[i][j] == 1;
        }

        void finalize(){
            for(u32 i = 0; i < m_n; ++i){
                std::sort(m_matches[i].begin(), m_matches[i].begin());
            }
        }
    };

}

#endif //PACE2024EXACT_PERFECT_PATTERN_H
