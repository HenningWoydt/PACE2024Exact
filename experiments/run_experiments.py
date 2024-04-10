import os
import signal
import subprocess
import sys

TIME_LIMIT = 1800

RESULT_FILE = "res.txt"
LOG_FILE = "log.txt"

MEDIUM_TEST_GRAPHS = [
    '../data/test/'
]

GRAPHS = [
    '../data/exact-public/21.gr',
    '../data/exact-public/38.gr',
    '../data/exact-public/68.gr',
    '../data/exact-public/69.gr',
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
    if not already_completed(graph):
        print(f'STARTING {graph}')
        try:
            process = subprocess.Popen(command, shell=True, start_new_session=True)
            process.wait(timeout=TIME_LIMIT)
        except subprocess.TimeoutExpired:
            print(f'Timeout for {command} ({TIME_LIMIT}s) expired', file=sys.stderr)
            os.killpg(os.getpgid(process.pid), signal.SIGTERM)

        f = open(f'{LOG_FILE}', 'a')
        f.write(f'{graph} FINISHED\n')


def main():
    for graph in GRAPHS:
        start(graph)


if __name__ == '__main__':
    main()
