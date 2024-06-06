#include <stdio.h>

int main(void)
{
    // If i,j > 0, is (-i) / j always the same as -(i / j)
    int i, j;

    i = 1; j = 1;
    printf("%d vs %d\n", (-i) / j, -(i / j));

    i = 5; j = 1;
    printf("%d vs %d\n", (-i) / j, -(i / j));

    i = 1; j = 5;
    printf("%d vs %d\n", (-i) / j, -(i / j));

    return 0;
}