import subprocess


def compile_project() -> None:
    """
    Compiles the project, so the newest version is always executed.

    :return: None
    """
    subprocess.call("mkdir -p ../build", shell=True, stdout=subprocess.PIPE)
    subprocess.call("cd .. && cmake -G 'Unix Makefiles' -DCMAKE_BUILD_TYPE=Release -S . -B ./build", shell=True, stdout=subprocess.PIPE)
    subprocess.call("cd .. && cmake --build build --target PACE2024Exact", shell=True, stdout=subprocess.PIPE)
    subprocess.call("cd .. && chmod +x build/PACE2024Exact", shell=True, stdout=subprocess.PIPE)


if __name__ == '__main__':
    compile_project()
