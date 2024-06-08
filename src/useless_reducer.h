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

#ifndef PACE2024EXACT_USELESS_REDUCER_H
#define PACE2024EXACT_USELESS_REDUCER_H

#include <numeric>
#include <ranges>
#include <utility>

#include "definitions.h"
#include "macros.h"
#include "misc.h"
#include "graph.h"
#include "translation_table.h"

namespace CrossGuard {

    /**
     * Removes vertices from A and B, that are not connected.
     */
    class UselessReducer {
    private:
        const Graph &m_graph;

        u32 m_A_n_useless = 0;
        u32 m_B_n_useless = 0;
        AlignedVector<u32> m_B_useless;

        TranslationTable m_tt;

    public:
        /**
         * Default constructor.
         *
         * @param g The graph.
         */
        explicit UselessReducer(const Graph &g) : m_graph(g) {}

        /**
         * Reduces the graph and returns a new graph.
         *
         * @return The newly reduced graph.
         */
        inline Graph reduce() {
            Graph g = m_graph;

            find_useless_vertices();
            g = reduce_useless_vertices();

            return g;
        }

        /**
         * The function will transform the solution of the reduced graph to the
         * unreduced graph.
         *
         * @param sol The solution of the reduced graph.
         * @return The solution to the original graph.
         */
        inline AlignedVector<u32> back_propagate(const AlignedVector<u32> &sol) {
            AlignedVector<u32> new_sol;
            new_sol.reserve(m_graph.n_B);

            for(u32 i : sol){
                new_sol.push_back(m_tt.get_B_old(i));
            }

            for(u32 i : m_B_useless){
                new_sol.push_back(i);
            }

            return new_sol;
        }

    private:

        void find_useless_vertices(){
            // search useless vertices in A
            u32 new_i = 0;
            for (u32 i = 0; i < m_graph.n_A; ++i){
                if(m_graph.adj_list_from_A[i].empty()){
                    m_A_n_useless += 1;
                } else {
                    m_tt.add_A(i, new_i);
                    new_i += 1;
                }
            }

            // search useless vertices in B
            new_i = 0;
            for (u32 i = 0; i < m_graph.n_B; ++i){
                if(m_graph.adj_list[i].empty() && m_B_n_useless < m_graph.n_B - 1){
                    m_B_n_useless += 1;
                    m_B_useless.push_back(i);
                } else {
                    m_tt.add_B(i, new_i);
                    new_i += 1;
                }
            }
        }

        Graph reduce_useless_vertices(){
            u32 n_A = m_graph.n_A - m_A_n_useless;
            u32 n_B = m_graph.n_B - m_B_n_useless;
            Graph new_g(n_A, n_B);

            for (u32 i = 0; i < m_graph.n_B; ++i){
                if(!m_graph.adj_list[i].empty()){
                    for(Edge vertex_a : m_graph.adj_list[i]){
                        u32 new_b = m_tt.get_B_new(i);
                        u32 new_a = m_tt.get_A_new(vertex_a.vertex);
                        u32 weight = vertex_a.weight;
                        new_g.add_edge(new_a, new_b, weight);
                    }
                }
            }

            new_g.finalize();
            return new_g;
        }

    };

}

#endif //PACE2024EXACT_USELESS_REDUCER_H
