#include "stdio.h"

int main(void)
{
    int hour, min, time;
    int d1 = (8 * 60);
    int d2 = (9 * 60) + 43;
    int d3 = (11 * 60) + 19;
    int d4 = (12 * 60) + 47;
    int d5 = (14 * 60);
    int d6 = (15 * 60) + 45;
    int d7 = (19 * 60);
    int d8 = (21 * 60) + 45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time = (hour * 60) + min;

    printf("Closest departure time is ");

    if (time <= d1 + ((d2 - d1) / 2))
        printf("8:00 AM, arriving at 10:16 AM\n");
    else if (time < d2 + ((d3 - d2) / 2))
        printf("9:43 AM, arriving at 11:52 AM\n");
    else if (time < d3 + ((d4 - d3) / 2))
        printf("11:19 AM, arriving at 1:31 PM\n");
    else if (time < d4 + ((d5 - d4) / 2))
        printf("12:47 PM, arriving at 3:00 PM\n");
    else if (time < d5 + ((d6 - d5) / 2))
        printf("2:00 PM, arriving at 4:08 PM\n");
    else if (time < d6 + ((d7 - d6) / 2))
        printf("3:45 PM, arriving at 5:55 PM\n");
    else if (time < d7 + ((d8 - d7) / 2))
        printf("7:00 PM, arriving at 9:20 PM\n");
    else
        printf("9:45 PM, arriving at 11:58 PM\n");
    
    return 0;
}