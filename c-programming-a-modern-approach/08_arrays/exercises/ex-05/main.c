/* Create first 40 Fibonacci numbers */

#include <stdio.h>

#define N ((int) sizeof(fib_numbers) / sizeof(fib_numbers[0]))

int main(void)
{
    int i, j, fib_numbers[40] = {1, 1};

    for (i = 2; i < N; i++)
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    
    for (j = 0; j < N; j++)
        printf("Fibonacci Number %d: %d\n", j + 1, fib_numbers[j]);

    return 0;
}
