#include <stdio.h>

struct fraction
{
    int numerator;
    int denominator;
};

// (a) reduce the fraction f to the lowest terms
struct fraction reduce_fraction(struct fraction f)
{
    int temp;
    int n = f.numerator, d = f.denominator;

    while (n % d != 0)
    {
        temp = d;
        d = n % d;
        n = temp;
    }

    f.numerator /= d;
    f.denominator /= d;

    return f;
}

// (b) add fractions
struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
    return reduce_fraction((struct fraction) {f1.numerator * f2.denominator + f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}

// (c) subtract fractions
struct fraction subtract_fractions(struct fraction f1, struct fraction f2)
{
    return reduce_fraction((struct fraction) {f1.numerator * f2.denominator - f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}

// (d) multiply fractions
struct fraction multiply_fractions(struct fraction f1, struct fraction f2)
{
    return reduce_fraction((struct fraction) {f1.numerator * f2.numerator, f1.denominator * f2.denominator});
}

// (e) divide fraction f1 by fraction f2
struct fraction divide_fraction(struct fraction f1, struct fraction f2)
{
    return reduce_fraction((struct fraction) {f1.numerator * f2.denominator, f1.denominator * f2.numerator});
}

int main(void)
{
    return 0;
}