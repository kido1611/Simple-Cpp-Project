cmake_minimum_required(VERSION 3.14)
project(main)

set(CMAKE_CXX_STANDARD 14)

include_directories("core/include")
include_directories("modules/include")

add_executable(main main.cpp core/source/Camera.cpp modules/source/OmniCamera.cpp core/source/Vision.cpp modules/source/FrontCamera.cpp core/source/Serial.cpp)