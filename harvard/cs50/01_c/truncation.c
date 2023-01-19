// Division with longs, demonstrating truncation

#include ".vscode/cs50.h"
#include <stdio.h>

int main(void) 
{
    // Get input from users
    long x = get_int("x: ");
    long y = get_int("y: ");

    // Divide x by y
    float z = x / y;
    printf("%f\n", z);
}
