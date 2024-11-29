#include <stdio.h>

// (a) Has the value 1 if both x and y fall between 0 and n-1, inclusive
#define CHECK(x,y,n) (((x)>=0 && (x)<=(n)-1 && (y)>= 0 && (y)<=(n)-1) ? 1 : 0)

// (b) Finds the median of x, y, and z
#define MEDIAN(x, y, z) ((x)>(y) ? ((y)>(z) ? (y) : ((x)<(z) ? (x) : (z))) : ((x)>(z) ? (x) : ((y)<(z) ? (y) : (z))))

// (c) Calculates the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
#define POLYNOMIAL(x) (   (3*(x)*(x)*(x)*(x)*(x)) \
                        + (2*(x)*(x)*(x)*(x))     \
                        - (5*(x)*(x)*(x))         \
                        - ((x)*(x))               \
                        + (7*(x))                 \
                        - 6 )

int main(void)
{
    // Part (a)
    printf("%i\n", CHECK(2, 3, 5));
    printf("%i\n", CHECK(2, 3, 1));

    // Part (b)
    printf("%i\n", MEDIAN(2, 3, 1));

    // Part (c)
    printf("%i\n", POLYNOMIAL(3));

    return 0;
}