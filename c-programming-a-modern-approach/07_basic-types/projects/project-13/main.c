/* Calculate average word length for a sentence */

#include <stdio.h>

int main(void)
{
    char c;
    double length = 0.0;

    // Automatically count first word
    int words = 1;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        // Increment number of words when a space between them is found
        if (c == ' ')
        {
            words++;
        }

        // Increment the number of characters in the sentence
        else
        {
            length++;
        }
    }

    printf("Average word length: %0.1f\n", length / words);

    return 0;
}
