cmake_minimum_required(VERSION 3.3)
project(designpattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(simpleFactory SimpleFactory_Test.cpp)
add_executable(factorymethod FactoryMethod_Test.cpp)