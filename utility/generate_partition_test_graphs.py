import os
import random
from typing import List, Tuple

FILE_DIR = "../data/test/own/partition"
MAX_A = 50
MAX_B = 10
N_PARTITIONS = [2, 3, 4, 5, 6, 7, 8, 9, 10]
N_FILES = 50


def is_component_connected(group_a: List[int], group_b: List[int], edges: List[Tuple[int, int]]):
    """
    Determines if the component is fully connected.

    :param group_a: Elements in A.
    :param group_b: Elements in B.
    :param edges: List of edges.
    :return: True if the component is connected, false else.
    """
    group_a = list(sorted(group_a))
    group_b = list(sorted(group_b))

    # determine the minimum and maximum connected value of a
    min_a = 100000000000000
    max_a = 0
    for edge in edges:
        min_a = min(min_a, edge[0])
        max_a = max(max_a, edge[0])
    if not (min_a == group_a[0] and max_a == group_a[-1]):
        # the min and max are not captured, this will lead to errors
        return False

    # all b nodes need to be connected
    b_set = {group_b[0]}
    added_vertex = True
    while added_vertex:
        added_vertex = False
        a_set = set()

        # determine all vertices connected to a
        for b in b_set:
            for edge in edges:
                if b == edge[1]:
                    a_set.add(edge[0])

        # determine all vertices connected to b
        for a in a_set:
            for edge in edges:
                if a == edge[0]:
                    if edge[1] not in b_set:
                        added_vertex = True
                        b_set.add(edge[1])

    if not list(sorted(list(b_set))) == list(sorted(group_b)):
        return False

    return True


def divide_into_groups(elements: List[int], k: int):
    """
    Divides a list of elements into k groups.

    :param elements: The list of elements.
    :param k: Number of groups.
    :return: The groups.
    """
    n = len(elements)
    used_n = k
    elements_per_group = [1 for _ in range(k)]

    while used_n < n:
        elements_per_group[random.randint(0, k-1)] += 1
        used_n += 1

    groups = []
    element = 0
    for i in range(k):
        group = []
        for j in range(elements_per_group[i]):
            group.append(element)
            element += 1
        groups.append(group)

    return groups


def generate_partition_graph(n_a: int, n_b: int, n_partitions: int, path: str) -> None:
    """
    Generates a bipartite graph.

    :param n_a: Number of vertices in A.
    :param n_b: Number of vertices in B.
    :param n_partitions: Number of partitions.
    :param path: Path to store the graph.
    :return: None
    """
    if n_b < n_partitions:
        # graph is not possible
        return

    # generate the groups
    groups_a = divide_into_groups([i for i in range(n_a)], n_partitions)
    groups_b = divide_into_groups([i for i in range(n_b)], n_partitions)

    group_edges = []
    for i in range(n_partitions):
        # fully connect the group
        possible_edges = []
        for a in groups_a[i]:
            for b in groups_b[i]:
                possible_edges.append((a, b))

        edges = []
        # connect each vertex of B to a random vertex of A
        for b in groups_b[i]:
            a = random.choice(groups_a[i])
            edge = (a, b)
            edges.append(edge)
            possible_edges.remove(edge)

        while not is_component_connected(groups_a[i], groups_b[i], edges):
            # add a random edge
            rnd_edge = random.choice(possible_edges)
            edges.append(rnd_edge)
            possible_edges.remove(rnd_edge)

        group_edges.append(edges)

    # merge all group edges
    edges = []
    for group in group_edges:
        for edge in group:
            edges.append(edge)

    # reindex vertices in B, so it is more random and interesting
    new_b = [i for i in range(n_b)]
    random.shuffle(new_b)

    for i in range(len(edges)):
        edges[i] = (edges[i][0], new_b[edges[i][1]])

    # shift edges into the correct range
    for i in range(len(edges)):
        edges[i] = (edges[i][0] + 1, edges[i][1] + n_a + 1)

    # shuffle edges
    random.shuffle(edges)

    # write the content to the file
    content = ""
    content += f"p ocr {n_a} {n_b} {len(edges)}\n"
    for (vertex_a, vertex_b) in edges:
        content += f"{vertex_a} {vertex_b}\n"

    f = open(path, 'w')
    f.write(content)
    f.close()


def generate_partition_tests() -> None:
    """
    Generates the partition test set.

    :return: None
    """
    for n_par in N_PARTITIONS:
        for n_A in range(n_par, MAX_A + 1):
            for n_B in range(n_par, MAX_B + 1):
                file_dir = f"{FILE_DIR}/{n_par}/{n_A}_{n_B}"
                sol_file_dir = f"{FILE_DIR}/{n_par}/{n_A}_{n_B}-sol"
                os.makedirs(file_dir, exist_ok=True)
                os.makedirs(sol_file_dir, exist_ok=True)
                for file_id in range(N_FILES):
                    file_path = f"{file_dir}/{file_id}.gr"
                    if not os.path.exists(file_path):
                        generate_partition_graph(n_A, n_B, n_par, file_path)


def main() -> None:
    """
    Generates all test sets.

    :return: None
    """
    os.makedirs(FILE_DIR, exist_ok=True)

    generate_partition_tests()


if __name__ == "__main__":
    main()
