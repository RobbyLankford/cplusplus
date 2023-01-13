// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include ".vscode/cs50.h"
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// Calculate half of the total bill
float half(float bill, float tax, int tip)
{
    float tax_pct = tax / 100;
    float tip_pct = (float) tip / 100;

    float bill_total = bill * (1 + tax_pct);
    float total_due = bill_total * (1 + tip_pct);

    float half_due = total_due / 2;

    return half_due;
}
