#ifndef PACE2024EXACT_REDUCER_H
#define PACE2024EXACT_REDUCER_H

#include <numeric>
#include <ranges>
#include "Graph.h"
#include "AlignedVector.h"
#include "TranslationTable.h"

#define FIND(vec, x) (std::find(vec.begin(), vec.end(), x) != vec.end())

struct Retraction {
    int left;
    int right;
    int keep;
};

/**
 * Uses reduction rules to decrease the size of an instance.
 */
class Reducer {
private:
    const Graph &m_graph;

    // Variables for Twins
    AlignedVector<AlignedVector<int>> m_twins;
    TranslationTable m_tt_twins;

    // Variables for Twins+
    AlignedVector<AlignedVector<int>> m_twins_plus;
    AlignedVector<Retraction> m_retraction_order;
    TranslationTable m_tt_twins_plus;

public:
    /**
     * Default constructor.
     *
     * @param g The graph.
     */
    explicit Reducer(const Graph &g) : m_graph(g) {

    }

    /**
     * Reduces the graph and returns a new graph.
     *
     * @return The newly reduced graph.
     */
    Graph reduce() {
        find_twins(m_graph);
        Graph twin_free_g = reduce_twins(m_graph);

        find_twins_plus(twin_free_g);
        Graph twin_plus_free_graph = reduce_twins_plus(twin_free_g);

        return twin_plus_free_graph;
    }

    /**
     * The function will transform the solution of the reduced graph to the
     * unreduced graph.
     *
     * @param sol The solution of the reduced graph.
     * @return The solution to the original graph.
     */
    std::vector<int> back_propagate(const std::vector<int> &sol) {
        std::vector<int> sol_twins_plus = back_propagate_twins_plus(sol);
        std::vector<int> sol_twins = back_propagate_twins(sol_twins_plus);
        return sol_twins;
    }

private:
    /**
     * Looks for sets of movable vertices that all have the same neighborhood.
     * Note that we name them twins, but in reality they can be of any size.
     * These twins can be placed one after the other and we only need to hold
     * one representative.
     */
    void find_twins(const Graph &g) {
        for (int i = 0; i < g.m_n_B; ++i) {
            for (int j = i + 1; j < g.m_n_B; ++j) {
                if (g.m_adj_list[i] == g.m_adj_list[j]) {
                    // found a twin

                    // check if at least one of the twins already exists in another set
                    for (auto &twins: m_twins) {
                        if (FIND(twins, i) || FIND(twins, j)) {
                            // found a twin, insert the items
                            twins.push_back(i);
                            twins.push_back(j);
                            break;
                        }
                    }

                    // did not find, create new twin
                    m_twins.push_back({i, j});
                }
            }
        }

        // sort and make unique
        for (auto &twins: m_twins) {
            std::sort(twins.begin(), twins.end());
            twins.erase(std::unique(twins.begin(), twins.end()), twins.end());
        }
    }

    /**
     * Removes all twins from the graph and creates the resulting graph.
     *
     * @param g The graph to be freed.
     * @return The graph free of twins.
     */
    Graph reduce_twins(const Graph &g) {
        int n_A = g.m_n_A;
        int n_B = g.m_n_B;

        // adjust the new number of vertices in B
        for (const auto &m_twin: m_twins) {
            n_B += (-((int) m_twin.size()) + 1);
        }

        Graph new_g(n_A, n_B);

        int new_vertex_b = 0;
        for (int vertex_b = 0; vertex_b < g.m_n_B; ++vertex_b) {
            // process each vertex of B

            // check if vertex belongs to a twin, and if it is the smallest vertex
            bool vertex_found = false;
            bool vertex_smallest = false;
            for (auto &twins: m_twins) {
                if (FIND(twins, vertex_b)) {
                    vertex_found = true;
                    if (vertex_b == *std::min(twins.begin(), twins.end())) {
                        vertex_smallest = true;
                    }
                    break;
                }
            }

            if ((vertex_found && vertex_smallest) || !vertex_found) {
                // process this vertex
                m_tt_twins.add_B(vertex_b, new_vertex_b);

                for (int vertex_a: g.m_adj_list[vertex_b]) {
                    new_g.add_edge(vertex_a, new_vertex_b);
                }
                new_vertex_b += 1;
            }
        }

        return new_g;
    }

