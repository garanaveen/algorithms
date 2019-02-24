project(algorithms)
cmake_minimum_required(VERSION 2.8)

set(TOP_LEVEL_PROJECT_SOURCE ${PROJECT_SOURCE_DIR})

add_definitions(-std=c++11) 

#Right now both binaries and libraries are put to build directory
#TODO - Seperate them if possible
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(GTEST_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/thirdparty/gtest/include)
add_subdirectory(${CMAKE_SOURCE_DIR}/thirdparty/gtest ${CMAKE_BINARY_DIR}/gtest)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/thirdparty/gtest/include ${CMAKE_SOURCE_DIR}/thirdparty/gtest)

INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")
INCLUDE_DIRECTORIES("${GTEST_INCLUDE_DIR}")

add_subdirectory(Source)
add_subdirectory(_Test)
