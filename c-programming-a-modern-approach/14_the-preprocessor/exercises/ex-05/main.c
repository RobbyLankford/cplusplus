#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
    char *s;
    int i;
    
    // Part (a)
    strcpy(s, "abcd");
    i = 0;

    putchar(TOUPPER(s[++i])); // D

    printf("\n");

    // Part (b)
    strcpy(s, "0123");
    i = 0;

    putchar(TOUPPER(s[++i])); // 2

    printf("\n");

    return 0;
}
