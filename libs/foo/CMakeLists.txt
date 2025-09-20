add_library(foo src/foo.cpp)
target_include_directories(foo PUBLIC include)
target_link_libraries(foo PUBLIC spdlog)
