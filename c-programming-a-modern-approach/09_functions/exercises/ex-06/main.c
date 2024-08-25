/* Returns the `k`-th digit (from the right) in `n` (a positive integer) */

#include <stdio.h>

int digit(int n, int k)
{
    while (k-- > 1)
    {    
        if ((n /= 10) <= 0)
            return 0;
    }

    return n % 10;
}

int main(void)
{
    int num, dig;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Enter the digit index to return: ");
    scanf("%d", &dig);

    printf("Digit number %d is: %d\n", dig, digit(num, dig));

    return 0;
}
