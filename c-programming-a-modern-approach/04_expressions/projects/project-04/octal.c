#include <stdio.h>

int main(void)
{
    int num;
    int d1, d2, d3, d4, d5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    d1 = num % 8;
    d2 = (num / 8) % 8;
    d3 = (num / (8 * 8)) % 8;
    d4 = (num / (8 * 8 * 8)) % 8;
    d5 = (num / (8 * 8 * 8 * 8)) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", d5, d4, d3, d2, d1);

    return 0;
}