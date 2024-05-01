#ifndef PACE2024EXACT_PARTITIONER_H
#define PACE2024EXACT_PARTITIONER_H

#include "Graph.h"
#include "TranslationTable.h"

/**
 * Partitioner that partitions the graph into independent components. It will
 * not remove edges or modify the graph in any way.
 */
class Partitioner {
    const Graph m_graph;

public:
    std::vector<int> m_partition_id;
    int m_n_partitions;

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
        m_n_partitions = -1;
    }

    /**
     * Finds all components and creates sub-graphs with translation tables.
     */
    void find_components(){
        identify_components();
        create_components();
    }

    /**
     * Finds all independent components.
     */
    void identify_components() {
        m_partition_id.resize(m_graph.m_n_B, -1);

        std::vector<int> queue;
        int id = 0;

        for (int i = 0; i < m_graph.m_n_B; ++i) {
            if (m_partition_id[i] == -1) {
                queue.push_back(i);

                while (!queue.empty()) {
                    int vertex_b = queue.back();
                    queue.pop_back();

                    if (m_partition_id[vertex_b] == -1) {
                        for (size_t j = 0; j < m_graph.m_adj_list[vertex_b].size(); ++j) {
                            int vertex_a = m_graph.m_adj_list[vertex_b][j];

                            for (size_t k = 0; k < m_graph.m_adj_list_from_A[vertex_a].size(); ++k) {
                                int next_vertex_b = m_graph.m_adj_list_from_A[vertex_a][k];
                                queue.push_back(next_vertex_b);
                            }
                        }
                        m_partition_id[vertex_b] = id;
                    }
                }
                id += 1;
            }
        }
        m_n_partitions = id;

        // collect all vertices
        m_components_A.resize(m_n_partitions);
        m_components_B.resize(m_n_partitions);

        // collect all vertices for each component
        for(int i = 0; i < m_graph.m_n_B; ++i){
            int partition_id = m_partition_id[i];
            m_components_B[partition_id].push_back(i);

            for(size_t j = 0; j < m_graph.m_adj_list[i].size(); ++j){
                m_components_A[partition_id].push_back(m_graph.m_adj_list[i][j]);
            }
        }

        // make A vertices unique
        for(int i = 0; i < m_n_partitions; ++i) {
            std::sort(m_components_A[i].begin(), m_components_A[i].end());
            m_components_A[i].erase(std::unique(m_components_A[i].begin(), m_components_A[i].end()), m_components_A[i].end());
        }

        // merge components, where vertices of A overlap
        std::vector<int> to_merge;
        bool merged = true;
        while(merged){
            merged = false;

            for(int i = 0; i < (int) m_components_A.size(); ++i){
                for(int j = i+1; j < (int) m_components_A.size(); ++j){
                    int interval_1_min = m_components_A[i][0];
                }
            }
        }

    }

    /**
     * Creates all components.
     */
    void create_components() {
        // create graph and translation table
        for(int i = 0; i < m_n_partitions; ++i){
            // create translation table
            TranslationTable tt;
            for(int j = 0; j < (int) m_components_A[i].size(); ++j){
                tt.add_A(m_components_A[i][j], j);
            }
            for(int j = 0; j < (int) m_components_B[i].size(); ++j){
                tt.add_B(m_components_B[i][j], j);
            }

            // number of vertices of the new graph
            int n_A = (int) m_components_A[i].size();
            int n_B = (int) m_components_B[i].size();

            // create graph
            Graph g(n_A, n_B);
            for(size_t j = 0; j < m_components_B[i].size(); ++j){
                int vertex_b = m_components_B[i][j];
                for(size_t k = 0; k < m_graph.m_adj_list[vertex_b].size(); ++k){
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
     * Returns a graph, that if solved tells us the order of the partitions.
     *
     * @return The partition graph.
     */
    Graph get_partition_graph() {
        int n_A = m_graph.m_n_A;
        int n_B = (int) m_components_B.size();

        Graph g(n_A, n_B);
        for(int i = 0; i < (int) m_components_B.size(); ++i){
            for(size_t j = 0; j < m_components_A[i].size(); ++j){
                int vertex_a = m_components_A[i][j];
                int vertex_b = i;
                g.add_edge(vertex_a, vertex_b);
            }
        }
        return g;
    }

    /**
     * Reorders the graphs and translation tables.
     *
     * @param order The new order.
     */
    void reorder(std::vector<int> &order){
        std::vector<Graph> temp_graphs(m_n_partitions);
        std::vector<TranslationTable> temp_tables(m_n_partitions);

        for(int i = 0; i < m_n_partitions; ++i){
            temp_graphs[i] = m_sub_graphs[order[i]];
            temp_tables[i] = m_translation_tables[order[i]];
        }

        m_sub_graphs.swap(temp_graphs);
        m_translation_tables.swap(temp_tables);
    }


};

#endif //PACE2024EXACT_PARTITIONER_H
