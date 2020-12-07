cmake_minimum_required(VERSION 3.17)
project(builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractFactory ApplicationConfigurator.cpp ApplicationConfigurator.hpp Button.hpp Checkbox.hpp GUIFactory.hpp)