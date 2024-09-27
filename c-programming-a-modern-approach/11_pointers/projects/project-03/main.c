#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numer, denom, r_numer, r_denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numer, &denom);

    reduce(numer, denom, &r_numer, &r_denom);

    printf("In lowest terms: %d/%d\n", r_numer, r_denom);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int r, m = numerator, n = denominator;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}