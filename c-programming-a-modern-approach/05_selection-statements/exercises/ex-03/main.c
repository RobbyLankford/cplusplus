#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part A
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    // Part B
    i = 7; j = 8; k = 9;
    printf("%d ", i = 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);

    // Part C
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);

    // Part D
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}