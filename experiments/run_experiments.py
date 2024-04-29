import os
import signal
import subprocess
import sys

TIME_LIMIT = 60

RESULT_FILE = "res.txt"
LOG_FILE = "log.txt"

MEDIUM_TEST_GRAPHS = [
    '../data/test/medium_test_set/1.gr',
    '../data/test/medium_test_set/2.gr',
    '../data/test/medium_test_set/3.gr',
    '../data/test/medium_test_set/4.gr',
    '../data/test/medium_test_set/5.gr',
    '../data/test/medium_test_set/6.gr',
    '../data/test/medium_test_set/7.gr',
    '../data/test/medium_test_set/8.gr',
    '../data/test/medium_test_set/9.gr',
    '../data/test/medium_test_set/10.gr',
    '../data/test/medium_test_set/11.gr',
    '../data/test/medium_test_set/12.gr',
    '../data/test/medium_test_set/13.gr',
    '../data/test/medium_test_set/14.gr',
    '../data/test/medium_test_set/15.gr',
    '../data/test/medium_test_set/16.gr',
    '../data/test/medium_test_set/17.gr',
    '../data/test/medium_test_set/18.gr',
    '../data/test/medium_test_set/19.gr',
    '../data/test/medium_test_set/20.gr',
    '../data/test/medium_test_set/21.gr',
    '../data/test/medium_test_set/22.gr',
    '../data/test/medium_test_set/23.gr',
    '../data/test/medium_test_set/24.gr',
    '../data/test/medium_test_set/25.gr',
    '../data/test/medium_test_set/26.gr',
    '../data/test/medium_test_set/27.gr',
    '../data/test/medium_test_set/28.gr',
    '../data/test/medium_test_set/29.gr',
    '../data/test/medium_test_set/30.gr',
    '../data/test/medium_test_set/31.gr',
    '../data/test/medium_test_set/32.gr',
    '../data/test/medium_test_set/33.gr',
    '../data/test/medium_test_set/34.gr',
    '../data/test/medium_test_set/35.gr',
    '../data/test/medium_test_set/36.gr',
    '../data/test/medium_test_set/37.gr',
    '../data/test/medium_test_set/38.gr',
    '../data/test/medium_test_set/39.gr',
    '../data/test/medium_test_set/40.gr',
    '../data/test/medium_test_set/41.gr',
    '../data/test/medium_test_set/42.gr',
    '../data/test/medium_test_set/43.gr',
    '../data/test/medium_test_set/44.gr',
    '../data/test/medium_test_set/45.gr',
    '../data/test/medium_test_set/46.gr',
    '../data/test/medium_test_set/47.gr',
    '../data/test/medium_test_set/48.gr',
    '../data/test/medium_test_set/49.gr',
    '../data/test/medium_test_set/50.gr',
    '../data/test/medium_test_set/51.gr',
    '../data/test/medium_test_set/52.gr',
    '../data/test/medium_test_set/53.gr',
    '../data/test/medium_test_set/54.gr',
    '../data/test/medium_test_set/55.gr',
    '../data/test/medium_test_set/56.gr',
    '../data/test/medium_test_set/57.gr',
    '../data/test/medium_test_set/58.gr',
    '../data/test/medium_test_set/59.gr',
    '../data/test/medium_test_set/60.gr',
]

GRAPHS = [
    '../data/exact-public/21.gr',
    '../data/exact-public/38.gr',
    '../data/exact-public/68.gr',
    '../data/exact-public/69.gr',
    '../data/test/own/100/0.gr',
    '../data/test/own/100/1.gr',
    '../data/test/own/100/2.gr',
    '../data/test/own/100/3.gr',
    '../data/test/own/100/4.gr',
    '../data/test/own/100/5.gr',
    '../data/test/own/100/6.gr',
    '../data/test/own/100/7.gr',
    '../data/test/own/100/8.gr',
    '../data/test/own/100/9.gr',
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
    for graph in MEDIUM_TEST_GRAPHS:
        start(graph)


if __name__ == '__main__':
    main()
