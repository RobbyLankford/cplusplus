/*
    Write a program that asks the user to enter a two-digit number.
    Then print the number with the digits reversed.
*/

#include <stdio.h>

int main(void)
{
    int num, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    d1 = (num / 10);
    d2 = (num % 10);

    printf("The reversal is: %d%d\n", d2, d1);

    return 0;
}