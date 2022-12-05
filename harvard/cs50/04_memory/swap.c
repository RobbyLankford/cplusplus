#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // Send addresses of x and y
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a; // save item in memory address of a
    *a = *b; // assign item in memory address of b to memory address of a
    *b = tmp; // assign item that was in memory address of a to memory address of b
}