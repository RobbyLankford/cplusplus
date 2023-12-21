#include <stdio.h>

// One method: define "masks" corresponding to relevant bit positions
#define KEYWORD  01
#define EXTERNAL 02
#define STATIC   04     /* must be powers of two */

// Can also be defined as:
/* enum {KEYWORD = 01, EXTERNAL = 02, STATIC = 04}; */

main()
{
    int flags;
   
    // Turn on the EXTERNAL and STATIC bits
    flags |= EXTERNAL | STATIC;

    // Turn off the EXTERNAL and STATIC bits
    flags &= -(EXTERNAL | STATIC);

    // Is true if both bits are off
    if ((flags & (EXTERNAL | STATIC)) == 0)
    {
        /* ... */
    }

    return 0;
}