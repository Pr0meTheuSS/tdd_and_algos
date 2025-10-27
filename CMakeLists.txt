cmake_minimum_required(VERSION 3.31)
project(tdd-and-algos LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(CODE_COVERAGE "Enable coverage reporting" ON)

if(CODE_COVERAGE)
    message(STATUS "Code coverage enabled")
        add_compile_options(--coverage -O0 -g)
        add_link_options(--coverage)
endif()

# --- Dependencies (через Conan или system) ---
find_package(fmt REQUIRED)
find_package(GTest REQUIRED)
find_package(benchmark REQUIRED)

# --- Основное приложение ---
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS src/*.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt benchmark::benchmark_main)

# --- Benchmark ---
file(GLOB_RECURSE BENCH_FILES benchmarks/*.cpp)
add_executable(benchmarks ${BENCH_FILES})
target_link_libraries(benchmarks benchmark::benchmark)

# --- Подключаем тесты ---
enable_testing()
add_subdirectory(tests)
