/* Shrink array from exercise 6 as much as possible */

#include <stdio.h>

int main(void)
{
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                                 {0, 1, 1},
                                 {1, 1, 0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1},
                                 {0, 1, 1, 0, 0, 1, 1},
                                 {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};

    return 0;
}
