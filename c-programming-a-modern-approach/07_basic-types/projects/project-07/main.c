/* Adds, Subtracts, Multiplies, or Divides two fractions */

#include <stdio.h>

int main(void)
{
    int num1, den1, num2, den2, num_result, den_result;
    char op;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d / %d %c %d / %d", &num1, &den1, &op, &num2, &den2);

    switch (op)
    {
        case '+':
            num_result = (num1 * den2) + (num2 * den1);
            den_result = den1 * den2;

            break;
        
        case '-':
            num_result = (num1 * den2) - (num2 * den1);
            den_result = (den1 * den2);

            break;
        
        case '*':
            num_result = num1 * num2;
            den_result = den1 * den2;

            break;
        
        case '/':
            num_result = num1 * den2;
            den_result = num2 * den1;

            break;
        
        default:
            printf("Operation %c not supported.\n", op);
            return 1;
    }

    int temp, num_temp, gcd;

    num_temp = num_result, gcd = den_result;

    while (num_temp != 0)
    {
        temp = gcd % num_temp;
        gcd = num_temp;
        num_temp = temp;
    }

    if ((num_result / gcd) == (den_result / gcd))
    {
        printf("Result: %d\n", num_result / gcd);
    }
    else if (num_result > den_result)
    {
        printf("Result: %d %d/%d\n", (num_result / den_result), num_result % den_result, den_result);
    }
    else
    {
        printf("Result: %d/%d\n", num_result / gcd, den_result / gcd);
    }

    return 0;
}
