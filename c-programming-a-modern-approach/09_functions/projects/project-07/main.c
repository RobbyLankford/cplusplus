/* Recursive Power Function */

#include <stdio.h>


int power(int x, int n);


int main(void)
{
    int x, n;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter exponent: ");
    scanf("%d", &n);

    printf("Base %d raised to exponent %d is: %d\n", x, n, power(x, n));

    return 0;
}


int power(int x, int n)
{
    int i;

    // Base Case: power of zero
    if (n == 0)
        return 1;
    
    // Recursive Cases
    if (n % 2 == 0)
    {
        // Even-powered exponents
        i = power(x, n / 2);

        return i * i;
    }
    else
    {
        // Odd-powered exponents
        return x * power(x, n - 1);
    }
}