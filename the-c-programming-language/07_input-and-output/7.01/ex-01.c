#include <stdio.h>
#include <ctype.h>

/* lower: convert input to lowercase */
main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(tolower(c));
    }

    return 0;
}