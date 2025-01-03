#include <stdio.h>

// total size: 8 + 8 + 4 = 20 bytes
struct
{
    double a; // 8 bytes

    union // 8 total (overlapping) bytes
    {
        char b[4]; // 4 bytes
        double c; // 8 bytes
        int d; // 4 bytes
    } e;

    char f[4]; // 4 bytes
} s;

int main(void)
{
    return 0;
}