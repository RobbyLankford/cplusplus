#include <stdio.h>

// A string constant is an array of characters with the null character '\0' at the end

/* strlen: return length of s */
int strlen(char s[])
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        ++i;
    }

    return i;
}

main()
{
    return 0;
}
