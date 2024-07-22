cmake_minimum_required(VERSION 3.20)
project(foo)

set(CMAKE_CXX_STANDARD 17)

add_library(foo src/foo.cpp)
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
