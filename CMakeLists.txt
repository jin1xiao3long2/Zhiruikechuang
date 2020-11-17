cmake_minimum_required(VERSION 3.17)
project(ZhiRui)

set(CMAKE_CXX_STANDARD 14)

MESSAGE("Hello World")

add_executable(Lottery lottery.cpp FooClass/Foo.cpp FooClass/Foo.hpp)

add_executable(move moveLearn.cpp)
add_executable(play playground.cpp)
add_executable(th throW.cpp)

add_executable(myclass 20201109/myclass.cpp)
add_executable(mystruct 20201109/mystruct.cpp)

add_executable(Foo FooClass/Foo.cpp FooClass/Foomain.cpp)

MESSAGE(STATUS "This is BINARY dir " ${CMAKE_SOURCE_DIR})
MESSAGE(STATUS "This is SOURCE dir " ${CMAKE_BINARY_DIR})