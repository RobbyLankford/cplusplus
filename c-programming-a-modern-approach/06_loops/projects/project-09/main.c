#include <stdio.h>

int main(void)
{
    float loan_amt = 0.0f, int_rate = 0.0f, month_pmt = 0.0f;
    int num_pmts;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amt);

    printf("Enter interest rate: ");
    scanf("%f", &int_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &month_pmt);

    printf("Enter number of payments: ");
    scanf("%d", &num_pmts);

    for (int i = 1; i <= num_pmts; i++)
    {
        loan_amt = loan_amt - month_pmt + (loan_amt * ((int_rate / 100.0) / 12));

        printf("Balance remaining after payment %d: $%.2f\n", i, loan_amt);
    }

    return 0;
}
