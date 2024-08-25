/* Non-Recursive Factorial Function */

#include <stdio.h>

int fact(int n)
{
    int result = 1;
    while (n > 1)
    {
        result *= n;

        n--;
    }

    return result;
}

int main(void)
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Result of %d!: %d\n", num, fact(num));

    return 0;
}
