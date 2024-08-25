/* Calculate Triangle Area */

#include <stdio.h>

double triangle_area(double base, double height)
{
    double product;
    product = base * height;

    return product / 2;
}

int main(void)
{
    printf("Area of 2 x 3 triangle: %0.2f\n", triangle_area(2.0, 3.0));

    return 0;
}
