#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    printf("Enter Numbers: ");
    scanf("%f%d%f", &x, &i, &y);

    // Enter 12.3 45.6 789

    printf("x: %f\n", x); // 12.300000
    printf("i: %d\n", i); // 45
    printf("y: %f\n", y); // 0.600000

    return 0;
}