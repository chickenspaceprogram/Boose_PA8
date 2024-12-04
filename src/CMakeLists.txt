cmake_minimum_required(VERSION 3.15)
project(funcs C)

set(CMAKE_C_STANDARD 11)

add_library(my_strlen
    ../src/my_strlen.c
    ../src/my_strlen.h
)