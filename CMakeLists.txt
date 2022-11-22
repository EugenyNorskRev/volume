cmake_minimum_required(VERSION 3.23)
project(volume)

set(CMAKE_CXX_STANDARD 14)

add_executable(volume main.cpp cilinder.cpp cilinder.h)
