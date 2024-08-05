/* Calculate a power using recursion */

#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, n - 1);
    }
}

int main(void)
{
    int n, pow, result;

    printf("Enter a base number: ");
    scanf("%d", &n);

    printf("Enter a power: ");
    scanf("%d", &pow);

    result = power(n, pow);

    printf("Result: %d\n", result);

    return 0;
}
