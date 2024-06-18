/* Writea  program that takes in a 24-hour time and displays it in 12-hour format */

#include <stdio.h>

int main(void)
{
    int hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour == 0 || hour == 24)
    {
        // 0:00 - 0:59 or 24:00 (12:00 AM - 12:59 AM or 12:00 AM)
        printf("Equivalent 12-hour time: 12:%02d AM\n", min);
    }
    else if (hour < 12)
    {
        // 1:00 - 11:59 (1:00 AM - 11:59 AM)
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, min);
    }
    else if (hour == 12)
    {
        // 12:00 - 12:59 (12:00 PM - 12:59 PM)
        printf("Equivalent 12-hour time: 12:%02d PM\n", min);
    }
    else
    {
        // 13:00 - 23:59 (1:00 PM - 11:59 PM)
        hour = hour - 12;
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour, min);
    }

    if (hour < 12)
    {
        // 0:00 - 11:59 ()
    }

    return 0;
}