cmake_minimum_required(VERSION 3.17)
project(mediator)

set(CMAKE_CXX_STANDARD 14)

add_executable(mediator main.cpp mediator.cpp mediator.hpp component.cpp component.hpp button.cpp button.hpp input_field.cpp input_field.hpp text_label.cpp text_label.hpp login_mediator.cpp login_mediator.hpp)