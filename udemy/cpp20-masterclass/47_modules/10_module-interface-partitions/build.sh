mkdir -p build
g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ add_partition.cc mult_partition.cc math.cc
g++ -fmodules-ts main.cpp add_partition.o mult_partition.o math.o -o build/main
build/main