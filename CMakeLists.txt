cmake_minimum_required(VERSION 3.20)
project(main)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/foo)
add_subdirectory(libs/bar)

include_directories(include)
add_library(foo_bar src/foo_bar.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE foo_bar foo bar)
