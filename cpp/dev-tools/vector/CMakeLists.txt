cmake_minimum_required(VERSION 3.16)

project(MyApp)

include_directories(include)

# add subdirectory project
# add_subdirectory(sum)

file(GLOB SRC src/*.cpp)
#set(SRC src/factorial.cpp src/hello.cpp src/main.cpp)

add_executable(${PROJECT_NAME} ${SRC})

