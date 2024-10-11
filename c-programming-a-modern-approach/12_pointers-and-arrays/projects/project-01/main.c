#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    /* Does not use pointers */
    /*
    char message[MAX_LEN], ch;
    int count = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && count < MAX_LEN - 1)
        message[count++] = ch;
    message[count] = '\0';

    printf("Reversal is: ");
    for (int i = count - 1; i >= 0; i--)
        putchar(message[i]);
    printf("\n");
    */

    /* Uses Pointers */
    char message[MAX_LEN], ch;
    char *ptr = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ptr < message + MAX_LEN - 1)
        *ptr++ = ch;
    *ptr = '\0';

    printf("Reversal is: ");
    while (--ptr >= message)
        putchar(*ptr);
    printf("\n");

    return 0;
}
