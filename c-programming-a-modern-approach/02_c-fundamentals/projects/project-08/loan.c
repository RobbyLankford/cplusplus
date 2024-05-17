#include <stdio.h>

int main(void)
{
    float loan, interest, payment;
    float rate;
    float first, second, third;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate = 1 + ((interest / 100) / 12);

    first = (loan * rate) - payment;
    second = (first * rate) - payment;
    third = (second * rate) - payment;

    printf("Balance remaining after first payment: $%0.2f\n", first);
    printf("Balance remaining after second payment: $%0.2f\n", second);
    printf("Balance remaining after third payment: $%0.2f\n", third);

    return 0;
}