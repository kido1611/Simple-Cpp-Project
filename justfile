[doc("Show this help message")]
help:
  just -l

[doc("Configure CMake")]
cmake:
  cmake -S . -B build -G "Ninja Multi-Config"

[doc("Deleting build directory")]
clean:
  rm -rf build/

[doc("Build debug app")]
build_debug: cmake
  cmake --build build --config Debug

alias build := build_debug

[doc("Build release app")]
build_release: cmake
  cmake --build build --config Release

[doc("Update CPM")]
update_cpm:
  scripts/update_cpm.sh

[doc("Run debug app")]
run_debug NAME: build_debug
  build/bin/Debug/{{NAME}}

alias run := run_debug

[doc("Run release app")]
run_release NAME: build_release
  build/bin/Release/{{NAME}}

lint:
    cpplint --filter=-build/include_order --recursive apps
    cpplint --filter=-build/include_order --recursive libs
