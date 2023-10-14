#include <stdio.h>

/* copy input to output; 2nd version */

main()
{
    int c;

    // condense to a single line in the while state
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}