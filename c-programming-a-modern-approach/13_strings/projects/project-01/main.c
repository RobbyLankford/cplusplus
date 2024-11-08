/* Find smallest and largest words */
#include <stdio.h>
#include <string.h>

#define LEN 20

void get_word(void);
void get_first_word(void);
void get_next_word(void);

char smallest_word[LEN + 1], largest_word[LEN + 1], word[LEN + 1];

int main(void)
{
    get_first_word();

    while (strlen(word) != 4)
        get_next_word();
    
    printf("Smallest word: %s\nLargest word: %s\n", smallest_word, largest_word);
    
    return 0;
}

void get_word(void)
{
    printf("Enter word: ");
    scanf("%20s", word);
}

void get_first_word(void)
{
    get_word();

    strcpy(smallest_word, word);
    strcpy(largest_word, word);
}

void get_next_word(void)
{
    get_word();

    if (strcmp(word, smallest_word) < 0)
        strcpy(smallest_word, word);
    else if (strcmp(word, largest_word) > 0)
        strcpy(largest_word, word);
}