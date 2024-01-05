#include <stdio.h>

/* reading dates */
main()
{
    int day, year;
    char monthname[20];

    scanf("%d %s %d", &day, monthname, &year);

    printf("%s %d %d\n", monthname, day, year);

    return 0;
}