// Uppercases a string

#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Subtract 32 to get correct ASCII code
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
}