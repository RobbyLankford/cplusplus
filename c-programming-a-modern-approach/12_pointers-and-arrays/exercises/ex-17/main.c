#include <stdio.h>

#define LEN 100

int sum_two_dimensional_array_old(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];
    
    return sum;
}

int sum_two_dimensional_array_new(const int a[][LEN], int n)
{
    const int *p = *a;
    int sum = 0;

    while (p < *a + n * LEN)
        sum += *p++;
    
    return sum;
}

int main(void)
{
    return 0;
}
