#include <stdio.h>

struct color
{
    int red;
    int green;
    int blue;
};

// (a) a const variable MAGENTA with members 255, 0, and 255
const struct color MAGENTA = {255, 0, 255};

// (b) repeat (a) but use a designed initializer that does not specify green
const struct color MAGENTA = {.red = 255, .blue = 255};

int main(void)
{
    return 0;
}