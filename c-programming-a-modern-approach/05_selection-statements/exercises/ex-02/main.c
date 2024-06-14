#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part A
    i = 10; j = 5;
    printf("%d\n", !i < j);

    // Part B
    i = 2; j = 1;
    printf("%d\n", !!i + !j);

    // Part C
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);

    // Part D
    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);

    return 0;
}