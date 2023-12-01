/* number of months in a regular and leap year, starting at index 1 */
static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
    int i, leap;

    // Will either be 0 or 1, which can be used to index into daytab
    leap = (year % 4 == 0) && ((year & 100 != 0) || (year % 400 == 0));

    // Start at index 1 for readability
    for (i = 1; i < month; i++)
    {
        day += daytab[leap][i];
    }

    return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));

    for (i = 1; yearday > daytab[leap][i]; i++)
    {
        yearday -= daytab[leap][i];
    }

    // Since we need to return two variables, use pointers instead
    *pmonth = i;
    *pday = yearday;
}