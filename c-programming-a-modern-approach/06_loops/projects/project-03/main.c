#include <stdio.h>

int main(void)
{
    int num, denom, n, m, r;

    printf("Enter a fraction: ");
    scanf("%d / %d", &num, &denom);

    // Use Euclid's GCF algorithm from previous project
    m = num;
    n = denom;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    num = num / m;
    denom = denom / m;

    printf("In lowest terms: %d/%d\n", num, denom);

    return 0;
}
