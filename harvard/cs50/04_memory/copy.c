#include ".vscode/cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    // To copy a string, find a new chunk of memory to assign the copy
    char *t = malloc(strlen(s) + 1);

    /* Note: NULL is used for pointers and '/0' is used for characters. 
       Sometimes malloc() may not have a valid memory address to choose.
       If that were to ever happen, bail out of the program */
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}