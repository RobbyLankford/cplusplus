/* Text if a file has the specified file extension */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool test_extension(const char *file_name, const char *extension)
{
    // Move to the last dot in the file name
    while (*file_name++ != '.')
        ;

    if (!file_name || *(file_name + 1) == '\0')
        return false;

    if (strlen(file_name) != strlen(extension))
        return false;
    
    while (*file_name && *extension)
    {
        if (toupper((unsigned char) *file_name) != toupper((unsigned char) *extension))
            return false;
        
        file_name++;
        extension++;
    }

    return true;
}

int main(void)
{
    if (test_extension("memo.txt", "TXT"))
        printf("The extension matches.\n");
    else
        printf("The extension does not match.\n");

    return 0;
}
