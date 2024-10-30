// Modifies a string by replacing every occurrence of `foo` by `xxx`

#include <stdio.h>

void censor(char *str)
{
    char *c = str;
    while ((c + 2) != '\0')
    {
        if (*c == 'f' && *(c + 1) == 'o' && *(c + 2) == 'o')
            *c = *(c + 1) = *(c + 2) = 'x';
        
        c++;
    }
}

int main(void)
{
    return 0;
}
