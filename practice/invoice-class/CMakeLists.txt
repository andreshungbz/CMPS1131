cmake_minimum_required(VERSION 3.26)
project(invoice_class)

set(CMAKE_CXX_STANDARD 20)

add_executable(invoice_class
        main.cpp
        Invoice.cpp
        Invoice.h)