    /**
     * Back propagates the solution for the twin reduction.
     *
     * @param sol The solution of the twin reduced graph.
     * @return The solution before the twin reduced graph.
     */
    std::vector<int> back_propagate_twins(const std::vector<int> &sol) {
        std::vector<int> new_sol;

        for (int vertex: sol) {
            int old_vertex = m_tt_twins.get_B_old(vertex);

            new_sol.push_back(old_vertex);

            // check if vertex belongs to a twin, and if it is the smallest vertex
            for (auto &twins: m_twins) {
                if (FIND(twins, old_vertex)) {
                    // insert the whole twin
                    for (size_t i = 1; i < twins.size(); ++i) {
                        new_sol.push_back(twins[i]);
                    }
                    break;
                }
            }
        }

        return new_sol;
    }

    /**
     * If the neighborhood of vertex b is completely contained in the
     * neighborhood of vertex a and vertex a has additional neighbors that all
     * reside to the left/right of b's neighborhood, than it is always optimal
     * to put vertex b directly right/left of a.
     * We will call such a vertex pair twins+.
     *
     * @param g The graph.
     */
    void find_twins_plus(const Graph &g) {
        AlignedVector<int> retraction_pairs;
        for (int i = 0; i < g.m_n_B; ++i) {
            for (int j = i + 1; j < g.m_n_B; ++j) {
                if (is_contained(g.m_adj_list[i], g.m_adj_list[j])) {
                    // i is contained in j
                    if (exceeds_left(g.m_adj_list[i], g.m_adj_list[j])) {
                        // i is contained in j, and j exceeds only left
                        retraction_pairs.push_back(j);
                        retraction_pairs.push_back(i);
                    } else if (exceeds_right(g.m_adj_list[i], g.m_adj_list[j])) {
                        // i is contained in j, and j exceeds only right
                        retraction_pairs.push_back(i);
                        retraction_pairs.push_back(j);
                    } else {
                        // i is contained in j, but no reduction possible
                    }

                } else if (is_contained(g.m_adj_list[j], g.m_adj_list[i])) {
                    // j is contained in i
                    if (exceeds_left(g.m_adj_list[j], g.m_adj_list[i])) {
                        // j is contained in i, and i exceeds only left
                        retraction_pairs.push_back(i);
                        retraction_pairs.push_back(j);
                    } else if (exceeds_right(g.m_adj_list[j], g.m_adj_list[i])) {
                        // j is contained in i, and j exceeds only right
                        retraction_pairs.push_back(j);
                        retraction_pairs.push_back(i);
                    } else {
                        // j is contained in i, but no reduction possible
                    }
                } else {
                    // not contained so skip
                }
            }
        }

        // all retraction pairs determined
        // no we have to determine the retraction order, so a maximum number of
        // retractions are possible

        // first generate retraction groups, which influence one another.
        AlignedVector<AlignedVector<int>> retraction_groups;
        for (size_t i = 0; i < retraction_pairs.size(); i += 2) {
            int left = retraction_pairs[i];
            int right = retraction_pairs[i + 1];

            bool found = false;
            for (auto &group: retraction_groups) {
                if (FIND(group, left) || FIND(group, right)) {
                    group.push_back(left);
                    group.push_back(right);
                    found = true;
                    break;
                }
            }

            if (!found) {
                retraction_groups.push_back({left, right});
            }
        }

        // process each retraction group
        for (auto &group: retraction_groups) {
            if (group.size() == 2) {
                // most easy case, discard the vertex with the smaller
                // neighborhood and save where to store him
                int left = group[0];
                int right = group[1];
                if (g.m_adj_list[left].size() > g.m_adj_list[right].size()) {
                    m_retraction_order.push_back({left, right, left});
                } else {
                    m_retraction_order.push_back({left, right, right});
                }
            } else {
                // resolve all contractions in the group
                while (!group.empty()) {
                    // start from the bottom, with the vertex with the smallest
                    // neighborhood
                    size_t min_size = std::numeric_limits<size_t>::max();
                    int min_vertex = -1;
                    for (auto x: group) {
                        if (g.m_adj_list[x].size() < min_size) {
                            min_size = g.m_adj_list[x].size();
                            min_vertex = x;
                        }
                    }

                    // search for a contraction pair that uses min_vertex
                    for (size_t i = 0; i < group.size(); i += 2) {
                        int left = group[i];
                        int right = group[i + 1];
                        if (left == min_vertex) {
                            m_retraction_order.push_back({left, right, right});
                            break;
                        } else if (right == min_vertex) {
                            m_retraction_order.push_back({left, right, left});
                            break;
                        }
                    }

                    // remove all pairs that use min_vertex
                    for (size_t i = 0; i < group.size(); i += 2) {
                        int left = group[i];
                        int right = group[i + 1];
                        if (left == min_vertex || right == min_vertex) {
                            std::swap(group[i], group[group.size() - 2]);
                            std::swap(group[i + 1], group[group.size() - 1]);
                            group.pop_back();
                            group.pop_back();
                            i -= 2;
                        }
                    }
                }
            }
        }
    }

