/* Write a program that asks the user to enter a dollars-and-cents amount,
   then displays the amount with 5% tax added */

#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    float input, final;

    printf("Enter an amount: ");
    scanf("%f", &input);

    final = input * (1 + TAX);

    printf("With tax added: $%0.2f\n", final);

    return 0;
}