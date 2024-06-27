#include <stdio.h>

// Only need to check up to square-root of n
int main(void)
{
    int n = 27; // Is prime

    for (int d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
            break;
    }

    return 0;
}
