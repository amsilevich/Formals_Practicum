cmake_minimum_required (VERSION 3.7)
project(CoverageForGoogleTests)

add_definitions(-fprofile-arcs -ftest-coverage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -g -O0 -Wall -fprofile-arcs -ftest-coverage")

set(OBJECT_DIR ${CMAKE_BINARY_DIR}/CMakeFiles/CoverageForGoogleTests.dir/src)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(sources ../src/tests_src/tests_run.cpp
            ../src/handler_src/handler.cpp
            ../src/converts_src/converts.cpp
            ../src/node_src/node.cpp)

add_executable(CoverageForGoogleTests ${sources})

add_custom_target(gcov
    COMMAND mkdir -p gcoverage
    COMMAND ${CMAKE_MAKE_PROGRAM} test
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

add_custom_command(TARGET gcov
    COMMAND gcov -b ./tests_run.cpp -o ${OBJECT_DIR}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/gcoverage)

add_dependencies(gcov CoverageForGoogleTests)

add_custom_target(lcov
    COMMAND mkdir -p lcoverage)

add_custom_command(TARGET lcov
    COMMAND lcov --capture --directory ../ --output-file lcoverage/main_coverage.info
    COMMAND genhtml lcoverage/main_coverage.info --output-directory lcoverage)

set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES gcoverage)

add_custom_target(init
    COMMAND ${CMAKE_MAKE_PROGRAM} clean
    COMMAND rm -f ${OBJECT_DIR}/*.gcno
    COMMAND rm -f ${OBJECT_DIR}/*.gcda
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

enable_testing()

add_test(output_test ${CMAKE_CURRENT_BINARY_DIR}/CoverageForGoogleTests)

target_link_libraries(CoverageForGoogleTests gtest)
target_link_libraries(CoverageForGoogleTests pthread)
target_link_libraries(CoverageForGoogleTests -fprofile-arcs)