#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

// (a) returns the day of the year (between 1 and 366)
int day_of_year(struct date d)
{
    const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int res = 0;
    
    if (d.month > 1 && ((d.year % 4 == 0 && d.year & 100 != 0) || d.year % 400 == 0))
        res++;
    
    for (int i = 0; i < d.month; i++)
        res += days_month[i];
    
    return res + d.day;
}

// (b) returns -1 if d1 is an earlier date than d2, +1 if d1 is a later date than d2, and 0 if d1 and d2 are the same
int compare_dates(struct date d1, struct date d2)
{
    int d1_day = day_of_year(d1);
    int d2_day = day_of_year(d2);

    if (d1_day > d2_day)
        return -1;
    else if (d1_day < d2_day)
        return 1;
    else
        return 0;
}

int main(void)
{
    return 0;
}