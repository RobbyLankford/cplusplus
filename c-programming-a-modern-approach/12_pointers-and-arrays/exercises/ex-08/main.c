#include <stdio.h>


void store_zeros_old(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}

void store_zeros_new(int a[], int n)
{
    int *p;

    for (p = a; p < a + n; p++)
        *p = 0;
}


int main(void)
{
    return 0;
}
