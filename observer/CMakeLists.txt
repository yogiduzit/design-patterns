cmake_minimum_required(VERSION 3.17)
project(observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(observer main.cpp headers/HighScore.hpp headers/State.hpp headers/Subject.hpp headers/Observer.hpp impl/HighScore.cpp headers/Screens.hpp impl/Subject.cpp impl/Screens.cpp headers/Game.hpp impl/Game.cpp)