/* Take in a first and last name and return last name, first initial */

#include <stdio.h>

int main(void)
{
    char c, name;

    printf("Enter a first and last name: ");
    scanf("%c", &name);

    // Find space between first name and last name
    while ((c = getchar()) != ' ')
        ;
    
    // Skip over the space to get to the first letter of the last name
    while ((c = getchar()) == ' ')
        ;
    
    // Print out all valid letters of the last name
    do
    {
        putchar(c);
    } while ((c = getchar()) != '\n' && c != ' ');

    // Print out the first initial of the first name
    printf(", %c.\n", name);

    return 0;
}
