#include <stdio.h>

// Generates call of fprintf "fprintf(stderr, "Range error: index = %d\n", index)"
#define ERROR(format,...) (fprintf(stderr, (format), __VA_ARGS__))

int main(void)
{
    int index = 42;
    ERROR("Range error: index = %d\n", index);
    
    return 0;
}