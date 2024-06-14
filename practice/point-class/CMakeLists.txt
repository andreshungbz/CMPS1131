cmake_minimum_required(VERSION 3.26)
project(point_class)

set(CMAKE_CXX_STANDARD 20)

add_executable(point_class
        main.cpp
        Point.cpp
        Point.h)
