#include <stdio.h>

int temperatures[7][24];

int main(void)
{
    int i = 0; // Row of the temperatures array
    
    int *p = temperatures[i];
    while (p < temperatures[i + 1])
        printf("%d ", *p++);
    printf("\n");

    return 0;
}
