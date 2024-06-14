cmake_minimum_required(VERSION 3.26)
project(exam_review)

set(CMAKE_CXX_STANDARD 20)

add_executable(exam_review main.cpp
        Fraction.cpp
        Fraction.h)
