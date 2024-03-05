cmake_minimum_required(VERSION 3.27)
project(PACE2024Exact)

set(CMAKE_CXX_STANDARD 17)

add_executable(PACE2024Exact main.cpp
        src/Graph.cpp
        src/Graph.h
        src/Solver_BF.cpp
        src/Solver_BF.h
        src/misc.h)
