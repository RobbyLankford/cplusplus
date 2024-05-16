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

    printf("Enter a value for x: ");
    scanf("%f", &x);

    result = (((((((((COEF5 * x) + COEF4) * x) + COEF3) * x) + COEF2)  * x) + COEF1) * x) + COEF0;

    printf("Result: %0.2f\n", result);

    return 0;
}