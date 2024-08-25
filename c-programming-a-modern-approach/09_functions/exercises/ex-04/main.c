/* Function that returns the day of the year (1-366) from a month/day/year input */

#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    for (int i = 1; i < month; i++)
    {
        switch(i)
        {
            // 31 day months
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day += 31;
                break;
            
            // 30 day months
            case 4: case 6: case 9: case 11:
                day += 30;
                break;
            
            // February
            case 2:
                if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                {
                    // Leap Years
                    day += 29;
                }
                else
                {
                    // All other years
                    day += 28;
                }
        }
    }

    // Include the actual day
    return day;
}

int main(void)
{
    int day, month, year;

    printf("Enter date as (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Day of the year: %d\n", day_of_year(month, day, year));

    return 0;
}
