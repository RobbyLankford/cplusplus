#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

// Part (a): GENERIC_MAX(long) expands to...
/*long long_max(long x, long y)
{
    return x > y ? x : y;
}
*/

GENERIC_MAX(long)

// Part (b)
// Cannot be used with types that include a space character, such as unsigned long unsigned long_max()

// Part (c)
// Can define an equivalent type that does NOT have spaces in its name
typedef unsigned long u_long;

GENERIC_MAX(u_long)

int main(void)
{
    return 0;
}