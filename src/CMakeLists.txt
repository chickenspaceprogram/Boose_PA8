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

target_link_libraries(binary_search compare)
target_link_libraries(bubble_sort compare)