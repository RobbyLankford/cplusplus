mkdir -p build
g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ point.cc line.cc
g++ -fmodules-ts main.cpp point.o line.o -o build/main
build/main
