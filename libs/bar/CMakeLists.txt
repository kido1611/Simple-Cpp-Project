cmake_minimum_required(VERSION 3.20)
project(main)

set(CMAKE_CXX_STANDARD 17)

add_library(bar src/bar.cpp)
target_link_libraries(bar foo)
target_include_directories(bar PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
