/* Implementation of a "mystery function" (prints binary representation) */

#include <stdio.h>

void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("'Mystery Function' output: ");
    pb(num);
    printf("\n");

    return 0;
}
