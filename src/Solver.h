#ifndef PACE2024EXACT_SOLVER_H
#define PACE2024EXACT_SOLVER_H

#include "Graph.h"
#include "Partitioner.h"
#include "ExhaustiveSolver.h"

class Solver {

    const Graph m_graph;

    std::vector<int> m_solution;

public:
    /**
     * Default constructor.
     *
     * @param g The graph.
     */
    explicit Solver(Graph &g) : m_graph(g) {}

    void solve(){
        m_solution.clear();
        m_solution.reserve(m_graph.m_n_B);

        // find components of the graph
        Partitioner partitioner(m_graph);
        partitioner.find_components();

        // determine the component order
        Graph partition_g = partitioner.get_partition_graph();
        ExhaustiveSolver partition_solver(partition_g);
        partition_solver.solve();
        std::vector<int> partition_order = partition_solver.get_solution();
        partitioner.reorder(partition_order);

        for(int i = 0; i < partitioner.m_n_partitions; ++i){
            std::cout << "i = " << i << std::endl;
            print(partitioner.m_components_A[i]);
            print(partitioner.m_components_B[i]);
        }

        // solve each component
        for(int i = 0; i < partitioner.m_n_partitions; ++i){
            Graph g = partitioner.m_sub_graphs[i];
            TranslationTable tt = partitioner.m_translation_tables[i];

            // solve sub-graph
            ExhaustiveSolver s(g);
            s.solve();
            std::vector<int> part_solution = s.get_solution();

            // put the partial solution into the complete solution
            for(size_t j = 0; j < part_solution.size(); ++j){
                int vertex_tt = tt.get_B_old(part_solution[j]);
                m_solution.push_back(vertex_tt);
            }
        }
    }

    std::vector<int> get_solution(){
        std::vector<int> sol(m_solution);
        return sol;
    }

    /**
     * Returns the permutation vector. All entries are in the range
     * [n_A + 1, ..., n_A + n_B].
     *
     * @return Permutation of B.
     */
    inline std::vector<int> get_shifted_solution() const {
        std::vector<int> v(m_solution.size());
        std::copy(m_solution.begin(), m_solution.end(), v.begin());
        for (auto &x: v) {
            x += m_graph.m_n_A + 1;
        }
        return v;
    }
};

#endif //PACE2024EXACT_SOLVER_H
