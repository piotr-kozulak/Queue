cmake_minimum_required(VERSION 3.28)
project(queue)

set(CMAKE_CXX_STANDARD 17)

add_executable(queue main.cpp
        queue.cpp
        queue.h)
