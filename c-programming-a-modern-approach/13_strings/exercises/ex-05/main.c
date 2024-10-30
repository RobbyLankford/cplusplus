// Capitalizes all letters in its argument

#include <stdio.h>
#include <ctype.h>

void capitalize_array(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
            toupper(str[i]);
        
        i++;
    }
}

void capitalize_pointer(char *str)
{
    char *c = str;
    while (c != '\0')
    {
        if (isalpha(c))
            toupper(c);
        
        c++;
    }
}

int main(void)
{
    return 0;
}
