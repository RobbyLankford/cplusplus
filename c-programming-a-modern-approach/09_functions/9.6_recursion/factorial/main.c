/* Calculate factorial using recursion */

#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    } else
    {
        return n * factorial(n - 1);
    }
}

int main(void)
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Result: %d\n", result);

    return 0;
}
