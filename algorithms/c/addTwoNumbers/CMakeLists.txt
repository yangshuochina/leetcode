cmake_minimum_required(VERSION 3.5)
project(addTwoNumbers C)

#set(CMAKE_C_STANDARD 99)
#set(CMAKE_C_COMPILER "d:/MinGW/bin/gcc.exe")

#add_executable(untitled1 main.c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

set(SOURCE_FILES addTwoNumbers.c main.c)
add_executable(addTwoNumbers ${SOURCE_FILES})
