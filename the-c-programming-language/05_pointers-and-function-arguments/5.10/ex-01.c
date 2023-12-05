#include <stdio.h>

/* echo command-line arguments; v1 (treats argv as an array of char pointers) */
main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
    {
        printf("%s%s", argv[1], (i < (argc - 1)) ? " " : "");
    }

    printf("\n");

    return 0;
}