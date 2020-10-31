cmake_minimum_required(VERSION 3.17)
project(ZhiRui)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lottery lottery.cpp)

add_executable(move moveLearn.cpp)
add_executable(play playground.cpp)