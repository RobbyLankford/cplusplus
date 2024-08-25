/* Return true if an array has zero, false if it does not */

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            return true;
    }

    return false;
}

int main(void)
{
    int one[] = {1, 2, 3, 4, 5};
    int two[] = {6, 7, 8, 9, 0};

    printf("Does array one have zero(s)? %s\n", has_zero(one, 5) ? "Yes" : "No");
    printf("Does array two have zero(s)? %s\n", has_zero(two, 5) ? "Yes" : "No");

    return 0;
}
