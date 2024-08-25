/* Calculate the greatest common divisor of integers m and n */

#include <stdio.h>

int gcd(int m, int n)
{
    int r;
    while (n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int main(void)
{
    printf("GCD of 20 and 45: %d\n", gcd(20, 45));

    return 0;
}
