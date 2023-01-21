// Determines the lengt of a string using a function

#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");
    int length = strlen(name);

    printf("%i\n", length);
}