#include <stdio.h>

int main(void)
{
    int knots;

    printf("Enter wind speed (knots): ");
    scanf("%d", &knots);

    if (knots < 0)
    {
        printf("Wind speed must be positive\n");

        return -1;
    }
    else if (knots < 1)
    {
        printf("Wind Force: Calm\n");
    }
    else if (knots <= 3)
    {
        printf("Wind Force: Light Air\n");
    }
    else if (knots <= 27)
    {
        printf("Wind Force: Breeze\n");
    }
    else if (knots <= 47)
    {
        printf("Wind Force: Gale\n");
    }
    else if (knots <= 63)
    {
        printf("Wind Force: Storm\n");
    }
    else
    {
        printf("Wind Force: Hurricane\n");
    }

    return 0;
}