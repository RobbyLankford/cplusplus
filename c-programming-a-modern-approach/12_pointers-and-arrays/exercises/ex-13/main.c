#include <stdio.h>

void init_ident(int n, double ident[n][n])
{
    double *p = ident[0];
    int zeros = n;

    while (p++ < ident[0] + n * n)
    {
        if (zeros = n)
        {
            *p = 1;
            zeros = 0;
        }
        else
        {
            *p = 0;
            zeros++;
        }
    }
}

int main(void)
{
    return 0;
}
