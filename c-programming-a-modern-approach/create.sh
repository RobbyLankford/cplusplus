#!/bin/bash

# create new chapter and section folders
path="$1"
tail="${path##*/}"
head="${path%/*}"

mkdir -p $head
mkdir -p $path

# create main.c file (or other file name)
cat > $path/main.c << EOL
#include <stdio.h>

int main(void)
{

    return 0;
}
EOL

# create build script
cat > $path/build.sh << EOL
mkdir -p build
g++ -o build/main main.c
build/main
EOL

open $path/main.c