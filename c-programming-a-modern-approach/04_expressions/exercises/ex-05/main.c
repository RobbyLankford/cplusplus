#include <stdio.h>

/* Use C89 standard */

int main(void)
{
    printf("8 %% 5: %d\n", 8 % 5);
    printf("-8 %% 5: %d\n", -8 % 5);
    printf("8 %% -5: %d\n", 8 % -5);
    printf("-8 %% -5 %d\n", -8 % -5);

    return 0;
}