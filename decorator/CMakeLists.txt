cmake_minimum_required(VERSION 3.17)
project(decorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(decorator main.cpp Component.hpp Component.cpp Decorator.cpp Decorator.hpp)