cmake_minimum_required(VERSION 3.5)
project(towSum C)

#set(CMAKE_C_STANDARD 99)
set(CMAKE_C_COMPILER "d:/MinGW/bin/gcc.exe")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

set(SOURCE_FILES twoSum.c main.c main.h)
add_executable(twoSum ${SOURCE_FILES})
