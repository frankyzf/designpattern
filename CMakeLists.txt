cmake_minimum_required(VERSION 3.3)
project(designpattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(simpleFactory SimpleFactory_Test.cpp)
add_executable(factorymethod FactoryMethod_Test.cpp)
add_executable(abstractfactory AbstractFactory_Test.cpp)
add_executable(builder Builder_Test.cpp)
add_executable(singleton Singleton_Test.cpp)
add_executable(adapter Adapter_Test.cpp)
add_executable(bridge Bridge_Test.cpp)
add_executable(decorator Decorator_Test.cpp)
add_executable(facade Facade_Test.cpp)
add_executable(flyweight FlyWeight_Test.cpp)
add_executable(proxy Proxy_Test.cpp)
add_executable(command Command_Test.cpp)
add_executable(mediator Mediator_Test.cpp)
add_executable(observer Observer_Test.cpp)
add_executable(state State_Test.cpp)
add_executable(strategy Strategy_Test.cpp)