#include <stdio.h>

// (a) declare a type named complex for a structure with two double members: real and imaginary
typedef struct
{
    double real;
    double imaginary;
} Complex;

// (b) use the complex type to declare variables named c1, c2, and c3
Complex c1, c2, c3;

// (c) write a function named make_complex that stores its two double arguments in a complex type
Complex make_complex(double real, double imaginary)
{
    return (Complex) {real, imaginary};
}

// (d) write a function named add_complex that adds the members of its complex type arguments
Complex add_complex(Complex a, Complex b)
{
    return (Complex) {a.real + b.real, a.imaginary + b.imaginary};
}

int main(void)
{
    return 0;
}