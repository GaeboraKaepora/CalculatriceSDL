cmake_minimum_required(VERSION 4.0)
project(CalculatriceSDL C)

set(CMAKE_C_STANDARD 11)

add_executable(CalculatriceSDL src/main.c
        src/operations.c
        header/operations.h)
