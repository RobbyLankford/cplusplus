#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of strings
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    // Search for string
    string s = get_string("String: ");
    for (int i = 0; i < 7; i++)
    {
        if(strcmp(names[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not Found\n");
    return 1;
}