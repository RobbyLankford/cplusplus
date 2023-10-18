#include <stdio.h>

// The enumeration constant is a list of constant integer values

enum boolean {NO, YES};

enum escapes {BELL = '\a', BACKSPACE = '\b', TAB = '\t',
              NEWLINE = '\n', VTAB = '\v', RETURN = '\r'};

enum months {JAN = 1, FEB, MAR, APR, MAY, JUN,  /* JAN = 1, FEB = 2, and so on */
             JUL, AUG, SEP, OCT, NOV, DEC};

main()
{
    return 0;
}
