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

add_executable(TEST-bubble_sort
    ../tests/TEST-bubble_sort.c
)

add_executable(TEST-is_palindrome
    ../tests/TEST-is_palindrome.c
)

add_executable(TEST-sum_primes
    ../tests/TEST-sum_primes.c
)

add_executable(TEST-maximum_occurrences
    ../tests/TEST-maximum_occurrences.c
)

add_executable(TEST-max_consecutive_integers
    ../tests/TEST-max_consecutive_integers.c
)


target_link_libraries(TEST-my_strncat my_strncat)
target_link_libraries(TEST-binary_search binary_search)
target_link_libraries(TEST-compare compare)
target_link_libraries(TEST-bubble_sort bubble_sort)
target_link_libraries(TEST-is_palindrome is_palindrome)
target_link_libraries(TEST-sum_primes sum_primes)
target_link_libraries(TEST-maximum_occurrences maximum_occurrences)
target_link_libraries(TEST-max_consecutive_integers max_consecutive_integers)



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

add_test(
    NAME bubble_sort
    COMMAND $<TARGET_FILE:TEST-bubble_sort>
)

add_test(
    NAME is_palindrome
    COMMAND $<TARGET_FILE:TEST-is_palindrome>
)

add_test(
    NAME sum_primes
    COMMAND $<TARGET_FILE:TEST-sum_primes>
)

add_test(
    NAME maximum_occurrences
    COMMAND $<TARGET_FILE:TEST-maximum_occurrences>
)

add_test(
    NAME max_consecutive_integers
    COMMAND $<TARGET_FILE:TEST-max_consecutive_integers>
)