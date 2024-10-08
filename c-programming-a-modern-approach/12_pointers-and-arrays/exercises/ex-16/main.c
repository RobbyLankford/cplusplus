#include <stdio.h>

int find_largest(int a[], int n)
{
    int *p = a;
    int largest = *p++;

    while (p++ < a + n)
    {
        if (*p > largest)
            largest = *p;
    }

    return largest;
}

int temperatures[7][24];

int main(void)
{
    for (int i = 0; i < 7; i++)
        printf("Day %d: %d\n", i + 1, find_largest(temperatures[i], 24));

    return 0;
}
