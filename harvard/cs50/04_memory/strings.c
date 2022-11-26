#include ".vscode/cs50.h"
#include <stdio.h>

int main(void)
{
    // Note: .vscode/cs50.h provides `string`, which is a simplification of `char *`
    string s = "HI!";

    // Since strings are just arrays, the memory addresses are contiguous
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
}
