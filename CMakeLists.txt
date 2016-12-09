# This is a total guess at a minimum version, 3.0 seemed a safe bet.
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(cconsole LANGUAGES CXX)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    option(BUILD_EXAMPLES "build example binaries" ON)
else ()
    option(BUILD_EXAMPLES "build example binaries" OFF)
endif ()

add_subdirectory(src)

if (BUILD_EXAMPLES)
    add_subdirectory(examples)
endif ()

