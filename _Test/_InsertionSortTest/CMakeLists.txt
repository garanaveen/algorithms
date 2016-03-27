project(_InsertionSortTest)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})

INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")

find_library(INSERTIONSORT_LIB InsertionSort)
target_link_libraries(${INSERTIONSORT_LIB})
