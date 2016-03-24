project(algorithms)
cmake_minimum_required(VERSION 2.8)
#aux_source_directory(. SRC_LIST)

#add_subdirectory(Source)
add_subdirectory(_Test)

#This is another way to create a SRC_LIST. There has to be a better way for this!! Figure it out!
list(APPEND SRC_LIST main.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})

