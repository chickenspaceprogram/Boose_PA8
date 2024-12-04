cmake_minimum_required(VERSION 3.15)
project(funcs C)

set(CMAKE_C_STANDARD 11)

add_library(my_strlen
    my_strlen.c
    my_strlen.h
)

add_library(binary_search
    binary_search.c
    binary_search.h
)