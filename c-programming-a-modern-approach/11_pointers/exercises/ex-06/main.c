#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = a[0];
    *second_largest = a[1];

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }

        if (a[i] > *second_largest && a[i] != *largest)
            *second_largest = a[i];
    }
}

int main(void)
{
    return 0;
}
