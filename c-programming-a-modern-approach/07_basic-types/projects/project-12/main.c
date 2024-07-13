/* A program that evaluates an expression */

#include <stdio.h>

int main(void)
{
    double num = 0.0, total = 0.0;
    char c;

    printf("Enter an expression: ");

    // First number in the sequence starts the total
    scanf("%lf", &total);

    // Find all the operators and update the total appropriately
    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
            case '+':
                scanf("%lf", &num);
                total += num;

                break;
            
            case '-':
                scanf("%lf", &num);
                total -= num;

                break;
            
            case '*':
                scanf("%lf", &num);
                total *= num;

                break;
            
            case '/':
                scanf("%lf", &num);
                total /= num;

                break;
            
            default:
                break;
        }
    }

    printf("Value of expression: %0.1f\n", total);

    return 0;
}
