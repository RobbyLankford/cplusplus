#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
    int first_sum, second_sum, total, check;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);

    first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    second_sum = i2 + i4 + i6 + i8 + i10;
    total = (first_sum * 3) + second_sum;
    check = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", check);

    return 0;
}