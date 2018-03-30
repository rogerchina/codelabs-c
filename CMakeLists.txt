cmake_minimum_required(VERSION 3.8)
project(codelabs_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        chapter2.c
        chapter3-rhodium.c
        chapter4.c
        common.h
        main.c
        README.md)

add_executable(codelabs_c ${SOURCE_FILES})