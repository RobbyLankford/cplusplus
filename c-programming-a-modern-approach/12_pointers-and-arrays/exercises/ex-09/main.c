#include <stdio.h>


double inner_product(const double *a, const double *b, int n)
{
    double sum;
    int i;

    while (i++ < n)
        sum += *a++ * *b++;
    
    return sum;
}


int main(void)
{
    return 0;
}
