#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;

    // Part A
    printf("%d\n", i += j);

    // Part B
    printf("%d\n", i--);

    // Part C
    printf("%d\n", i * j / i);

    // Part D
    printf("%d\n", i % ++j);

    return 0;
}