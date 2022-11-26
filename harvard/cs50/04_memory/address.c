#include <stdio.h>

int main(void)
{
    /*
        Operators for working with memory addresses:
        & : gives you the address in memory of where the variable is stored
        * : allows you to look inside of the memory address
    */
    int n = 50;

    // Print variable
    printf("%i\n", n);

    // Print address in memory where variable is stored
    printf("%p\n", &n);

    // Look inside of address in memory where variable is stored
    printf("%i\n", *&n);
}
