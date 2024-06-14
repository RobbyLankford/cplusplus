#include <stdio.h>

int main(void)
{
    int i = 1;

    // Notice the lack of break statements...
    switch (i % 3)
    {
        case 0: printf("zero\n");
        case 1: printf("one\n");
        case 2: printf("two\n");
    }

    return 0;
}