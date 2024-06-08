# Crossing-Guard. Software to exactly solve the one-sided crossing
# minimization problem (OCM)
# Copyright (C) 2024  Henning Woydt
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or any
# later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

import os
import random

FILE_DIR = "../data/test/own/random"
MAX_A = 50
MAX_B = 10
N_FILES = 1000


def generate_random_graph(n_a: int, n_b: int, path: str) -> None:
    """
    Generates a random bipartite graph.

    :param n_a: Number of nodes in A.
    :param n_b: Number of nodes in B.
    :param path: Path to store the graph.
    :return: None
    """
    # generate random edges
    edges = []
    for i in range(n_a):
        vertex_a = i + 1
        n_edges = random.randint(0, n_b)

        for j in range(n_edges):
            vertex_b = n_a + 1 + (random.randint(0, n_b - 1))

            if (vertex_a, vertex_b) not in edges:
                edges.append((vertex_a, vertex_b))

    # write content to file
    content = ""
    content += f"p ocr {n_a} {n_b} {len(edges)}\n"
    for (vertex_a, vertex_b) in edges:
        content += f"{vertex_a} {vertex_b}\n"

    f = open(path, 'w')
    f.write(content)
    f.close()


def generate_random_tests() -> None:
    """
    Generates the random test set.

    :return: None
    """
    for n_A in range(1, MAX_A + 1):
        for n_B in range(1, MAX_B + 1):
            file_dir = f"{FILE_DIR}/{n_A}_{n_B}"
            sol_file_dir = f"{FILE_DIR}/{n_A}_{n_B}-sol"
            os.makedirs(file_dir, exist_ok=True)
            os.makedirs(sol_file_dir, exist_ok=True)
            for file_id in range(N_FILES):
                file_path = f"{file_dir}/{file_id}.gr"
                if not os.path.exists(file_path):
                    generate_random_graph(n_A, n_B, file_path)


def main() -> None:
    """
    Generates all random test sets.

    :return: None
    """
    os.makedirs(FILE_DIR, exist_ok=True)

    generate_random_tests()


if __name__ == "__main__":
    main()
