/* Remove file name from URL */
#include <stdio.h>
#include <string.h>

void remove_filename(char *url)
{
    char *p = url;
    while (*url)
    {
        if (*url == '/')
            p = url;
        url++;
    }

    *p = '\0';
}

int main(void)
{
    char s[] = "https://www.google.com/index.html";

    remove_filename(s);

    printf("URL without file: %s\n", s);

    return 0;
}
