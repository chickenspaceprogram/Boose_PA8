cmake_minimum_required(VERSION 3.15)
project(test C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(../src ./src)

add_executable(funcs_test
    ../src/funcs-test.c
)

target_link_libraries(funcs_test funcs)

enable_testing()

add_test(
    NAME funcs
    COMMAND $<TARGET_FILE:funcs_test>
)