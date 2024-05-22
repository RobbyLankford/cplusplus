#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    printf("Enter Numbers: ");
    scanf("%d%f%d", &i, &x, &j);

    // Enter: 10.3 5 6

    printf("i: %d\n", i); // 10
    printf("x: %f\n", x); // 0.300000
    printf("j: %d\n", j); // 5

    return 0;
}