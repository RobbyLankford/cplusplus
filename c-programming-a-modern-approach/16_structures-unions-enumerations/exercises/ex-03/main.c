#include <stdio.h>

// (a) declare a tag named complex for a structure with two double members: real and imaginary
struct complex
{
    double real;
    double imaginary;
};

// (b) use the complex tag to declare variables named c1, c2, and c3
struct complex c1, c2, c3;

// (c) write a function named make_complex that stores its two double arguments in a complex structure
struct complex make_complex(double real, double imaginary)
{
    return (struct complex) {real, imaginary};
}

// (d) write a function named add_complex that adds the members of its complex structure arguments
struct complex add_complex(struct complex a, struct complex b)
{
    return (struct complex) {a.real + b.real, a.imaginary + b.imaginary};
}

int main(void)
{
    return 0;
}