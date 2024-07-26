/* Test whether two words are anagrams */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int letters[26] = {0};
    char c;
    bool match = true;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            letters[toupper(c) - 'A']++;
    }

    printf("Enter second word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            letters[toupper(c) - 'A']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] != 0)
        {
            match = false;
            break;
        }
    }

    if (match)
    {
        printf("The words are anagrams.\n");
        return 0;
    }

    printf("The words are not anagrams.\n");

    return 0;
}
