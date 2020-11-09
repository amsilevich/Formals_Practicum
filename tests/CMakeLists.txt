cmake_minimum_required(VERSION 3.6)

project(GoogleTests)

find_package(GTest REQUIRED)

set(sources ../src/tests_src/tests_run.cpp
            ../src/handler_src/handler.cpp
            ../src/converts_src/converts.cpp
            ../src/node_src/node.cpp)

add_executable(tests ${sources})

target_link_libraries(tests ${GTEST_LIBRARIES})

