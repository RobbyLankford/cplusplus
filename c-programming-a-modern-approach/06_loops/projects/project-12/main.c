#include <stdio.h>

int main(void)
{
    int i, denom;
    float e = 1.0f, epsilon, term;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    i = 1;
    while (1)
    {
        denom = 1;
        for (int j = 1; j <= i; j++)
            denom *= j;
        
        term = 1.0f / denom;

        if (term < epsilon)
            break;
        
        e += term;
        i++;
    }

    printf("Approximation of e: %.4f\n", e);

    return 0;
}
