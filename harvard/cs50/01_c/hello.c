// User get_string, prinf, and a placeholder

#include ".vscode/cs50.h"
#include <stdio.h>

int main(void) 
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
