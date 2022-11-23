cmake_minimum_required(VERSION 3.10)

project(div)

set(CMAKE_BUILD_TYPE Release)

set(SRC src/sep.cpp)

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${SRC})
