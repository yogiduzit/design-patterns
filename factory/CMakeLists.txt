cmake_minimum_required(VERSION 3.17)
project(factory C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(factory Product.hpp Creator.hpp main.cpp)