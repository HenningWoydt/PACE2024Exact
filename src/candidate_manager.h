#ifndef PACE2024EXACT_CANDIDATEMANAGER_H
#define PACE2024EXACT_CANDIDATEMANAGER_H

#include <vector>

#include "definitions.h"
#include "macros.h"
#include "misc.h"

namespace CrossGuard {

    /**
     * One candidate.
     */
    struct Candidate {
        u32 c; // the element
        u32 gain; // gain in the number of cuts
        u32 median; // median position of the element
    };

    /**
     * Class to manage the candidates.
     */
    class CandidateManager {
    private:
        u32 m_size;

        AlignedVector<Candidate> m_candidates;
        AlignedVector<Candidate> m_candidates_help;

        u32 m_max_gain = 0;
        u32 m_max_median = 0;
        AlignedVector<u32> m_counting;

    public:
        /**
         * Default constructor.
         *
         * @param n Number of elements.
         */
        explicit CandidateManager(u32 n) {
            m_size = 0;
            m_candidates.resize(n);
            m_candidates_help.resize(n);
        }

        /** vector like functions */
        inline Candidate operator[](u32 i) const {
            return m_candidates[i];
        }

        inline Candidate &operator[](u32 i) {
            return m_candidates[i];
        }

        inline void push_back(Candidate entry) {
            m_candidates[m_size] = entry;
            m_size += 1;
            m_max_gain = std::max(m_max_gain, entry.gain);
            m_max_median = std::max(m_max_median, entry.median);
        }

        inline u32 size() const {
            return m_size;
        }

        inline u32 get_end() const {
            return m_size;
        }

        inline void clear() {
            m_size = 0;
            m_max_gain = 0;
            m_max_median = 0;
        }

        /**
         * Sorts the CandidateManager ascending.
         */
        inline void sort() {
            // initialize counting
            m_counting.resize(m_max_median + 1);
            std::fill(m_counting.begin(), m_counting.end(), 0);

            // count
            for (u32 i = 0; i < m_size; ++i) {
                m_counting[m_candidates[i].median]++;
            }

            // prefix sum
            for (u32 i = 1; i <= m_max_median; ++i) {
                m_counting[i] += m_counting[i - 1];
            }

            // generate sorted output
            for (int i = (int) m_size - 1; i >= 0; i--) {
                m_candidates_help[m_counting[m_candidates[i].median] - 1] = m_candidates[i];
                m_counting[m_candidates[i].median]--;
            }

            // sorted elements
            m_candidates.swap(m_candidates_help);
        }

        inline void print() {
            for (u32 i = 0; i < m_size; ++i) {
                std::cout << "(" << m_candidates[i].c << ", " << m_candidates[i].gain << ", " << m_candidates[i].median << "), ";
            }
            std::cout << std::endl;
        }

    };

}

#endif //PACE2024EXACT_CANDIDATEMANAGER_H
