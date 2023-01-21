// Determines the length of a string

#include ".vscode/cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");

    // Count number of characters up until '\0' (NUL)
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }

    printf("%i\n", n);
}