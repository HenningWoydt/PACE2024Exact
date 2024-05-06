#ifndef PACE2024EXACT_CANDIDATEMANAGER_H
#define PACE2024EXACT_CANDIDATEMANAGER_H

#include <vector>

#include "misc.h"
#include "AlignedVector.h"

namespace CrossGuard {

/**
 * One candidate.
 */
    struct Candidate {
        int c; // the element
        int gain; // gain in the number of cuts
    };

/**
 * Class to manage the candidates.
 */
    class CandidateManager {
    private:
        int m_size;

        AlignedVector<Candidate> m_candidates;
        AlignedVector<Candidate> m_candidates_help;

        int m_max_gain = 0;
        AlignedVector<int> m_counting;

    public:
        /**
         * Default constructor.
         *
         * @param n Number of elements.
         */
        explicit CandidateManager(int n) {
            m_size = 0;
            m_candidates.resize(n);
            m_candidates_help.resize(n);
        }

        /** vector like functions */
        inline Candidate operator[](size_t i) const {
            return m_candidates[i];
        }

        inline Candidate &operator[](size_t i) {
            return m_candidates[i];
        }

        inline void push_back(Candidate entry) {
            m_candidates[m_size] = entry;
            m_size += 1;
            m_max_gain = std::max(m_max_gain, entry.gain);
        }

        inline size_t size() const {
            return m_size;
        }

        inline size_t get_end() const {
            return m_size;
        }

        inline void clear() {
            m_size = 0;
            m_max_gain = 0;
        }

        /**
         * Sorts the CandidateManager ascending.
         */
        inline void sort() {
            /*
            auto first = m_candidates.begin();
            auto last = m_candidates.begin();
            std::advance(last, m_size);

            std::sort(first, last, [](const Candidate &a, const Candidate &b) {
                return a.gain < b.gain;
            });
             */

            // initialize counting
            m_counting.resize(m_max_gain + 1);
            std::fill(m_counting.begin(), m_counting.end(), 0);

            // count
            for (int i = 0; i < m_size; ++i) {
                m_counting[m_candidates[i].gain]++;
            }

            // prefix sum
            for (int i = 1; i <= m_max_gain; ++i) {
                m_counting[i] += m_counting[i - 1];
            }

            // generate sorted output
            for (int i = m_size - 1; i >= 0; i--) {
                m_candidates_help[m_counting[m_candidates[i].gain] - 1] = m_candidates[i];
                m_counting[m_candidates[i].gain]--;
            }

            // sorted elements
            m_candidates.swap(m_candidates_help);
        }

        inline void print() {
            for (int i = 0; i < m_size; ++i) {
                std::cout << "(" << m_candidates[i].c << " " << m_candidates[i].gain << "), ";
            }
            std::cout << std::endl;
        }

    };

}

#endif //PACE2024EXACT_CANDIDATEMANAGER_H
