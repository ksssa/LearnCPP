cmake_minimum_required(VERSION 3.12.1)
Project(LearnCPP VERSION 0.0.1)

SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(test main.cpp smartpoint/rall.cpp template/template.cpp)