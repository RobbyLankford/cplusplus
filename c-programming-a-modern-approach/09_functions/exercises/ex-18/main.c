/* Recursive version of Greatest Common Divisor */

#include <stdio.h>

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    
    return gcd(n, m % n);
}


int main(void)
{
    int m, n;

    printf("Enter one positive integer: ");
    scanf("%d", &m);

    printf("Enter another positive integer: ");
    scanf("%d", &n);
    
    printf("GCD of %d and %d: %d\n", m, n, gcd(m, n));

    return 0;
}
