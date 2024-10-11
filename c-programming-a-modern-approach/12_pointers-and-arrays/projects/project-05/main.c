#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

void reverse_words(char *start, char term)
{
    char *end = start;
    char *ptr, *word_start, *word_end;

    while (*end != term && *end != '\0')
        end++;
    
    ptr = end - 1;

    while (ptr >= start)
    {
        // Skip spaces
        while (ptr >= start && isspace(*ptr))
            ptr--;

        // Mark the end of the word
        word_end = ptr;

        // Find the start of the word
        while (ptr >= start && !isspace(*ptr))
            ptr--;

        // Print the word
        word_start = ptr + 1;
        while (word_start <= word_end)
            putchar(*word_start++);
        
        // Print a space if there are more words
        if (ptr >= start)
            putchar(' ');
    }

    putchar(term);
    putchar('\n');
}

int main(void)
{
    char sentence[MAX_LEN];
    char ch, term;
    char *ptr = sentence;

    printf("Enter a sentence: ");

    while (1)
    {
        ch = getchar();
        if (ch == '.' || ch == '?' || ch == '!')
        {
            term = ch;

            break;
        }

        *ptr++ = ch;
    }

    *ptr = '\0';

    printf("Reversal of sentence: ");

    reverse_words(sentence, term);

    return 0;
}