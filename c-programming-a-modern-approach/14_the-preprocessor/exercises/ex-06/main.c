#include <stdio.h>
#include <math.h>

// Expand into a call of printf that displays the value of the function f when called with argument x
#define DISP(f, x) printf(#f "(%g) = %g\n", (x), f(x))

// Same, but for functions with two arguments
#define DISP2(f,x,y) printf(#f "(%g, %g) = %g\n", (x), (y), f(x, y))

int main(void)
{
    // Part (a)
    DISP(sqrt, 3.0);

    // Part (b)
    DISP2(pow, 2.0, 3.0);

    return 0;
}