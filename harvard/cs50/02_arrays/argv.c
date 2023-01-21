// Prints command-line arguments

#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) 
{
    if (argc == 2) 
    {
        printf("hello, %s\n", argv[1]);
        
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
    else
    {
        printf("hello, world\n");
    }
}
