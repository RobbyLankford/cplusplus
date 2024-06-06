#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part A
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);

    // Part B
    i = j = k = 1;
    j += j += k;
    printf("%d %d %d \n", i, j, k);

    // Part C
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d \n", i, j, k);

    // Part D
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d \n", i, j, k);

    return 0;
}