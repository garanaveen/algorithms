CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

project(_RodCuttingTest)

SET (SRC_LIST
main.cpp
)

add_executable(${PROJECT_NAME} ${SRC_LIST})

SET ( PROJECT_DEPEND
RodCutting
)

add_dependencies(${PROJECT_NAME} ${PROJECT_DEPEND})

INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")

target_link_libraries(${PROJECT_NAME} ${PROJECT_DEPEND} gtest)

