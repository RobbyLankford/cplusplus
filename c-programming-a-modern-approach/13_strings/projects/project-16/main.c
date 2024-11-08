/* Reverses a message */
#include <stdio.h>

#define LEN 100

void reverse(char *message);

int main(void)
{
    char message[LEN];
    char c;
    char *p = message;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && p < message + LEN)
        *p++ = c;
    *p = '\0';

    reverse(message);

    printf("Reversal is: %s\n", message);

    return 0;
}

void reverse(char *message)
{
    char *p = message, *q = message;
    char temp;

    while (*q)
        q++;
    q--;

    while (p < q)
    {
        temp = *p;
        *p = *q;
        *q = temp;

        p++;
        q--;
    }
}