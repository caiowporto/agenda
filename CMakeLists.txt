cmake_minimum_required(VERSION 4.1)
project(agenda C)

set(CMAKE_C_STANDARD 23)

add_executable(agenda main.c
        agenda.c
        agenda.h
        interface.c
        interface.h)
