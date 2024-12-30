mkdir -p build
g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
g++ -std=c++20 -fmodules-ts -x c++-system-header cmath
g++ -std=c++20 -fmodules-ts -c -x c++ math.cc
g++ -std=c++20 -fmodules-ts main.cpp math.o -o build/main
build/main
