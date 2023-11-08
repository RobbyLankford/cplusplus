#include <stdio.h>
#include <stdlib.h>     /* for atof() */
#include <ctype.h>

#define MAXOP   100     /* max size of operand or operator */
#define NUMBER  '0'     /* signal that a number was found */
#define MAXVAL  100     /* maximum depth of val stack */
#define BUFFSIZE 100

int getop(char[]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

int sp = 0;             /* next free stack position */
double val[MAXVAL];     /* value stack */
char buf[BUFFSIZE];     /* buffer for ungetch */
int bufp = 0;           /* next free position in buf */

/* reverse Polish calculator */
main()
{
    return 0;
}

/* push: push f onto value stack */
void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    }
    else
    {
        printf("error: stack full, cannot push %g\n", f);
    }
}

/* pop: pop and return top value from stack */
double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    }
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/* getop: get next operator or numeric operand */
int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
    {
        ;
    }

    s[1] = '/0';

    if (!isdigit(c) && c != '.')
    {
        return c;   /* not a number */
    }
    
    i = 0;

    if (isdigit(c)) /* collect integer part */
    {
        while (isdigit(s[++i] = c = getch()))
        {
            ;
        }
    }

    if (c == '.')   /* collect fraction part */
    {
        while (isdigit(s[++i] = c = getch()))
        {
            ;
        }
    }

    s[i] = '\0';

    if (c != EOF)
    {
        ungetch(c);
    }

    return NUMBER;
}

int getch(void) /* get a (possibly pushed back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFFSIZE)
    {
        printf("ungetch: too many characters\n");
    }
    else
    {
        buf[bufp++] = c;
    }
}