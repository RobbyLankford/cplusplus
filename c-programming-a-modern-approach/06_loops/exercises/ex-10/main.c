/* How to replace a continue statement by an equivalent goto statement */

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
            //continue;
            goto end;
        
        printf("%d ", i);
        
        end: printf("Done!\n");
    }

    return 0;
}
