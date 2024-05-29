#include <stdio.h>

int main(void)
{
    int i;

    // Using as prefix, variable is decremented BEFORE being used
    i = 1;

    printf("i is %d\n", --i); /* prints "i is 0" */
    printf("i is %d\n", i); /* prints "i is 0" */

    printf("\n");

    // Using as postfix, variable is decremented AFTER being used

    i = 1;
    
    printf("i is %d\n", i--); /* prints "i is 1" */
    printf("i is %d\n", i); /* prints "i is 0" */

    return 0;
}