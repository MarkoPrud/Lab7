cmake_minimum_required(VERSION 3.8)
project(lab7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp deque.h node2.h node2.template deque.cpp)
add_executable(lab7 ${SOURCE_FILES})