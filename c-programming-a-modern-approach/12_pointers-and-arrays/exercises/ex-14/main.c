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

int temperatures[7][24];

int main(void)
{
    bool has32 = search(temperatures, 7 * 24, 32);

    return 0;
}
