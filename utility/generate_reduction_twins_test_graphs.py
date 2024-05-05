import os
import random
from typing import List

FILE_DIR = "../data/test/own/reduction_twins"
MAX_A = 10
MAX_B = 10
N_FILES = 5
N_REDUCTIONS = [1, 2, 3, 4, 5]


def divide_into_groups(elements: List[int], k: int) -> List[List[int]]:
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


def generate_reduction_graph(n_a: int, n_b: int, n_reduce: int, path: str) -> None:
    """
    Generate a reduction twins graph, that when reduced, has n_reduced vertices
    in B.

    :param n_a: Number of vertices in A.
    :param n_b: Number of vertices in B.
    :param n_reduce: Number of vertices in B, after reduction.
    :param path: Path to store the graph.
    :return: None
    """
    if n_b < n_reduce and n_a < n_reduce:
        # graph is not possible
        return

    # determine which vertices form twins
    b_vertices = [i for i in range(n_b)]
    random.shuffle(b_vertices)
    groups_b = divide_into_groups(b_vertices, n_reduce)

    # determine for each group the edges
    groups_a = []
    for i in range(n_reduce):
        found_set = False
        while not found_set:
            n_edges = random.randint(1, n_a)
            vertices_a = list(sorted(random.choices([i for i in range(n_a)], k=n_edges)))

            # determine if vertices_a is already in groups
            found = False
            for group in groups_a:
                if group == vertices_a:
                    found = True
                    break

            if not found:
                groups_a.append(vertices_a)
                found_set = True

    edges = []
    for group_a, group_b in zip(groups_a, groups_b):
        for a in group_a:
            for b in group_b:
                edges.append((a, b))

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


def generate_reduction_twins_tests() -> None:
    """
    Generates the reduction test set.

    :return: None
    """
    for n_reduce in N_REDUCTIONS:
        for n_A in range(n_reduce + 1, MAX_A + 1):
            for n_B in range(n_reduce + 1, MAX_B + 1):
                file_dir = f"{FILE_DIR}/{n_reduce}/{n_A}_{n_B}"
                sol_file_dir = f"{FILE_DIR}/{n_reduce}/{n_A}_{n_B}-sol"
                os.makedirs(file_dir, exist_ok=True)
                os.makedirs(sol_file_dir, exist_ok=True)
                for file_id in range(N_FILES):
                    file_path = f"{file_dir}/{file_id}.gr"
                    if not os.path.exists(file_path):
                        generate_reduction_graph(n_A, n_B, n_reduce, file_path)


def main() -> None:
    """
    Generates all test sets.

    :return: None
    """
    os.makedirs(FILE_DIR, exist_ok=True)

    generate_reduction_twins_tests()


if __name__ == "__main__":
    main()
