/* strcmp that uses pointer arithmetic */
#include <stdio.h>

int strcmp(char *s, char *t)
{
    while (*s == *t)
    {
        if (*s == '\0')
            return 0;
        
        s++;
        t++;
    }

    return *s - *t;
}

int main(void)
{
    return 0;
}