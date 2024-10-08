#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p = a;
    *largest = *second_largest = *a;

    while (p++ < a + n)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p > *second_largest)
        {
            *second_largest = *p;
        }
    }
}

int main(void)
{
    return 0;
}
