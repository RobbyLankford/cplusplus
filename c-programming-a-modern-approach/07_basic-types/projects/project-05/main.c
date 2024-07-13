/* Calculate SCRABBLE word scores */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int sum = 0;

    printf("Enter a word: ");

    while ((c = getchar()) != '\n')
    {
        switch (toupper(c))
        {
            // 1 Point
            case 'A': case 'E': case 'I': case 'L': case 'N': 
            case 'O': case 'R': case 'S': case 'T': case 'U':
                sum += 1;
                break;
            
            // 2 Points
            case 'D': case 'G':
                sum += 2;
                break;
            
            // 3 Points
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            
            // 4 Points
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            
            // 5 Points
            case 'K':
                sum += 5;
                break;
            
            // 8 Points
            case 'J': case 'X':
                sum += 8;
                break;
            
            // 10 Points
            case 'Q': case 'Z':
                sum += 10;
                break;
            
            default:
                break;
        }
    }

    printf("Scrabble value: %d\n", sum);

    return 0;
}
