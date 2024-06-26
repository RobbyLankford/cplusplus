#include <stdio.h>

/* fgets: get a most n chars from iop */
char *fgets(char *s, int n, FILE *iop)
{
    register int c;
    register char *cs;

    cs = s;

    while (--n > 0 && (c = getc(iop)) != EOF)
    {
        if ((*cs++ = c) == '\n')
        {
            break;
        }

        *cs = '\0';

        return (c == EOF && cs == s) ? NULL : s;
    }
}

/* fputs: put string s on file iop */
int fputs(char *s, FILE *iop)
{
    int c;

    while (c = *s++)
    {
        putc(c, iop);
    }

    return ferror(iop) ? EOF : 0;
}

main()
{
    return 0;
}