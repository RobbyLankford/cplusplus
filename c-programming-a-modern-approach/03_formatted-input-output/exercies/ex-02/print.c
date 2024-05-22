#include <stdio.h>

int main(void)
{
    // Exponential notation; left-justified; field size of 8; 1 digit after decimal
    printf("%-8.1e|\n", 1234567.89f);

    // Exponential notation; right-justified; field size of 10; 6 digits after decimal
    printf("%10.6e|\n", 123.456789f);

    // Fixed decimal notation; left-justified; field size of 8; 3 digits after decimal
    printf("%-8.3f|\n", 1234.5678f);

    // Fixed decimal notation; right-justified; field size of 6; 0 digits after decimal
    printf("%6.0f|\n", 123456.78f);

    return 0;
}