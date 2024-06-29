#include <stdio.h>

int main(void)
{
    float max = 0.0f;
    float cur;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &cur);

        if (cur > max)
            max = cur;

    } while (cur > 0);
    
    printf("The largest number entered was %.2f\n", max);

    return 0;
}