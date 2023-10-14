#include <stdio.h>

/* count characters in input; 2nd version */

main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    {
        // for loops have to have a body, so use an isolated semi-colon, called a null statement
        ;
    }

    printf("%0.f\n", nc);
}