cmake_minimum_required(VERSION 3.26)
project(crafting_compilers C)

set(CMAKE_C_STANDARD 99)

add_executable(crafting_compilers main.c
        common.h
        chunk.c
        memory.c
        memory.h
        debug.c
        debug.h
        value.c
        value.h)
