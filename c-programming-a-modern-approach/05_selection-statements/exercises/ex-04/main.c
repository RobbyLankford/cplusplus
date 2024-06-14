#include <stdio.h>

int main(void)
{
    // Value is either -1, 0, or +1 depending on whether i is less than, equal to, or greater than j
    int i, j;

    // i less than j
    i = 1; j = 2;
    printf("%d\n", (i >j) - (i < j));

    // i equal to j
    i = j = 1;
    printf("%d\n", (i >j) - (i < j));

    // i greater than j
    i = 2; j = 1;
    printf("%d\n", (i >j) - (i < j));

    return 0;
}