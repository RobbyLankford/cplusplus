// Say hello to user, based on the name they provide

#include ".vscode/cs50.h"
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n");

    printf("hello, %s\n", name);
    
    return 0;
}