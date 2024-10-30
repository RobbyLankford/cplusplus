#include <stdio.h>

int main(void)
{
    // (a) Works
    printf("%c", '\n');

    // (b) Does not work
    // printf("%c", "\n");

    // (c) Does not work
    // printf("%s", '\n');

    // (d) Works
    printf("%s", "\n");

    // (e) Does not work
    // printf('\n');

    // (f) Works
    printf("\n");

    // (g) Works
    putchar('\n');

    // (h) Does not work
    // putchar("\n");

    // (i) Does not work
    // puts('\n');

    // (j) Works, but writes two newline characters
    puts("\n");

    // (k) Works
    puts("");

    return 0;
}
