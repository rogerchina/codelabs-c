cmake_minimum_required(VERSION 3.8)
project(codelabs_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/chapter2.c
        src/chapter3-rhodium.c
        src/chapter4.c
        src/common.h
        src/main.c
        README.md)

add_executable(codelabs_c ${SOURCE_FILES})