import os
import random


def generate_graph(n_a: int, n_b: int, path: str) -> None:
    """
    Generates a bipartite graph.

    :param n_a: Number of nodes in A.
    :param n_b: Number of nodes in B.
    :param path: Path to store the graph.
    :return: None
    """
    edges = []
    for i in range(n_a):
        vertex_a = i + 1
        n_edges = random.randint(0, n_b)

        for j in range(n_edges):
            vertex_b = n_a + 1 + (random.randint(0, n_b - 1))

            if (vertex_a, vertex_b) not in edges:
                edges.append((vertex_a, vertex_b))

    content = ""
    content += f"p ocr {n_a} {n_b} {len(edges)}\n"
    for (vertex_a, vertex_b) in edges:
        content += f"{vertex_a} {vertex_b}\n"

    f = open(path, 'w')
    f.write(content)
    f.close()


def generate_test() -> None:
    """
    Generates a test set.

    :return: None
    """
    for i in range(1, 51):
        for j in range(1, 11):
            file_dir = f"../data/test/own/{i}_{j}"
            sol_file_dir = f"../data/test/own/{i}_{j}-sol"
            os.makedirs(file_dir, exist_ok=True)
            os.makedirs(sol_file_dir, exist_ok=True)
            for k in range(1000):
                file_path = f"{file_dir}/{k}.gr"
                if not os.path.exists(file_path):
                    generate_graph(i, j, file_path)


def main() -> None:
    """
    Generates all test sets.

    :return: None
    """
    file_dir = f"../data/test/own"
    os.makedirs(file_dir, exist_ok=True)

    generate_test()


if __name__ == "__main__":
    main()
