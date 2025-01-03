#include <stdio.h>

// 16 (overlapping) bytes
union
{
    double a; // 8 bytes

    struct // 16 total bytes
    {
        char b[4]; // 4 bytes
        double c; // 8 bytes
        int d; // 4 bytes
    } e;

    char f[4]; // 4 bytes
} u;

int main(void)
{
    return 0;
}