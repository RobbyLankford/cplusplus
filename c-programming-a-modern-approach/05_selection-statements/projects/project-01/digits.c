/* Write a program that calculates how many digits a number contains */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Book suggests using if statements and to assume no more than 4 digits
    if (num < 0)
    {
        printf("Number must be positive\n");

        return -1;
    }
    else if (num < 10)
    {
        printf("The number %d has 1 digit\n", num);
    }
    else if (num < 100)
    {
        printf("The number %d has 2 digits\n", num);
    }
    else if (num < 1000)
    {
        printf("The number %d has 3 digits\n", num);
    }
    else
    {
        printf("The number %d has 4 digits\n");
    }

    return 0;
}