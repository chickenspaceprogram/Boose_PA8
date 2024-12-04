cmake_minimum_required(VERSION 3.15)
project(test C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(../src ./src)

add_executable(TEST-my_strlen
    ../tests/TEST-my_strlen.c
)

add_executable(TEST-binary_search
    ../tests/TEST-binary_search.c
)

target_link_libraries(TEST-my_strlen my_strlen)
target_link_libraries(TEST-binary_search binary_search)

enable_testing()

add_test(
    NAME my_strlen
    COMMAND $<TARGET_FILE:TEST-my_strlen>
)

add_test(
    NAME binary_search
    COMMAND $<TARGET_FILE:TEST-binary_search>
)