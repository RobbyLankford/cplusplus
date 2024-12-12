mkdir -p build
g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ math.cc
g++ -fmodules-ts main.cpp math.o -o build/main
build/main