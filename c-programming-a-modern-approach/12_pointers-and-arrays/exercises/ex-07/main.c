#include <stdio.h>
#include <stdbool.h>


bool search(const int a[], int n, int key)
{
    const int *p;

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }

    return false;
}


int main(void)
{
    return 0;
}
