/* Condensed version of factorial function */

#include <stdio.h>

// Old Version
/*
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
*/

// Condensed Version
int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}

int main(void)
{
    int n = 5;

    printf("%d: %d\n", n, fact(n));

    return 0;
}
