/*
    Reads a line, with the following modifications:
    1. Skips white space before beginning to store input characters
    2. Stops reading at the first white-space character
    3. Stops reading at the first new-line character, then stores the new-line character in the string
    4. Leaves behind characters that there is no room to store
*/

#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    int ch, i = 0;
    
    // #1
    while (isspace(getchar()))
        ;

    // #2 and #4
    while (i < n && (ch = getchar()) != '\n' && !isspace(ch))
        str[i++] = ch;

    // #3
    if (ch == '\n' && i < n - 1)
        str[i++] = '\n';
    
    str[i] = '\0';

    return i;
}

int main(void)
{
    return 0;
}
