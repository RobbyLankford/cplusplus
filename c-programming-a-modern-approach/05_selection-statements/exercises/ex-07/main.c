#include <stdio.h>

int main(void)
{
    int i;

    // Part 1
    i = 17;
    printf("%d\n", i >= 0 ? i : -i);

    // Part 2
    i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}