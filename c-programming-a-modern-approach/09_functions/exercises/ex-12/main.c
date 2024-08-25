/* Calculates inner product of an array of doubles */

#include <stdio.h>

double inner_product(double a[], double b[], int n)
{
    double result;
    for (int i = 0; i < n; i++)
        result += (a[i] * b[i]);
    
    return result;
}

int main(void)
{
    double arr1[] = {1.0f, 2.0f, 3.0f};
    double arr2[] = {9.0f, 8.0f, 7.0f};

    printf("Result: %f\n", inner_product(arr1, arr2, 3));

    return 0;
}
