#include <stdio.h>

// Another method: use a struct
struct 
{
    unsigned int is_keyword : 1;
    unsigned int is_extern  : 1;
    unsigned int is_static  : 1;
} flags;

main()
{
    // Allows for a more natural way of writing
    
    // Turn on the EXTERNAL and STATIC bits
    flags.is_extern = flags.is_static = 1;

    // Turn off the EXTERNAL and STATIC bits
    flags.is_extern = flags.is_static = 0;

    // Is true if both bits are off
    if (flags.is_extern == 0 && flags.is_static == 0)
    {
        /* ... */
    }

    return 0;
}