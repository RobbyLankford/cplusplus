/* Returns the number of digits in `n` (a positive integer) */

#include <stdio.h>

int num_digits(int n)
{
    int i = 0;
    while (n > 0)
    {
        n /= 10;
        i++;
    }

    return i;
}

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Number of digits %d\n", num_digits(n));

    return 0;
}
