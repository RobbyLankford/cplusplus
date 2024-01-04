#include <stdio.h>

main()
{
    char *s = "hello, world";

    // Different specifications in printing 'hello, world'
    printf("%s\n", s);
    printf("%10s\n", s);
    printf("%.10s\n", s);
    printf("%-10s\n", s);
    printf("%.15s\n", s);
    printf("%-10s\n", s);
    printf("%15.10s\n", s);
    printf("%-15.10s\n", s);

    return 0;
}