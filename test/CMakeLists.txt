cmake_minimum_required(VERSION 3.15)
project(test C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(../src ./src)

add_executable(TEST-my_strlen
    ../tests/TEST-my_strlen.c
)

target_link_libraries(TEST-my_strlen my_strlen)

enable_testing()

add_test(
    NAME my_strlen
    COMMAND $<TARGET_FILE:TEST-my_strlen>
)