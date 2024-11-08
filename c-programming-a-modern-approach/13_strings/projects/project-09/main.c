/* Return the number of vowels in a sentence */
#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(void)
{
    char c;
    char sentence[100];
    char *p = sentence;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && p < sentence + 99)
        *p++ = c;
    *p = '\0';

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowels = 0;
    while (*sentence)
    {
        switch(toupper(*sentence))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;
            default:
                break;
        }

        sentence++;
    }

    return vowels;
}