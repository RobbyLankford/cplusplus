#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 5000       /* max #lines to be sorted */
#define MAXLEN 1000         /* max length of any input line */
char *lineptr[MAXLINES];    /* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));

int numcmp(char *, char *);

/* sort input lines (can sort both lexicographically and numerically), optional -n to flag numerically */
main(int argc, char *argv[])
{
    int nlines;         /* number of input lines to read */
    int numeric = 0;     /* 1 if numeric sort */

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
    {
        numeric = 1; // Sort numerically
    }

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        qsort((void **) lineptr, 0, nlines - 1, (int (*)(void *, void *))(numeric ? numcmp : strcmp));

        writelines(lineptr, nlines);

        return 0;
    }
    else
    {
        printf("input too big to sort\n");

        return 1;
    }
}

/* getline: read a line into s, return length */
int getline(char *s, int lim)
{
    int c, i;

    for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
        {
            return -1;
        }
        else
        {
            /* delete newline */
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }

    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
    int i;

    for (i = 0; i < nlines; i++)
    {
        printf("%s\n", lineptr[i]);
    }
}

/* qsort: sort v[left] ... v[right] into increasing order */
void qsort(void *v[], int left, int right, int (*comp)(void *, void *))
{
    int i, last;
    void swap(void *v[], int, int);

    if (left >= right)
    {
        /* do nothing if array contains fewer than two elements */
        return;
    }

    swap(v, left, (left + right) / 2);

    last = left;

    for (i = left + 1; i <= right; i++)
    {
        if ((*comp)(v[i], v[left]) < 0)
        {
            swap(v, ++last, i);
        }
    }

    swap(v, left, last);

    qsort(v, left, last - 1, comp);
    qsort(v, last + 1, right, comp);
}

/* swap: interchange v[i] and v[j] */
void swap(void *v[], int i, int j)
{
    void *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

/* numcmp: compare s1 and s2 numerically */
int numcmp(char *s1, char *s2)
{
    double v1, v2;

    v1 = atof(s1);
    v2 = atof(s2);

    if (v1 < v2)
    {
        return -1;
    }
    else if (v1 > v2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}