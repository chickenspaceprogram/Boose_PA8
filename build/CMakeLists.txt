cmake_minimum_required(VERSION 3.15)
project(Boose_PA8 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(../src ./src)

add_executable(Boose_PA8
    ../src/main.c
)

target_link_libraries(Boose_PA8 funcs)
