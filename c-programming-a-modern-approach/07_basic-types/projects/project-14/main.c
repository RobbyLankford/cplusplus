/* Implement Newton's method to compute the square root of a positive floating-point */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0;
    double div, avg;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    div = (double) x / y;
    avg = (y + div) / 2.0;

    while (fabs(y - avg) > (0.00001 * y))
    {
        y = avg;
        div = x / y;
        avg = (y + div) / 2.0;
    }
    
    printf("Square root: %0.5f\n", y);

    return 0;
}
