#ifndef PACE2024EXACT_CANDIDATEMANAGER_H
#define PACE2024EXACT_CANDIDATEMANAGER_H

#include <vector>
#include "misc.h"

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
class CandidateManager{
private:
    int m_s_idx;
    int m_e_idx;

    std::vector<Candidate> m_candidates;

public:
    /**
     * Default constructor.
     *
     * @param n Number of elements.
     */
    explicit CandidateManager(int n){
        m_s_idx = 0;
        m_e_idx = 0;
        m_candidates.resize(n);
    }

    /** vector like functions */
    [[nodiscard]] inline Candidate operator[](size_t i) const {return m_candidates[i];}
    [[nodiscard]] inline Candidate &operator[](size_t i) {return m_candidates[i];}
    [[nodiscard]] inline Candidate back() const { return m_candidates[m_e_idx - 1]; }
    [[nodiscard]] inline Candidate &back() { return m_candidates[m_e_idx - 1]; }
    [[nodiscard]] inline Candidate front() const { return m_candidates[m_s_idx]; }
    [[nodiscard]] inline Candidate &front() { return m_candidates[m_s_idx]; }
    inline void push_back(Candidate entry) { m_candidates[m_e_idx] = entry; m_e_idx += 1; }
    inline void pop_back() { m_e_idx -= 1; }
    inline void pop_front() { m_s_idx += 1; }
    [[nodiscard]] inline size_t size() const { return m_e_idx - m_s_idx; }
    [[nodiscard]] inline size_t get_start() const { return m_s_idx; }
    [[nodiscard]] inline size_t get_end() const { return m_e_idx; }
    inline void clear() { m_s_idx = 0; m_e_idx = 0; }

    void sort(){
        auto first = m_candidates.begin();
        std::advance(first, m_s_idx);

        auto last = m_candidates.begin();
        std::advance(last, m_e_idx);

        std::sort(first, last, [](const Candidate &a, const Candidate &b) {
            return a.gain < b.gain;
        });
    }

    void print(){
        for(int i = 0; i < m_e_idx; ++i){
            std::cout << "(" << m_candidates[i].c << " " << m_candidates[i].gain << "), ";
        }
        std::cout << std::endl;
    }

};

#endif //PACE2024EXACT_CANDIDATEMANAGER_H
