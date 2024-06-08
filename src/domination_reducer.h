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

#ifndef PACE2024EXACT_DOMINATION_REDUCER_H
#define PACE2024EXACT_DOMINATION_REDUCER_H

#include <numeric>
#include <ranges>
#include <utility>

#include "definitions.h"
#include "macros.h"
#include "misc.h"
#include "graph.h"
#include "translation_table.h"
#include "exhaustive_solver.h"

namespace CrossGuard {

    class DominationReducer{
    private:
        const Graph &m_graph;

        // Variables for Twins
        AlignedVector<AlignedVector<u32>> m_domination;
        TranslationTable m_tt_twins;

    public:
        /**
         * Default constructor.
         *
         * @param g The graph.
         */
        explicit DominationReducer(const Graph &g) : m_graph(g) {}

        /**
         * Reduces the graph and returns a new graph.
         *
         * @return The newly reduced graph.
         */
        inline Graph reduce() {
            Graph g = m_graph;

            find_domination(g);
            g = reduce_domination(g);

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
            AlignedVector<u32> new_sol = sol;

            new_sol = back_propagate_domination(new_sol);

            return new_sol;
        }

    private:
        /**
         * Looks for sets of movable vertices that all have the same neighborhood.
         * Note that we name them twins, but in reality they can be of any size.
         * These twins can be placed one after the other and we only need to hold
         * one representative.
         */
        inline void find_domination(const Graph &g) {
            ASSERT(g.is_finalized);

            for(u32 b1 = 0; b1 < m_graph.n_B; ++b1){
                for(u32 b2 = b1 + 1; b2 < m_graph.n_B; ++b2){
                    bool is_dominating;
                    if(m_graph.adj_list[b1].size() < m_graph.adj_list[b2].size()){
                        // b1 is smaller than b2
                        is_dominating = is_contained(m_graph.adj_list[b1], m_graph.adj_list[b2]);
                    } else if (m_graph.adj_list[b1].size() > m_graph.adj_list[b2].size()) {
                        // b2 is smaller than b1
                        is_dominating = is_contained(m_graph.adj_list[b2], m_graph.adj_list[b1]);
                    } else{
                        is_dominating = false;
                    }

                    if(is_dominating){
                        // look for already existing domination
                        bool found = false;
                        for(auto &dom : m_domination){
                            if(exists(dom, b1) || exists(dom, b2)){
                                dom.push_back(b1);
                                dom.push_back(b2);
                                found = true;
                                break;
                            }
                        }

                        if(!found){
                            m_domination.push_back({b1, b2});
                        }
                    }
                }
            }

            // sort and make all doms unique
            for (auto &doms: m_domination) {
                std::sort(doms.begin(), doms.end());
                doms.erase(std::unique(doms.begin(), doms.end()), doms.end());
            }

            for (auto &doms: m_domination) {
                ASSERT(std::is_sorted(doms.begin(), doms.end()));
                ASSERT(no_duplicates(doms));
                ASSERT(doms.size() >= 2);
            }
            ASSERT(no_duplicates(m_domination));

            // for every dom get the correct order of elements
            for(auto & dom : m_domination){
                Graph temp_g(m_graph.n_A, dom.size());
                TranslationTable tt;

                u32 temp_b = 0;
                for(u32 b : dom){
                    tt.add_B(b, temp_b);
                    for(Edge e : m_graph.adj_list[b]){
                        temp_g.add_edge(e.vertex, temp_b, e.weight);
                    }
                    temp_b++;
                }
                temp_g.finalize();

                ExhaustiveSolver s(temp_g);
                s.solve();
                AlignedVector<u32> temp_sol = s.get_solution();

                for(u64 j = 0; j < temp_sol.size(); ++j){
                    dom[j] = tt.get_B_old(temp_sol[j]);
                }
            }
        }

        /**
         * Removes all twins from the graph and creates the resulting graph.
         *
         * @param g The graph to be freed.
         * @return The graph free of twins.
         */
        inline Graph reduce_domination(const Graph &g) {
            u32 n_A = g.n_A;
            u32 n_B = g.n_B;

            // adjust the new number of vertices in B
            for (const auto &dom: m_domination) {
                n_B = (n_B + 1) - (u32) dom.size();
            }

            Graph new_g(n_A, n_B);

            u32 new_b = 0;
            for (u32 b = 0; b < g.n_B; ++b) {
                // process each vertex of B

                // check if vertex belongs to a twin, and if it is the smallest vertex
                bool vertex_found = false;
                bool dom_identifier = false;
                u64 dom_idx = 0;
                for (u64 i = 0; i < m_domination.size(); ++i) {
                    auto &dom = m_domination[i];

                    ASSERT(no_duplicates(dom));
                    ASSERT(dom.size() >= 2);

                    if (exists(dom, b)) {
                        vertex_found = true;
                        u64 max_size = 0;
                        u32 min_b = std::numeric_limits<u32>::max();
                        for(u32 x : dom) {max_size = std::max(max_size, m_graph.adj_list[x].size());}
                        for(u32 x : dom) {
                            if(m_graph.adj_list[x].size() == max_size){
                                min_b = std::min(min_b, x);
                            }
                        }

                        dom_identifier = (b == min_b);
                        dom_idx = i;
                    }
                }

                if (vertex_found && dom_identifier) {
                    // process this vertex
                    m_tt_twins.add_B(b, new_b);

                    for (Edge e: g.adj_list[b]) {
                        // determine how many other vertices of dom are connected to e.vertex
                        u32 sum_weight = 0;
                        for(u64 j = 1; j < m_domination[dom_idx].size(); ++j){
                            u32 temp_b = m_domination[dom_idx][j];
                            for(Edge temp_e : g.adj_list[temp_b]){
                                sum_weight += (e.vertex == temp_e.vertex) * e.weight * temp_e.weight;
                            }
                        }

                        new_g.add_edge(e.vertex, new_b, e.weight + sum_weight);
                    }

                    new_b += 1;
                } else if(!vertex_found){
                    // process this vertex
                    m_tt_twins.add_B(b, new_b);

                    for (Edge e: g.adj_list[b]) {
                        new_g.add_edge(e.vertex, new_b, e.weight);
                    }

                    new_b += 1;
                }
            }

            new_g.finalize();
            return new_g;
        }

        /**
         * Back propagates the solution for the twin reduction.
         *
         * @param sol The solution of the twin reduced graph.
         * @return The solution before the twin reduced graph.
         */
        inline AlignedVector<u32> back_propagate_domination(const AlignedVector<u32> &sol) {
            AlignedVector<u32> new_sol;

            for (u32 vertex: sol) {
                u32 old_vertex = m_tt_twins.get_B_old(vertex);

                // check if vertex belongs to a domination, and if it is the smallest vertex
                bool is_dom = false;
                for (auto &dom: m_domination) {

                    ASSERT(no_duplicates(dom));
                    ASSERT(dom.size() >= 2);

                    if (exists(dom, old_vertex)) {
                        // insert the whole twin
                        is_dom = true;
                        for (u32 x: dom) { new_sol.push_back(x); }
                    }
                }

                if (!is_dom) {
                    new_sol.push_back(old_vertex);
                }
            }

            return new_sol;
        }
    };

}

#endif //PACE2024EXACT_DOMINATION_REDUCER_H
