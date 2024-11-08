/* Return average length of words in a sentence */
#include <stdio.h>
#include <ctype.h>

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Average word length: %0.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int words = 0, length = 0;
    while (*sentence)
    {
        while (*sentence && !isspace(*sentence))
        {
            sentence++;
            length++;
        }

        words++;

        while (*sentence && isspace(*sentence))
            sentence++;
    }

    return (double) length / words;
}