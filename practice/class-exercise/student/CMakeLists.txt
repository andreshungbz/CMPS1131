cmake_minimum_required(VERSION 3.26)
project(student)

set(CMAKE_CXX_STANDARD 20)

add_executable(student
        main.cpp
        Student.cpp
        Student.h)
