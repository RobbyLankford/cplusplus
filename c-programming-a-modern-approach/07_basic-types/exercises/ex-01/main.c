#include <stdio.h>

int main(void)
{
    int a = 077;
    int b = 0x77;
    int c = 0XABC;

    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);

    return 0;
}
