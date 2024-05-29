#include <stdio.h>

int main(void)
{
    int i;

    // Using as prefix, variable is incremented BEFORE being used
    i = 1;

    printf("i is %d\n", ++i); /* prints "i is 2" */
    printf("i is %d\n", i); /* prints "i is 2" */

    printf("\n");

    // Using as postfix, variable is incremented AFTER being used

    i = 1;
    
    printf("i is %d\n", i++); /* prints "i is 1" */
    printf("i is %d\n", i); /* prints "i is 2" */

    return 0;
}