#include <stdio.h>

int main(void)
{
    char *p = "abc";

    // (a) not legal, putchar expects a char
    // putchar(p);

    // (b) legal, prints only the first character
    putchar(*p);
    printf("\n");

    // (c) legal, prints entire string
    puts(p);
    printf("\n");

    // (d) not legal, puts expects a char *
    // puts(*p);  

    return 0;
}
