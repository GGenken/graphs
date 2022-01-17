cmake_minimum_required(VERSION 3.21)
project(graphs C CXX    )


set(CMAKE_CXX_STANDARD 23)


add_library(graphs STATIC ./lib/complex_structures/AdjacencyList.cpp)

set_target_properties(graphs PROPERTIES LINKER_LANGUAGE CXX)

