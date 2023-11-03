#include <stdio.h>

main()
{
    int n, i;
    int s[n];

    if (n >= 0)
    {
        for (i = 0; i < n; i++)
        {
            if (s[i] > 0)
            {
                printf("...");
                return i;
            }
        }
    }
    else
    {
        printf("error -- n is negative\n");
    }

    return 0;
}