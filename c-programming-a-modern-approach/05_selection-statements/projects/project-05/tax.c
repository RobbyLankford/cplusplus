#include <stdio.h>

int main(void)
{
    float amount, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &amount);

    if (amount < 750.00f)
    {
        tax = amount * 0.01;
    }
    else if (amount <= 2250.00f)
    {
        tax = 7.50f + (0.02 * (amount - 750.00f));
    }
    else if (amount <= 3750.00f)
    {
        tax = 37.50f + (0.03 * (amount - 2250.00f));
    }
    else if (amount <= 5250.00f)
    {
        tax = 82.50f + (0.04 * (amount - 3750.00f));
    }
    else if (amount <= 7000.00f)
    {
        tax = 142.50f + (0.05 * (amount - 5250.00f));
    }
    else
    {
        tax = 230.00f + (0.06 * (amount - 7000.00f));
    }

    printf("Total tax: $%.2f\n", tax);

    return 0;
}