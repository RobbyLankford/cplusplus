#include <stdio.h>

// A union is a variable that may hold, at different times, objects of different types and sizes
union u_tag
{
    int ival;
    float fval;
    char *sval;
} u;

// Can nest a union within a struct
struct
{
    char *name;
    int flags;
    int utype;
    union
    {
        int ival;
        float fval;
        char *sval;
    } u;
} symtab[];


main()
{   
    // Access members of a union
    printf("%d\n", u.ival); // if u is holding an int
    printf("%f\n", u.fval); // if u is holding a float
    printf("%s\n", u.sval); // if u is holding a char *

    // Access members of a union within a struct
    int i = 0;

    symtab[i].u.ival; // if an int
    symtab[i].u.fval; // if a float
    *symtab[i].u.sval; // if a char *
    symtab[i].u.sval[0]; // if a char *

    return 0;
}
