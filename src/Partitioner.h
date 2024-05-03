#ifndef PACE2024EXACT_PARTITIONER_H
#define PACE2024EXACT_PARTITIONER_H

#include "Graph.h"
#include "TranslationTable.h"

/**
 * Partitioner that partitions the graph into independent components. It will
 * not remove edges or modify the graph in any way.
 */
class Partitioner {
    const Graph &m_graph;

public:
    std::vector<int> m_component_id;
    int m_n_components;

    std::vector<std::vector<int>> m_components_A;
    std::vector<std::vector<int>> m_components_B;

    std::vector<Graph> m_sub_graphs;
    std::vector<TranslationTable> m_translation_tables;

    /**
     * Default constructor.
     *
     * @param g The graph.
     */
    explicit Partitioner(const Graph &g) : m_graph(g) {
        m_n_components = -1;
    }

    /**
     * Finds all components and creates sub-graphs with translation tables.
     */
    void find_components() {
        identify_components();
        create_components();
    }

    /**
     * Returns all components of the graph.
     *
     * @return Vector with sub-graphs.
     */
    std::vector<Graph> get_components() const {
        return m_sub_graphs;
    }

    /**
     * Back propagates all solutions of the sub graphs.
     *
     * @param sols The solutions of the sub graphs.
     * @param order The order of the solutions.
     * @return The solution of the original graph.
     */
    std::vector<int> back_propagate(const std::vector<std::vector<int>> &sols, const std::vector<int> &order) {
        std::vector<int> new_sol;

        for (size_t i = 0; i < order.size(); ++i) {
            for (size_t j = 0; j < order.size(); ++j) {
                if ((int) i == order[j]) {

                    std::vector<int> back_sol = back_propagate(sols[j], m_translation_tables[j]);

                    for (int x: back_sol) {
                        new_sol.push_back(x);
                    }

                    break;
                }
            }
        }

        return new_sol;
    }

    /**
     * Returns a graph, that if solved tells us the order of the partitions.
     *
     * @return The partition graph.
     */
    Graph get_component_graph() {
        int n_A = m_graph.m_n_A;
        int n_B = (int) m_components_B.size();

        Graph g(n_A, n_B);
        for (int i = 0; i < (int) m_components_B.size(); ++i) {
            for (size_t j = 0; j < m_components_A[i].size(); ++j) {
                int vertex_a = m_components_A[i][j];
                int vertex_b = i;
                g.add_edge(vertex_a, vertex_b);
            }
        }
        return g;
    }

private:
    /**
     * Finds all independent components.
     */
    void identify_components() {
        m_component_id.resize(m_graph.m_n_B, -1);

        std::vector<int> queue;
        int id = 0;

        for (int i = 0; i < m_graph.m_n_B; ++i) {
            int vertex_a_min = m_graph.m_n_B;
            int vertex_a_max = 0;
            if (m_component_id[i] == -1) {
                queue.push_back(i);

                while (!queue.empty()) {
                    int vertex_b = queue.back();
                    queue.pop_back();

                    if (m_component_id[vertex_b] == -1) {
                        for (size_t j = 0; j < m_graph.m_adj_list[vertex_b].size(); ++j) {
                            int vertex_a = m_graph.m_adj_list[vertex_b][j];
                            vertex_a_max = std::max(vertex_a_max, vertex_a);
                            vertex_a_min = std::min(vertex_a_min, vertex_a);

                            // insert all B vertices that are connected via vertex A
                            for (size_t k = 0; k < m_graph.m_adj_list_from_A[vertex_a].size(); ++k) {
                                int next_vertex_b = m_graph.m_adj_list_from_A[vertex_a][k];
                                queue.push_back(next_vertex_b);
                            }

                            // insert all B vertices that are connected to a vertex a that is between [a_min, a_max].
                            for (vertex_a = vertex_a_min; vertex_a <= vertex_a_max; ++vertex_a) {
                                for (size_t k = 0; k < m_graph.m_adj_list_from_A[vertex_a].size(); ++k) {
                                    int next_vertex_b = m_graph.m_adj_list_from_A[vertex_a][k];
                                    queue.push_back(next_vertex_b);
                                }
                            }
                        }
                        m_component_id[vertex_b] = id;
                    }
                }
                id += 1;
            }
        }
        m_n_components = id;

        // collect all components
        m_components_A.resize(m_n_components);
        m_components_B.resize(m_n_components);

        for (int i = 0; i < m_graph.m_n_B; ++i) {
            int vertex_b = i;
            m_components_B[m_component_id[vertex_b]].push_back(vertex_b);
            for (size_t j = 0; j < m_graph.m_adj_list[vertex_b].size(); ++j) {
                int vertex_a = m_graph.m_adj_list[vertex_b][j];
                m_components_A[m_component_id[vertex_b]].push_back(vertex_a);
            }
        }

        // make A vertices unique
        for (int i = 0; i < m_n_components; ++i) {
            std::sort(m_components_A[i].begin(), m_components_A[i].end());
            m_components_A[i].erase(std::unique(m_components_A[i].begin(), m_components_A[i].end()), m_components_A[i].end());
        }
    }

    /**
     * Creates all components.
     */
    void create_components() {
        // create graph and translation table
        for (int i = 0; i < m_n_components; ++i) {
            // create translation table
            TranslationTable tt;
            for (int j = 0; j < (int) m_components_A[i].size(); ++j) {
                tt.add_A(m_components_A[i][j], j);
            }
            for (int j = 0; j < (int) m_components_B[i].size(); ++j) {
                tt.add_B(m_components_B[i][j], j);
            }

            // number of vertices of the new graph
            int n_A = (int) m_components_A[i].size();
            int n_B = (int) m_components_B[i].size();

            // create graph
            Graph g(n_A, n_B);
            for (size_t j = 0; j < m_components_B[i].size(); ++j) {
                int vertex_b = m_components_B[i][j];
                for (size_t k = 0; k < m_graph.m_adj_list[vertex_b].size(); ++k) {
                    int vertex_a = m_graph.m_adj_list[vertex_b][k];

                    int vertex_a_tt = tt.get_A_new(vertex_a);
                    int vertex_b_tt = tt.get_B_new(vertex_b);

                    g.add_edge(vertex_a_tt, vertex_b_tt);
                }
            }
            g.sort_neighborhoods();

            m_sub_graphs.push_back(g);
            m_translation_tables.push_back(tt);
        }
    }

    /**
     * Back propagates one solution with a Translation Table.
     *
     * @param sol The solution.
     * @param tt The Translation Table.
     * @return The solution of the original graph.
     */
    static std::vector<int> back_propagate(const std::vector<int> &sol, const TranslationTable &tt) {
        std::vector<int> new_sol;

        // put the partial solution into the complete solution
        for (int j: sol) {
            int vertex_tt = tt.get_B_old(j);
            new_sol.push_back(vertex_tt);
        }

        return new_sol;
    }
};

#endif //PACE2024EXACT_PARTITIONER_H
