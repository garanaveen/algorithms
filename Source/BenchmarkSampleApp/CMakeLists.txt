project(BenchmarkSampleApp)
cmake_minimum_required(VERSION 2.8)

SET ( SRC_LIST
BenchmarkSampleApp.cpp
BenchmarkSampleApp.h
)

add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

INSTALL(
TARGETS ${PROJECT_NAME}
ARCHIVE DESTINATION lib
LIBRARY DESTINATION lib
RUNTIME DESTINATION bin
COMPONENT ${PROJECT_NAME}
)
