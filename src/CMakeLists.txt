#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at https://mozilla.org/MPL/2.0/.


cmake_minimum_required(VERSION 3.15)
project(funcs C)

set(CMAKE_C_STANDARD 11)

add_library(my_strncat
    my_strncat.c
    my_strncat.h
)

add_library(binary_search
    binary_search.c
    binary_search.h
)

add_library(compare
    compare.c
    compare.h
)

add_library(bubble_sort
    bubble_sort.c
    bubble_sort.h
)

add_library(is_palindrome
    is_palindrome.c
    is_palindrome.h
)

add_library(sum_primes
    sum_primes.c
    sum_primes.h
)

add_library(maximum_occurrences
    maximum_occurrences.c
    maximum_occurrences.h
)

add_library(max_consecutive_integers
    max_consecutive_integers.c
    max_consecutive_integers.h
)

target_link_libraries(binary_search compare)
target_link_libraries(bubble_sort compare)