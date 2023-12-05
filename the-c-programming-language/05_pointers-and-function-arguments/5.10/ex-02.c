#include <stdio.h>

/* echo command-line arguments; v2 (treats argv as a pointer to an array of pointers) */
main(int argc, char *argv[])
{
    while (--argc > 0)
    {
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    }

    printf("\n");

    return 0;
} 