#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}

int main(void)
{
    return 0;
}
