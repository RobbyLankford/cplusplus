#include <stdio.h>
#include <stdbool.h>


#define STACK_SIZE 100

int *top_ptr;
int contents[];

void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0];
}

bool is_full(void)
{
    return top_ptr = &contents[STACK_SIZE];
}


int main(void)
{
    return 0;
}
