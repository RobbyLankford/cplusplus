
/* Implement Caesar Cypher */

#include <stdio.h>

#define MAX_VALUE 80

int main(void)
{
    int n, len;
    char c;
    char sentence[MAX_VALUE] = {0};

    printf("Enter message to be encrypted: ");
    for (int i = 0, len = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++)
    {
        len++;
        sentence[i] = c;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for (int i = 0; i < len; i++)
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            sentence[i] = ((sentence[i] - 'A') + n) % 26 + 'A';
        }
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            sentence[i] = ((sentence[i] - 'a') + n) % 26 + 'a';
        }
        
        putchar(sentence[i]);
    }
    printf("\n");

    return 0;
}
