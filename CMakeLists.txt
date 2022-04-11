cmake_minimum_required(VERSION 3.20)
project(struct_c C)

set(CMAKE_C_STANDARD 99)

add_executable(struct_c
        main.c
        stack.h)
