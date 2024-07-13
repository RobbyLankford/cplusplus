/* Compute the factorial of a positive integer */

#include <stdio.h>

int main(void)
{
    int n;

    // Could use int, long, long long, float, double, or long double here for different precision
    long double fact = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = n; i > 1; i--)
        fact *= i;
    
    printf("Factorial of %d: %0.0Lf\n", n, fact);

    return 0;
}
