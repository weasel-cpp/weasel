cmake_minimum_required(VERSION 3.0)

project(weasel)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
   "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
   set(warnings "-Wall -Wextra")
   set(std "-std=c++14")
endif()

set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} ${warnings}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${warnings} ${std}")

add_subdirectory(include/catch)
add_subdirectory(test)
add_subdirectory(src)