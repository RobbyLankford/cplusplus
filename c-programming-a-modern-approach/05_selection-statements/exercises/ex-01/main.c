#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part A
    i = 2; j = 3;
    k = i * j == 6;

    printf("%d\n", k);

    // Part B
    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);

    // Part C
    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k);

    // Part D
    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + 1 < k);

    return 0;
}