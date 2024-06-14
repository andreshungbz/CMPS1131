cmake_minimum_required(VERSION 3.26)
project(chapter_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(chapter_3 EmployeeTest.cpp
        Employee.h
        Employee.cpp)
