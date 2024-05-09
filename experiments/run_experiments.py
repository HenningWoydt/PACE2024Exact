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
