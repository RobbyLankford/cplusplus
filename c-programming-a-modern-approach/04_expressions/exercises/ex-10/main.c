#include <stdio.h>

int main(void)
{
    int i, j;

    // Part A
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);

    // Part B
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);

    // Part C
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);

    // Part D
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);

    return 0;
}