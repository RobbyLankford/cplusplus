#include <stdio.h>

int main(void)
{
    int n, weekday, day;

    printf("Enter number of days in month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &weekday);

    printf("\n Su Mo Tu Wd Th Fr Sa\n");

    for (int i = 1, day = 1; i <= n + weekday - 1; i++)
    {
        if (i < weekday)
            printf("   ");
        else
            printf("%3d", day++);
        
        if (i % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
