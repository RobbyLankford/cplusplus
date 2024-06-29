#include <stdio.h>

int main(void)
{
    int n, denom;
    float e = 1.0f;

    printf("Enter integer n: ");
    scanf("%d", &n);

    for (int i = 1; i<= n; i++)
    {
        denom = 1;
        for (int j = 1; j <= i; j++)
            denom *= j;
        
        e += (1.0f / denom);
    }

    printf("Approximation of e: %.4f\n", e);

    return 0;
}
