add_library(foo_bar STATIC src/foo_bar.cpp)
target_include_directories(foo_bar PUBLIC include)

add_executable(example src/main.cpp)
target_link_libraries(example PRIVATE foo_bar)
target_link_libraries(example PUBLIC foo bar)
