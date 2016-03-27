project(algorithms)
cmake_minimum_required(VERSION 2.8)

set(TOP_LEVEL_PROJECT_SOURCE ${PROJECT_SOURCE_DIR})
set(GTEST_INCLUDE_DIR "C:/Tools/googletest-release-1.7.0/include")

INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")
INCLUDE_DIRECTORIES("${GTEST_INCLUDE_DIR}")

add_subdirectory(Source)
add_subdirectory(_Test)
