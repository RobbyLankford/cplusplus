#include <stdio.h>

main()
{
    char *line;
    int linesize = 32;
    int day, year, month;
    char monthname[20];

    line = (char *)malloc(linesize * sizeof(line));

    if (line == NULL)
    {
        printf("Unable to allocate buffer");
        return(1);
    }

    while (getline(&line, &linesize, stdin) > 0)
    {
        if (sscanf(line, "%d %s %d", &day, monthname, &year) == 3)
        {
            printf("valid: %s\n", line); /* 25 Dec 1988 format */
            break;
        }
        else if (sscanf(line, "%d/%d/%d", &month, &day, &year) == 3)
        {
            printf("valid: %s\n", line); /* mm/dd/yy format */
            break;
        }
        else
        {
            printf("invalid: %s\n", line); /* invalid format */
        }
    }

    return 0;
}