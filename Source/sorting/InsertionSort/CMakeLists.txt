project(InsertionSort)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

add_library(${PROJECT_NAME} STATIC ${SRC_LIST}) #TODO : Is it not possible to make it SHARED.


