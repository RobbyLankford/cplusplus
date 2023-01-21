// Determines the length of a string using a function

#include ".vscode/cs50.h"
#include <stdio.h>

int string_length(string s);

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");
    int length = string_length(name);

    printf("%i\n", length);
}

int string_length(string s)
{
    // Count number of characters up until '\0' (NUL)
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    return n;
}