#include <stdio.h>

// (a) Structure variables each having double members real and imaginary

/*
struct 
{
    double real;
    double imaginary;
} c1, c2, c3;
*/

// (b) Modify (a) so that c1's members have values 0.0 and 1.0, while c2's are 1.0 and 0.0
struct 
{
    double real;
    double imaginary;
} c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

int main(void)
{
    // (c) Copy the members of c2 into c1
    c1 = c2;

    // (d) Add corresponding members of c1 and c2, storing results in c3
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return 0;
}