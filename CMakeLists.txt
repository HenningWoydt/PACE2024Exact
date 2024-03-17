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

set(CMAKE_CXX_FLAGS_RELEASE "-std=c++20 -O3 -DNDEBUG -finline-functions -fwhole-program -ftree-vectorize -flto -funroll-loops -falign-loops -march=native -Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -std=c++20 -Wall -Wextra -pedantic")

add_executable(PACE2024Exact
        main.cpp
        src/CandidateManager.h
        src/Graph.h
        src/GraphGenerator.h
        src/MinCrossMatrix.h
        src/misc.cpp
        src/misc.h
        src/Solver.h
        src/Solver_BF.h)

add_executable(PACE2024Exact_test
        src/CandidateManager.h
        src/Graph.h
        src/GraphGenerator.h
        src/MinCrossMatrix.h
        src/misc.cpp
        src/misc.h
        src/Solver.h
        src/Solver_BF.h
        tests/medium_test.cpp
        tests/misc_test.cpp
        tests/misc_test.h
        tests/own_tiny_test.cpp
        tests/tiny_test.cpp)

target_link_libraries(PACE2024Exact_test GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(PACE2024Exact_test)
