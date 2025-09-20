add_library(bar src/bar.cpp)
target_include_directories(bar PUBLIC include)
target_link_libraries(bar PUBLIC spdlog)
