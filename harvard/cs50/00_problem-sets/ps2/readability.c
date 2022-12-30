// Implement the Coleman-Liau index to estimate reading level

#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Average letters per 100 words
    float L = 0.0588 * ((float) letters / (float) words) * 100;

    // Average sentences per 100 words
    float S = 0.296 * ((float) sentences / (float) words) * 100;

    // Coleman-Liau index
    int index = (int) round(L - S - 15.8);

    // Only want values between 1st grade and 16th grade (freshman in college)
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

    return 0;
}

// Count the number of letters in a string of text
int count_letters(string text)
{
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]) != 0)
        {
            letters++;
        }
    }

    return letters;
}

// Count the number of words in a string of text
int count_words(string text)
{
    int words = 1;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }

    return words;
}

// Count the number of sentences in a string of text
int count_sentences(string text)
{
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        // For '.', we are allowed to assume that things like 'Mr.' and 'Ms.' count as a sentence
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    return sentences;
}