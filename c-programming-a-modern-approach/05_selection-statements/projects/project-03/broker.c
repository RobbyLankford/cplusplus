/* Modified broker program */

#include <stdio.h>

int main(void)
{   
    int shares;
    float price, commission, value, compare;

    // Calculate value of transaction
    printf("Enter number of shares: ");
    scanf("%d", &shares);

    printf("Enter price per share: ");
    scanf("%f", &price);

    value = shares * price;

    // Calculate commission
    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;
    
    if (commission < 39.00f)
        commission = 39.00f;

    // Calculate rival commission
    if (shares < 2000)
        compare = 33.00f + (0.03f * shares);
    else
        compare = 33.00f + (0.02f * shares);
    
    // Print results
    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", compare);

    return 0;
}