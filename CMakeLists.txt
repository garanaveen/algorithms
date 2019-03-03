project(algorithms)
cmake_minimum_required(VERSION 2.8)

#Install gtest using this script - linuxcommands/scripts/installgtest.sh
set(GOOGLE_TEST_DIR $ENV{HOME}/thirdpartytools/googletest/)

set(TOP_LEVEL_PROJECT_SOURCE ${PROJECT_SOURCE_DIR})

SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

#Right now both binaries and libraries are put to build directory
#TODO - Seperate them if possible
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(GTEST_INCLUDE_DIR ${GOOGLE_TEST_DIR}/googletest/gtest/include)
add_subdirectory(${GOOGLE_TEST_DIR}/ ${GOOGLE_TEST_DIR}/build)
INCLUDE_DIRECTORIES(${GOOGLE_TEST_DIR}/googletest/include)

INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")
INCLUDE_DIRECTORIES("${GTEST_INCLUDE_DIR}")

add_subdirectory(Source)
