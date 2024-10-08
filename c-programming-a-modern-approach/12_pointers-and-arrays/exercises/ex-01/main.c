#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    // A
    printf("%d\n", *(p + 3));

    // B
    printf("%d\n", *(q - 3));

    // C
    printf("%d\n", q - p);

    // D
    printf("%s\n", p < q ? "true" : "false");

    // E
    printf("%s\n", *p < *q ? "true" : "false");

    return 0;
}
