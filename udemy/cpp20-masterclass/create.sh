#!/bin/bash

# create new chapter and section folders
path="$1"
tail="${path##*/}"
head="${path%/*}"

mkdir -p $head
mkdir -p $path

# create main.cpp file
cat > $path/main.cpp << EOL
#include <iostream>

int main()
{


    return 0;
}
EOL

# create build script
cat > $path/build.sh << EOL
mkdir -p build
g++ -std=c++20 -o build/main main.cpp
build/main
EOL

open $path/main.cpp