#include <stdio.h>

int main(void)
{
    // Must use `*p` to declare a variable as a pointer to a memory address
    int n = 50;
    int *p = &n;

    // Do not include the `*` to print out the pointer to the memory address
    printf("%p\n", p);
}
