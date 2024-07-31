/* Calculate the average of two doubles */

#include <stdio.h>

/* FUNCTION DECLARATIONS */
double average(double a, double b);

int main(void)
{
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));    

    return 0;
}

/* FUNCTION DEFINITIONS */
double average(double a, double b)
{
    return (a + b) / 2;
}