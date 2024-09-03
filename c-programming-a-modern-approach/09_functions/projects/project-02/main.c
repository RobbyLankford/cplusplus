/* Chapter 5 Project 5 that uses a function to calculate income tax */

#include <stdio.h>

float get_tax(float income);

int main(void)
{
    float income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    printf("Tax due: $%0.2f\n", get_tax(income));

    return 0;
}

float get_tax(float income)
{
    if (income <= 750.00f)
        return 0.01f * income;
    else if (income <= 2250.00f)
        return 7.50f + (0.02f * (income - 750.00f));
    else if (income <= 3750.00f)
        return 37.50f + (0.03f * (income - 2250.00f));
    else if (income <= 5250.00f)
        return 82.50f + (0.04f * (income - 3750.00f));
    else if (income <= 7000.00f)
        return 142.50f + (0.05f * (income - 5250.00f));
    else
        return 230.00f + (0.06f * (income - 7000.00f));
}