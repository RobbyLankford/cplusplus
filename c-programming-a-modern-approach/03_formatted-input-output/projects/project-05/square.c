#include <stdio.h>

int main(void)
{
    // Should really use an array, but those have not been used in the book yet
    int num1, num2, num3, num4, num5, num6, num7, num8;
    int num9, num10, num11, num12, num13, num14, num15, num16;
    int rowsum1, rowsum2, rowsum3, rowsum4;
    int colsum1, colsum2, colsum3, colsum4;
    int diagsum1, diagsum2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf(
        "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, 
        &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16
    );

    rowsum1 = num1 + num2 + num3 + num4;
    rowsum2 = num5 + num6 + num7 + num8;
    rowsum3 = num9 + num10 + num11 + num12;
    rowsum4 = num13 + num14 + num15 + num16;

    colsum1 = num1 + num5 + num9 + num13;
    colsum2 = num2 + num6 + num10 + num14;
    colsum3 = num3 + num7 + num11 + num15;
    colsum4 = num4 + num8 + num12 + num16;

    diagsum1 = num1 + num6 + num11 + num16;
    diagsum2 = num4 + num7 + num10 + num13;

    printf("%2d %2d %2d %2d\n", num1, num2, num3, num4);
    printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
    printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
    printf("%2d %2d %2d %2d\n", num13, num14, num15, num16);

    printf("\n");

    printf("Row sums: %d %d %d %d\n", rowsum1, rowsum2, rowsum3, rowsum4);
    printf("Column sums: %d %d %d %d\n", colsum1, colsum2, colsum3, colsum4);
    printf("Diagonal sums: %d %d\n", diagsum1, diagsum2);

    return 0;
}