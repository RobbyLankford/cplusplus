#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part A
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i);

    // Part B
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);

    // Part C
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);

    // Part D
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}