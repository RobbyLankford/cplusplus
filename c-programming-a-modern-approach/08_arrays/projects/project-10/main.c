/* Flight departure and arrival times */

#include <stdio.h>

#define FLIGHTS 8

int main(void)
{
    int hour, minute;
    int user_time;
    int dep_hour, dep_min, arr_hour, arr_min;
    int dep[FLIGHTS] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arr[FLIGHTS] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    user_time = (hour * 60) + minute;

    for (int i = 0; i < FLIGHTS; i++)
    {
        if (user_time <= dep[i] + (dep[i + 1] - dep[i]) / 2)
        {
            dep_hour = (dep[i] / 60) > 12 ? (dep[i] / 60) - 12 : (dep[i] / 60);
            dep_min = dep[i] % 60;

            arr_hour = (arr[i] / 60) > 12 ? (arr[i] / 60) - 12 : (arr[i] / 60);
            arr_min = arr[i] % 60;

            printf(
                "Departing at %d:%.2f %c.m. Arriving at %d:%.2d %c.m.\n",
                dep_hour, dep_min, (dep[i] / 60) > 11 ? 'p' : 'a',
                arr_hour, arr_min, (arr[i] / 60) > 11 ? 'p' : 'a'
            );

            return 0;
        }
    }

    printf("Error, no appropriate flight can be found\n");

    return 1;
}
