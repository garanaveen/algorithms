project(algorithms)
cmake_minimum_required(VERSION 2.8)

set(TOP_LEVEL_PROJECT_SOURCE ${PROJECT_SOURCE_DIR})

#set(PROJECT_LIB_DIR ${PROJECT_BINARY_DIR}/lib)

set(GTEST_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/thirdparty/gtest/include)
add_subdirectory(${CMAKE_SOURCE_DIR}/thirdparty/gtest ${CMAKE_BINARY_DIR}/gtest)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/thirdparty/gtest/include ${CMAKE_SOURCE_DIR}/thirdparty/gtest)

INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")
INCLUDE_DIRECTORIES("${GTEST_INCLUDE_DIR}")

add_subdirectory(Source)
add_subdirectory(_Test)
