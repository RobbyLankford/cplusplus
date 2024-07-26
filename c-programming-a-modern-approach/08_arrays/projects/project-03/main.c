/* Test for repeated digits and allow for multiple numbers as input */

#include <stdio.h>

int main(void)
{
    int digit, occurrences[10] = {0};
    long n;

    while (1)
    {
        printf("Entera  number (0 to terminate): ");
        scanf("%ld", &n);

        if (n <= 0)
            break;
        
        while (n > 0)
        {
            digit = n % 10;
            occurrences[digit]++;
            n /= 10;
        }

        printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
        printf("Occurrences:\t");
        for (int i = 0; i < 10; i++)
            printf("%2d ", occurrences[i]);
        printf("\n");
    }

    return 0;
}
