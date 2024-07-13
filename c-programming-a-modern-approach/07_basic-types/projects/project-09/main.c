/* Convert 12-hour time to 24-hour time */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char c;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &c);

    hour = (hour == 12 ? 0 : hour);
    
    if (toupper(c) == 'P')
        hour += 12;
    
    printf("Equivalent 24-hour time: %0.2d:%0.2d\n", hour, minute);

    return 0;
}
