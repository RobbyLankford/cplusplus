/* Return the median of three numbers */

#include <stdio.h>

double median(double x, double y, double z)
{
    double middle = x;

    if ((x >= y && z <= y) || (z >= y && x <= y))
        middle = y;
    else if ((x >= z && y <= z) || (y >= z && x <= z))
        middle = z;
    
    return middle;
}

int main(void)
{
    int a = 1, b = 2, c = 3;

    printf("Median: %f\n", median(a, b, c));

    return 0;
}
