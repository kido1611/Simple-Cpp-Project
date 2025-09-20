# Simple C++ Project

Simple C++ project with CMake build system + CPM as package manager. This project included with separated apps and libraries for example.

CPM (CPM.cmake) is a cross-platform CMake script that adds dependency management capabilities to CMake. Readmore [https://github.com/cpm-cmake/CPM.cmake](https://github.com/cpm-cmake/CPM.cmake)

This project also has been preloaded with libraries:

1. spdlog [https://github.com/gabime/spdlog](https://github.com/gabime/spdlog)
2. fmt [https://github.com/fmtlib/fmt](https://github.com/fmtlib/fmt)

## How to use

1. Install `CMake`, minimum version 3.20

2. `Just` to run defined command (optional)

3. Build app by running this command:

   ```sh
   cmake -S . -B build -G "Ninja Multi-Config" # or use `just cmake`

   # to build debug app:
   cmake --build build --config Debug # or use `just build_debug`

   # to build release app:
   cmake --build build --config Release # or use `just build_release`
   ```

4. To run app:

   ```sh
   # to run debug app
   ./build/bin/Debug/example # or use `just run_debug example`

   # to run release app
   ./build/bin/Release/example # or use `just run_release example`
   ```

> all command can be found inside `justfile`

## Compile Command

The CMake also generate `compile_commands.json` for LSP.

```sh
   cmake -S . -B build  # or use `just cmake`
```

File `compile_commands.json` can be found in `build/` directory

## Project Structure

```
├── apps
├── apps
│   ├── CMakeLists.txt
│   └── example
│       ├── CMakeLists.txt
│       ├── include
│       │   └── foo_bar.hpp
│       └── src
│           ├── foo_bar.cpp
│           └── main.cpp
├── cmake
│   ├── CPM.cmake
│   ├── dependencies.cmake
│   └── setup.cmake
├── CMakeLists.txt
├── justfile
├── libs
│   ├── bar
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   │   └── bar.hpp
│   │   └── src
│   │       └── bar.cpp
│   ├── CMakeLists.txt
│   └── foo
│       ├── CMakeLists.txt
│       ├── include
│       │   └── foo.hpp
│       └── src
│           └── foo.cpp
├── README.md
└── scripts
    └── update_cpm.sh
```

