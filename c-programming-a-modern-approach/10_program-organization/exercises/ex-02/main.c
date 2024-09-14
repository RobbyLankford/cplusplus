#include <stdio.h>

int b, c;

void f(void)
{
    // Visible: b (local to f), c, and d
    
    int b, d;
}

void g(int a)
{
    // Visible: a (parameter), b, and c(local to g)

    int c;
    {
        // Visible: a (in block), b, c (local to g), and d (in block)

        int a, d;
    }
}

int main(void)
{
    // Visible: b, c (local to main), and d (local to main)

    int c, d;

    return 0;
}