    /**
     * Removes all twins plus from the graph.
     *
     * @param g The graph to be reduced.
     * @return The reduced graph.
     */
    Graph reduce_twins_plus(const Graph &g) {
        AlignedVector<int> vertices(g.m_n_B);
        std::iota(vertices.begin(), vertices.end(), 0);

        // remove all vertices, that will be retracted
        for (size_t i = 0; i < vertices.size(); ++i) {
            int vertex_b = vertices[i];
            for (auto &ret: m_retraction_order) {
                if ((ret.left == vertex_b && vertex_b != ret.keep) || (ret.right == vertex_b && vertex_b != ret.keep)) {
                    // remove vertex b
                    std::swap(vertices[i], vertices.back());
                    vertices.pop_back();
                    i -= 1;
                    break;
                }
            }
        }

        int n_A = g.m_n_A;
        int n_B = (int) vertices.size();

        Graph new_g(n_A, n_B);

        int new_vertex_b = 0;
        for (auto vertex_b: vertices) {
            m_tt_twins_plus.add_B(vertex_b, new_vertex_b);

            for (auto vertex_a: g.m_adj_list[vertex_b]) {
                new_g.add_edge(vertex_a, new_vertex_b);
            }

            new_vertex_b += 1;
        }

        return new_g;
    }

    /**
     * Back propagates the solution for the twin reduction.
     *
     * @param sol The solution of the twin reduced graph.
     * @return The solution before the twin reduced graph.
     */
    std::vector<int> back_propagate_twins_plus(const std::vector<int> &sol) {
        std::vector<int> new_sol;

        // translate
        for (int vertex: sol) {
            int old_vertex = m_tt_twins_plus.get_B_old(vertex);
            new_sol.push_back(old_vertex);
        }

        // reinsert retractions
        for (auto &ret: std::ranges::reverse_view(m_retraction_order)) {
            // search the keep element
            for (size_t i = 0; i < new_sol.size(); ++i) {
                int x = new_sol[i];
                if (ret.keep == x) {
                    // insert the retracted element
                    if (ret.left == x) {
                        // we have to insert the retracted element to the right
                        if (i == new_sol.size() - 1) {
                            // push at the end
                            new_sol.push_back(ret.right);
                        } else {
                            // insert at index
                            new_sol.insert(new_sol.begin() + (i + 1), ret.right);
                        }
                    } else {
                        // we have to insert the retracted element to the left
                        if (i == 0) {
                            new_sol.insert(new_sol.begin(), ret.left);
                        } else {
                            new_sol.insert(new_sol.begin() + i, ret.left);
                        }
                    }
                    break;
                }
            }
        }

        return new_sol;
    }

    /**
     * Determines if a vector is contained in another vector.
     *
     * @param small The "smaller" vector.
     * @param large The "larger" vector.
     * @return True if the smaller vector is contained in the larger vector, false else.
     */
    static bool is_contained(const AlignedVector<int> &small, const AlignedVector<int> &large) {
        return std::all_of(small.begin(), small.end(), [&large](int x) { return FIND(large, x); });
    }

    /**
     * Determines if the excess elements in large are all smaller than the
     * smallest element in small.
     *
     * @param small The small vector.
     * @param large The large vector.
     * @return True if the large vector exceeds to the left, false otherwise.
     */
    static bool exceeds_left(const AlignedVector<int> &small, const AlignedVector<int> &large) {
        int min_small = *std::min(small.begin(), small.end());

        return std::all_of(large.begin(), large.end(), [&small, min_small](int x) { return (x < min_small) || (FIND(small, x)); });
    }

    /**
     * Determines if the excess elements in large are all greater than the
     * largest element in small.
     *
     * @param small The small vector.
     * @param large The large vector.
     * @return True if the large vector exceeds to the right, false otherwise.
     */
    static bool exceeds_right(const AlignedVector<int> &small, const AlignedVector<int> &large) {
        int max_small = *std::max(small.begin(), small.end());

        return std::all_of(large.begin(), large.end(), [&small, max_small](int x) { return (x > max_small) || (FIND(small, x)); });
    }


};

#endif //PACE2024EXACT_REDUCER_H
