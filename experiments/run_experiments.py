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
import signal
import subprocess
import sys

TIME_LIMIT = 15

RESULT_FILE = "res.txt"
LOG_FILE = "log.txt"

MEDIUM_TEST_GRAPHS = [
    f'../data/test/medium_test_set/{i}.gr' for i in range(1, 61)
]

GRAPHS = [
    f'../data/exact-public/{i}.gr' for i in range(1, 101)
]


def already_completed(graph: str):
    if not os.path.exists(f'{LOG_FILE}'):
        return False

    f = open(f'{LOG_FILE}', 'r')
    for line in f.readlines():
        if f'{graph} FINISHED' in line.strip():
            return True
    return False


def start(graph: str):
    command = f'../build/PACE2024Exact {graph} {RESULT_FILE}'
    print(command)
    if not already_completed(graph):
        try:
            process = subprocess.Popen(command, shell=True, start_new_session=True)
            process.wait(timeout=TIME_LIMIT)
        except subprocess.TimeoutExpired:
            print(f'Timeout for {command} ({TIME_LIMIT}s) expired', file=sys.stderr)
            os.killpg(os.getpgid(process.pid), signal.SIGTERM)

        f = open(f'{LOG_FILE}', 'a')
        f.write(f'{graph} FINISHED\n')


def main():
    f = open(f'{RESULT_FILE}', 'w')
    f.close()
    f = open(f'{LOG_FILE}', 'w')
    f.close()

    for graph in MEDIUM_TEST_GRAPHS:
        start(graph)
    for graph in GRAPHS:
        start(graph)


if __name__ == '__main__':
    main()
