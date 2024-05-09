#ifndef PACE2024EXACT_PARTITIONER_H
#define PACE2024EXACT_PARTITIONER_H

#include "definitions.h"
#include "macros.h"
#include "misc.h"
#include "graph.h"
#include "translation_table.h"

namespace CrossGuard {

/**
 * Partitioner that partitions the graph into independent components. It will
 * not remove edges or modify the graph in any way.
 */
    class Partitioner {
        const Graph &m_graph;

    public:
        std::vector<int> m_component_id;
        int m_n_components;

        std::vector<std::vector<u32>> m_components_A;
        std::vector<std::vector<u32>> m_components_B;

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
        std::vector<u32> back_propagate(const std::vector<std::vector<u32>> &sols, const std::vector<u32> &order) {
            std::vector<u32> new_sol;

            for (u32 id: order) {
                std::vector<u32> back_sol = back_propagate(sols[id], m_translation_tables[id]);

                for (u32 x: back_sol) {
                    new_sol.push_back(x);
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
            u32 n_A = m_graph.n_A;
            u32 n_B = (u32) m_components_B.size();

            Graph g(n_A, n_B);
            for (u32 i = 0; i < (u32) m_components_B.size(); ++i) {
                for (size_t j = 0; j < m_components_A[i].size(); ++j) {
                    u32 vertex_a = m_components_A[i][j];
                    u32 vertex_b = i;
                    g.add_edge(vertex_a, vertex_b, 1);
                }
            }

            g.finalize();
            return g;
        }

    private:
        /**
         * Finds all independent components.
         */
        void identify_components() {
            m_component_id.resize(m_graph.n_B, -1);

            std::vector<u32> queue;
            int id = 0;

            for(u32 i = 0; i < m_graph.n_B; ++i){
                if(m_component_id[i] == -1){
                    queue.push_back(i);

                    // store the min and max of this partition
                    u32 vertex_a_min = m_graph.n_A;
                    u32 vertex_a_max = 0;

                    // process all elements in the queue
                    while(!queue.empty()){
                        u32 vertex_b = queue.back();
                        queue.pop_back();

                        if (m_component_id[vertex_b] != id){
                            // we have to process vertex_b

                            // look for all other B vertices that are connected via A
                            for(Edge a : m_graph.adj_list[vertex_b]){
                                vertex_a_min = std::min(vertex_a_min, a.vertex);
                                vertex_a_max = std::max(vertex_a_max, a.vertex);

                                for(Edge b : m_graph.adj_list_from_A[a.vertex]){
                                    queue.push_back(b.vertex);
                                }
                            }

                            // look for all other B that are connected to a vertex in A of [vertex_a_min, vertex_a_max]
                            for(u32 idx = vertex_a_min; idx <= vertex_a_max; ++idx){
                                for(Edge b : m_graph.adj_list_from_A[idx]){
                                    queue.push_back(b.vertex);
                                }
                            }

                            // vertex_b was processed
                            m_component_id[vertex_b] = id;
                        }
                    }

                    // work on the next component
                    id += 1;
                }
            }

            /*
            for (u32 i = 0; i < m_graph.n_B; ++i) {
                if (m_component_id[i] == -1) {
                    queue.push_back(i);

                    u32 vertex_a_min = m_graph.n_A;
                    u32 vertex_a_max = 0;

                    while (!queue.empty()) {
                        u32 vertex_b = queue.back();
                        queue.pop_back();

                        if (m_component_id[vertex_b] == -1) {
                            for (u32 j = 0; j < (u32) m_graph.adj_list[vertex_b].size(); ++j) {
                                Edge vertex_a = m_graph.adj_list[vertex_b][j];
                                vertex_a_max = std::max(vertex_a_max, vertex_a.vertex);
                                vertex_a_min = std::min(vertex_a_min, vertex_a.vertex);

                                // insert all B vertices that are connected via vertex A
                                for (u32 k = 0; k < (u32) m_graph.adj_list_from_A[vertex_a.vertex].size(); ++k) {
                                    Edge next_vertex_b = m_graph.adj_list_from_A[vertex_a.vertex][k];
                                    if (m_component_id[next_vertex_b.vertex] == -1) {
                                        queue.push_back(next_vertex_b.vertex);
                                    }
                                }
                            }
                            for (u32 vertex_a = vertex_a_min; vertex_a <= vertex_a_max; ++vertex_a) {
                                for (u32 k = 0; k < (u32) m_graph.adj_list_from_A[vertex_a].size(); ++k) {
                                    Edge next_vertex_b = m_graph.adj_list_from_A[vertex_a][k];
                                    if (m_component_id[next_vertex_b.vertex] == -1) {
                                        queue.push_back(next_vertex_b.vertex);
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
             */

            ASSERT(!exists(m_component_id, -1));

            // reindex the ids, because they might not be in order
            // collect ids
            std::vector<int> ids;
            for(auto &x : m_component_id){
                if(!exists(ids, x)){
                    ids.push_back(x);
                }
            }

            // reindex
            for(int i = 0; i < (int) ids.size(); ++i){
                for(size_t j = 0; j < m_component_id.size(); ++j){
                    if(m_component_id[j] == ids[i]){
                        m_component_id[j] = i;
                    }
                }
            }
            m_n_components = max(m_component_id) + 1;

            // print(m_component_id);
            // std::cout << m_n_components << std::endl;

            // collect all components
            m_components_A.resize(m_n_components);
            m_components_B.resize(m_n_components);

            for (u32 vertex_b = 0; vertex_b < m_graph.n_B; ++vertex_b) {
                m_components_B[m_component_id[vertex_b]].push_back(vertex_b);
                for (u32 j = 0; j < (u32) m_graph.adj_list[vertex_b].size(); ++j) {
                    Edge vertex_a = m_graph.adj_list[vertex_b][j];
                    m_components_A[m_component_id[vertex_b]].push_back(vertex_a.vertex);
                }
            }

            // make A vertices unique
            for (u32 i = 0; i < (u32) m_n_components; ++i) {
                std::sort(m_components_A[i].begin(), m_components_A[i].end());
                m_components_A[i].erase(std::unique(m_components_A[i].begin(), m_components_A[i].end()), m_components_A[i].end());
            }
        }

        /**
         * Creates all components.
         */
        void create_components() {
            // create graph and translation table
            for (u32 i = 0; i < (u32) m_n_components; ++i) {
                // create translation table
                TranslationTable tt;
                for (u32 j = 0; j < (u32) m_components_A[i].size(); ++j) {
                    tt.add_A(m_components_A[i][j], j);
                }
                for (u32 j = 0; j < (u32) m_components_B[i].size(); ++j) {
                    tt.add_B(m_components_B[i][j], j);
                }

                // number of vertices of the new graph
                u32 n_A = (u32) m_components_A[i].size();
                u32 n_B = (u32) m_components_B[i].size();

                // create graph
                Graph g(n_A, n_B);
                for (u32 j = 0; j < (u32) m_components_B[i].size(); ++j) {
                    u32 vertex_b = m_components_B[i][j];
                    for (u32 k = 0; k < m_graph.adj_list[vertex_b].size(); ++k) {
                        Edge vertex_a = m_graph.adj_list[vertex_b][k];

                        u32 vertex_a_tt = tt.get_A_new(vertex_a.vertex);
                        u32 vertex_b_tt = tt.get_B_new(vertex_b);

                        g.add_edge(vertex_a_tt, vertex_b_tt, vertex_a.weight);
                    }
                }
                g.finalize();

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
        static std::vector<u32> back_propagate(const std::vector<u32> &sol, const TranslationTable &tt) {
            std::vector<u32> new_sol;

            // put the partial solution into the complete solution
            for (u32 j: sol) {
                u32 vertex_tt = tt.get_B_old(j);
                new_sol.push_back(vertex_tt);
            }

            return new_sol;
        }
    };

}

#endif //PACE2024EXACT_PARTITIONER_H
