/*
    Write a program that asks the user to enter a three-digit number.
    Then print the number with the digits reversed.
*/

#include <stdio.h>

int main(void)
{
    int num, d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    d1 = (num / 100);
    num -= (d1 * 100);

    d2 = (num / 10);
    num -= (d2 * 10);

    d3 = num;

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}