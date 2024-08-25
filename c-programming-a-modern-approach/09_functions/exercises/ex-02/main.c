/* Check if both x and y fall between 0 and n - 1 */

#include <stdio.h>
#include <stdbool.h>

bool check(int x, int y, int n)
{
    bool x_valid, y_valid;

    x_valid = (x >= 0) && (x <= n - 1);
    y_valid = (y >= 0) && (y <= n - 1);

    if (x_valid && y_valid)
    {
        return true;
    }

    return false;
}

int main(void)
{
    printf("Check x = 5, y = 6, n = 10: %s\n", check(5, 6, 10) ? "true" : "false");

    return 0;
}
