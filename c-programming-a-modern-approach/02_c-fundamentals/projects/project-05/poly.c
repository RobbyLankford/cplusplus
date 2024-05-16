#include <stdio.h>

#define COEF5 3
#define COEF4 2
#define COEF3 -5
#define COEF2 -1
#define COEF1 7
#define COEF0 -6

int main(void)
{
    float x, result;
    float term5, term4, term3, term2, term1;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    term5 = COEF5 * (x * x * x * x * x);
    term4 = COEF4 * (x * x * x * x);
    term3 = COEF3 * (x * x * x);
    term2 = COEF2 * (x * x);
    term1 = COEF1 * (x);

    result = term5 + term4 + term3 + term2 + term1 + COEF0;

    printf("Result: %0.2f\n", result);

    return 0;
}