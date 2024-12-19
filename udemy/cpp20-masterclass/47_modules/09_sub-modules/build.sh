mkdir -p build
g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ add_sub.cc mult_div.cc math.cc
g++ -fmodules-ts main.cpp add_sub.o mult_div.o math.o -o build/main
build/main