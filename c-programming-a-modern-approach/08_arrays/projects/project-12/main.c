/* Calculate SCRABBLE Score */

#include <stdio.h>
#include <ctype.h>

#define LETTERS 26

int main(void)
{
    char c;
    int sum = 0;
    int scrabble[LETTERS] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                             5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                             1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");
    while ((c = getchar()) != '\n')
        sum += scrabble[toupper(c) - 'A'];
    
    printf("Scrabble value %d\n", sum);

    return 0;
}
