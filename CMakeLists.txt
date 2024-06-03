cmake_minimum_required(VERSION 3.27)
project(PACE2024Exact)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(CMAKE_CXX_FLAGS_RELEASE "-std=c++20 -O3 -DNDEBUG -finline-functions -flto -fwhole-program -ftree-vectorize -funroll-loops -falign-loops -march=native -Wall -Wextra -pedantic")
# set(CMAKE_CXX_FLAGS_RELEASE "-std=c++20 -O3 -march=native -Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -std=c++20 -Wall -Wextra -pedantic")

add_executable(PACE2024Exact
        main.cpp
        src/macros.h
        src/definitions.h
        src/misc.cpp
        src/misc.h
        src/edge.cpp
        src/edge.h
        src/graph.h
        src/solver_bf.h
        src/perfect_pattern.h
        src/exhaustive_solver.h
        src/candidate_manager.h
        src/cross_matrix.h
        src/partitioner.h
        src/translation_table.h
        src/twin_reducer.h
        src/solver.h
        src/front_back_reducer.h
        src/useless_reducer.h
        src/one_vertex_partitioner.h
        src/one_vertex_partition_manager.h
        src/solved_vertex_group.h)

add_executable(PACE2024Exact_test
        src/macros.h
        src/definitions.h
        src/misc.cpp
        src/misc.h
        src/edge.cpp
        src/edge.h
        src/graph.h
        src/solver_bf.h
        src/perfect_pattern.h
        src/exhaustive_solver.h
        src/candidate_manager.h
        src/cross_matrix.h
        src/partitioner.h
        src/translation_table.h
        src/twin_reducer.h
        src/solver.h
        tests/misc_test.cpp
        tests/misc_test.h
        tests/tiny_test.cpp
        tests/own_random_test.cpp
        tests/own_partition_test.cpp
        tests/own_reduction_twins_test.cpp
        tests/own_all_tests.cpp
        src/front_back_reducer.h
        src/useless_reducer.h
        tests/own_front_back_reduction_test.cpp
        src/one_vertex_partitioner.h
        tests/own_one_vertex_partition.cpp
        src/one_vertex_partition_manager.h
        tests/own_solver_test.cpp
        src/solved_vertex_group.h)

target_link_libraries(PACE2024Exact_test GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(PACE2024Exact_test)
