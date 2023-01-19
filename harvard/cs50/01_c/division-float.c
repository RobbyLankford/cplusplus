// Division with ints, demonstrating type casting

#include ".vscode/cs50.h"
#include <stdio.h>

int main(void) 
{
    // Get input from users
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Divide x by y
    float z = (float) x / (float) y;
    printf("%f\n", z);
}
