#include <stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5

int main(void)
{
    int input, output;
    int num20, num10, num5;

    printf("Enter a dollar amount: ");
    scanf("%d", &input);

    num20 = input / 20;
    input -= (num20 * TWENTY);

    num10 = input / 10;
    input -= (num10 * TEN);

    num5 = input / 5;
    input -= (num5 * FIVE);

    printf("$20 bills: %d\n", num20);
    printf("$10 bills: %d\n", num10);
    printf(" $5 bills: %d\n", num5);
    printf(" $1 bills: %d\n", input);

    return 0;
}