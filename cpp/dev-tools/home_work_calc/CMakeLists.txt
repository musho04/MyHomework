cmake_minimum_required(VERSION 3.10)

project(myApp)

add_subdirectory(sum)
add_subdirectory(sub)
add_subdirectory(sep)
add_subdirectory(mul)
#add_subdirectory(simple_tokenizer)

set(PROJECT_LINK_LIBS sum sub div mul)
set(SRC src/main.cpp)
 
include_directories(include)
 
add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LINK_LIBS})
