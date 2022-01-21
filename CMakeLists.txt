# Versions' settings
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 23)


# Project declaration
project(graphs C CXX)


# Includes
#message("\n========== SELECTING BUILD FILES ========== ")
#
#file(GLOB_RECURSE SOURCES "./lib/*.cpp" LIST_DIRECTORIES false)
#
#string(REPLACE ";" "\n" SOURCES_STRING "${SOURCES}")
#message(${SOURCES_STRING})
#
#message("============= END BUILD FILES =============\n")
#
#message("ℹ Adding library...")
#add_library(graphs OBJECT ${SOURCES})
#
#message("\n")

add_executable(graphs "./tests/dfstest.cpp")


set_target_properties(graphs PROPERTIES LINKER_LANGUAGE CXX)



