#ifndef PACE2024EXACT_TRANSLATIONTABLE_H
#define PACE2024EXACT_TRANSLATIONTABLE_H

#include <cstddef>
#include <map>

/**
 * When modifying the graph, we will rename vertices. This class stores the
 * translations, so they can be reverted.
 */
class TranslationTable {
    std::map<int, int> translation_A_new_to_old;
    std::map<int, int> translation_A_old_to_new;
    std::map<int, int> translation_B_new_to_old;
    std::map<int, int> translation_B_old_to_new;

public:
    explicit TranslationTable() = default;

    void add_A(int o, int n) {
        translation_A_new_to_old[n] = o;
        translation_A_old_to_new[o] = n;
    }

    void add_B(int o, int n) {
        translation_B_new_to_old[n] = o;
        translation_B_old_to_new[o] = n;
    }

    int get_A_old(int n) const {
        return translation_A_new_to_old.at(n);
    }

    int get_A_new(int o) const {
        return translation_A_old_to_new.at(o);
    }

    int get_B_old(int n) const {
        return translation_B_new_to_old.at(n);
    }

    int get_B_new(int o) const {
        return translation_B_old_to_new.at(o);
    }

};

#endif //PACE2024EXACT_TRANSLATIONTABLE_H
