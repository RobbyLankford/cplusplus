/* Find the file extension of a file */
#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while (*file_name)
    {
        if (*file_name++ == '.')
        {
            strcpy(extension, file_name);

            return;
        }
    }

    strcpy(extension, "");
}