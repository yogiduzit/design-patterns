cmake_minimum_required(VERSION 3.17)
project(proxy)

set(CMAKE_CXX_STANDARD 14)

add_executable(proxy main.cpp headers/ServiceInterface.hpp headers/Service.hpp headers/Proxy.hpp)