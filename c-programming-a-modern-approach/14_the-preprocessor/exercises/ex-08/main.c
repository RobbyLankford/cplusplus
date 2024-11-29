#include <stdio.h>
#include <string.h>

// Expands into a string containing the current line number and file name
// LINE_FILE -> "Line 10 of file foo.c"
#define STRINGIZE(x) #x
#define EXPAND_MACRO(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)

int main(void)
{
    const char *str = LINE_FILE;

    printf("%s\n", str); // Should be "Line 12 of file main.c"

    return 0;
}