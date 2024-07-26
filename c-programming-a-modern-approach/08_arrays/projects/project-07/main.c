/* Print row and column sums of a 5x5 array */

#include <stdio.h>

int main(void)
{
    int n[5][5];
    int total;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }

    printf("\nRow Totals: ");
    for (int i = 0; i < 5; i++)
    {
        total = 0;
        for (int j = 0; j < 5; j++)
            total += n[i][j];
        
        printf("%d ", total);
    }

    printf("\nColumn totals: ");
    for (int j = 0; j < 5; j++)
    {
        total = 0;
        for (int i = 0; i < 5; i++)
            total += n[i][j];
        
        printf("%d ", total);
    }

    printf("\n");

    return 0;
}
