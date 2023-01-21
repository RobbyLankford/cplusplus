// Prints string char by char, using strlen, remembering string's length

#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");

    // Notice the slightly different for loop syntax this time
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }

    printf("\n");
}