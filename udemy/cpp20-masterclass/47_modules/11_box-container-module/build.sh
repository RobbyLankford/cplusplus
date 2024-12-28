mkdir -p build
g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
g++ -std=c++20 -fmodules-ts -c -x c++ boxcontainer.cc
g++ -std=c++20 -fmodules-ts main.cpp boxcontainer.o -o build/main
build/main
