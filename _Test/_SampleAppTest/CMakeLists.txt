project(_SampleAppTest)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})

SET (PROJECT_DEPEND
SampleApp
)

add_dependencies(${PROJECT_NAME} ${PROJECT_DEPEND})
INCLUDE_DIRECTORIES("${TOP_LEVEL_PROJECT_SOURCE}/Source")

target_link_libraries(${PROJECT_NAME} ${PROJECT_DEPEND} gtest)
