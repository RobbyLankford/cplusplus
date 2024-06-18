#include "stdio.h"

int main(void)
{
    int i1, i2, i3, i4;
    int min, max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    max = i1;
    max = i2 > max ? i2 : max;
    max = i3 > max ? i3 : max;
    max = i4 > max ? i4 : max;
    
    min = i1;
    min = i2 < min ? i2 : min;
    min = i3 < min ? i3 : min;
    min = i4 < min ? i4 : min;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}