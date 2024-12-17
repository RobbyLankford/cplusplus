mkdir -p build
g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ math.cc print.cc
g++ -fmodules-ts -c math_impl.cpp print_impl.cpp
g++ -fmodules-ts main.cpp math.o math_impl.o print.o print_impl.o -o build/main
build/main
