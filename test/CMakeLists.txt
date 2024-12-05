cmake_minimum_required(VERSION 3.15)
project(test C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(../src ./src)

add_executable(TEST-my_strncat
    ../tests/TEST-my_strncat.c
)

add_executable(TEST-binary_search
    ../tests/TEST-binary_search.c
)

add_executable(TEST-compare
    ../tests/TEST-compare.c
)

target_link_libraries(TEST-my_strncat my_strncat)
target_link_libraries(TEST-binary_search binary_search)
target_link_libraries(TEST-compare compare)

enable_testing()

add_test(
    NAME compare
    COMMAND $<TARGET_FILE:TEST-compare>
)

add_test(
    NAME my_strncat
    COMMAND $<TARGET_FILE:TEST-my_strncat>
)

add_test(
    NAME binary_search
    COMMAND $<TARGET_FILE:TEST-binary_search>
)
