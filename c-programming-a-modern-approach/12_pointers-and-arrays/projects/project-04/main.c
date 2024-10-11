#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void)
{
    char message[MAX_LEN], ch;
    char *ptr = message, *start = message;
    int is_palindrome = 1;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ptr < message + MAX_LEN - 1)
    {
        if (isalpha(ch))
            *ptr++ = tolower(ch);
    }

    ptr--;
    while (start < ptr)
    {
        if (*start != *ptr)
        {
            is_palindrome = 0;

            break;
        }

        start++;
        ptr--;
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
