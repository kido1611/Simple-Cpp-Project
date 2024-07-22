# build program on production mode
build:
    cmake -S . -B build
    cmake --build build

# build program on dev mode
dev:
    cmake -S . -B build -DCMAKE_BUILD_TYPE=debug
    cmake --build build

# clean build directory
clean:
    rm -rf build/

# run application
run NAME: build
    ./build/{{NAME}}

cpplint:
    cpplint --recursive src
    cpplint --recursive include
    cpplint --recursive libs
