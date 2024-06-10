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

import subprocess


def compile_project() -> None:
    """
    Compiles the project, so the newest version is always executed.

    :return: None
    """
    subprocess.call("mkdir -p ../build", shell=True, stdout=subprocess.PIPE)
    subprocess.call("cd .. && cmake -G 'Unix Makefiles' -DCMAKE_BUILD_TYPE=Release -S . -B ./build", shell=True, stdout=subprocess.PIPE)
    subprocess.call("cd .. && cmake --build build --target crossingguard", shell=True, stdout=subprocess.PIPE)
    subprocess.call("cd .. && chmod +x build/crossingguard", shell=True, stdout=subprocess.PIPE)


if __name__ == '__main__':
    compile_project()
