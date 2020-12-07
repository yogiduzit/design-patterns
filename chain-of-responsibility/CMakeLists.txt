cmake_minimum_required(VERSION 3.17)
project(chain_of_responsibility)

set(CMAKE_CXX_STANDARD 14)

add_executable(chain_of_responsibility main.cpp headers/handlers.hpp headers/Request.hpp headers/RequestProcessor.hpp ../strategy/headers/Character.hpp)