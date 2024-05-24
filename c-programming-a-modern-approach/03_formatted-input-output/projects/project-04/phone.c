#include <stdio.h>

int main(void)
{   
    int area_code, prefix, line_num;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &prefix, &line_num);

    printf("You entered %d.%d.%d\n", area_code, prefix, line_num);

    return 0;
}