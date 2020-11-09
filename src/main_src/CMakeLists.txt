cmake_minimum_required(VERSION 3.6)

project(trash)

set(sources 
            ./solve.cpp
            ../handler_src/handler.cpp
            ../converts_src/converts.cpp
            ../node_src/node.cpp)

add_executable(solve ${sources})