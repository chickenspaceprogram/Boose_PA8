cmake_minimum_required(VERSION 3.15)
project(funcs C)

set(CMAKE_C_STANDARD 11)

add_library(funcs
    ../src/funcs.c
    ../src/funcs.h
)