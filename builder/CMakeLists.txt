cmake_minimum_required(VERSION 3.17)
project(builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(builder main.cpp Car.hpp Builder.hpp Director.cpp Director.hpp SimpleCarBuilder.cpp SimpleCarBuilder.hpp Car.cpp)