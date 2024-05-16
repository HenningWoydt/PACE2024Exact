import os
import random
from typing import List, Tuple

FILE_DIR = "../data/test/own/one_vertex_partition"
MAX_A = 50
MAX_B = 10
N_FILES = 1000


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


def has_connecting_vertex(group_a: List[int], group_b: List[int], edges: List[Tuple[int, int]]):
    """
    Determine if there is a connecting vertex in the group.

    :param group_a:
    :param group_b:
    :param edges:
    :return:
    """
    for v in group_b:
        # determine if v is a connecting vertex

        # collect if v has exactly two edges
        n_edges = 0
        a_s = []
        for (a, b) in edges:
            if b == v:
                n_edges += 1
                a_s.append(a)

        # print(v, group_b, n_edges)

        if n_edges == 2:
            # get left and right as
            a_s = list(sorted(a_s))
            left_as = []
            right_as = []

            for a in group_a:
                if a <= a_s[0]:
                    left_as.append(a)
                if a >= a_s[1]:
                    right_as.append(a)

            # get left and right bs
            left_bs = []
            right_bs = []

            for (a, b) in edges:
                if b == v:
                    continue
                if a in left_as:
                    left_bs.append(b)
                if a in right_as:
                    right_bs.append(b)

            # print(left_as, right_as)
            # print(left_bs, right_bs)

            # check for overlap in bs
            is_connecting_vertex = True
            for b in left_bs:
                if b in right_bs:
                    is_connecting_vertex = False

            if is_connecting_vertex:
                return True

    return False


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
        elements_per_group[random.randint(0, k - 1)] += 1
        used_n += 1

    groups = []
    idx = 0
    for i in range(k):
        group = []
        for j in range(elements_per_group[i]):
            group.append(elements[idx])
            idx += 1
        groups.append(group)

    return groups


def generate_one_vertex_partition_graph(n_a: int, n_b: int, path: str) -> None:
    """
    Generates a bipartite graph.

    :param n_a: Number of vertices in A.
    :param n_b: Number of vertices in B.
    :param path: Path to store the graph.
    :return: None
    """
    # generate A
    n_a_left = 1 + random.randint(0, n_a - 2)
    n_a_right = n_a - n_a_left
    assert n_a_left >= 1
    assert n_a_right >= 1

    left_a_v = [i for i in range(n_a_left)]
    right_a_v = [i + n_a_left for i in range(n_a_right)]

    # generate B
    n_b_left = 1 + random.randint(0, n_b - 2)
    n_b_right = n_b - n_b_left
    assert n_b_left >= 1
    assert n_b_right >= 1

    groups_b = divide_into_groups([i for i in range(n_b)], 2)
    left_b_v = groups_b[0]
    right_b_v = groups_b[1]

    if len(left_b_v) > 1:
        connecting_vertex = left_b_v.pop()
    else:
        connecting_vertex = right_b_v.pop()

    # left_a_v, left_b_v, connecting_vertex, right_a_v, right_b_v = [0, 1], [0], 1, [2], [2]

    group_edges = []
    groups_a = [left_a_v, right_a_v]
    groups_b = [left_b_v, right_b_v]
    for i in range(2):
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

        while True:
            cond1 = is_component_connected(groups_a[i], groups_b[i], edges)
            cond2 = has_connecting_vertex(groups_a[i], groups_b[i], edges)
            # print(cond1, not cond2)
            if cond1 and not cond2:
                break

            if len(possible_edges) == 0:
                return
            # add a random edge
            rnd_edge = random.choice(possible_edges)
            edges.append(rnd_edge)
            possible_edges.remove(rnd_edge)

        group_edges.append(edges)

    # add the connecting vertex
    group_edges.append([(max(left_a_v), connecting_vertex), (min(right_a_v), connecting_vertex)])

    # merge all group edges
    edges = []
    for group in group_edges:
        for edge in group:
            edges.append(edge)

    # print(left_a_v, left_b_v, connecting_vertex, right_a_v, right_b_v)
    # print(edges)

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


def generate_one_vertex_partition_tests() -> None:
    """
    Generates the partition test set.

    :return: None
    """
    for n_A in range(3, MAX_A + 1):
        for n_B in range(3, MAX_B + 1):
            file_dir = f"{FILE_DIR}/{n_A}_{n_B}"
            sol_file_dir = f"{FILE_DIR}/{n_A}_{n_B}-sol"
            os.makedirs(file_dir, exist_ok=True)
            os.makedirs(sol_file_dir, exist_ok=True)
            for file_id in range(N_FILES):
                file_path = f"{file_dir}/{file_id}.gr"
                if not os.path.exists(file_path):
                    generate_one_vertex_partition_graph(n_A, n_B, file_path)


def main() -> None:
    """
    Generates all test sets.

    :return: None
    """
    os.makedirs(FILE_DIR, exist_ok=True)

    generate_one_vertex_partition_tests()


if __name__ == "__main__":
    main()
