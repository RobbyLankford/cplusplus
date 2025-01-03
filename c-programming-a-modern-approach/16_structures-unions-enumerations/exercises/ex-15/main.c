#include <stdio.h>

// (a) tag for an enumeration whose values represent days of the week
enum weekdays {MONDAY = 1, TUESDAY = 2, WEDNESDAY = 3, THURSDAY = 4, FRIDAY = 5, SATURDAY = 6, SUNDAY = 7};

// (b) use typedef to define a name for part (a)
typedef enum {MONDAY = 1, TUESDAY = 2, WEDNESDAY = 3, THURSDAY = 4, FRIDAY = 5, SATURDAY = 6, SUNDAY = 7} Day;

int main(void)
{
    return 0;
}