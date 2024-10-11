#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void)
{
    // Uses integers
    /*
    char message[MAX_LEN], ch;
    int start = 0, end = 0, is_palindrome = 1;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && end < MAX_LEN - 1)
    {
        if (isalpha(ch))
            message[end++] = tolower(ch);
    }
    message[end] = '\0';

    end--;
    while (start < end)
    {
        if (message[start] != message[end])
        {
            is_palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    */

    // Uses pointers
    char message[MAX_LEN], ch;
    char *start = message, *end = message;
    int is_palindrome = 1;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && end < message + MAX_LEN -1)
    {
        if (isalpha(ch))
            *end++ = tolower(ch);
    }

    end--;
    while (start < end)
    {
        if (*start != *end)
        {
            is_palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
