#include <stdio.h>

int a;

void f(int b)
{
    // Visible: a, b, and c

    int c;
}

void g(void)
{
    // Visible: a and d

    int d;
    {
        // Visible: a, d, and e

        int e;
    }
}

int main(void)
{
    // Visible: a and f

    int f;

    return 0;
}
