#include <stdio.h>

/* copy input to output; 1st version */

main()
{
    // use int so that EOF can be used
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}