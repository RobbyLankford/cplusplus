/* Parse a person's name */

#include <stdio.h>

#define MAX_CHARS 20

int main(void)
{
    char c, initial, last[MAX_CHARS] = {0};

    printf("Enter a first and last name: ");
    while ((c = getchar()) == ' ')
        ;
    
    initial = c;
    while ((getchar() != ' '))
        ;
    
    for (int i = 0; (c = getchar()) != '\n'; i++)
        last[i] = c;
    
    printf("You entered the name: ");
    for (int i = 0; last[i] != '\0'; i++)
        putchar(last[i]);
    
    printf(", %c.\n", initial);

    return 0;
}
