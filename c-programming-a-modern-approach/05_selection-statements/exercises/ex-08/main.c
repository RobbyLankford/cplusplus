#include <stdio.h>

int main(void)
{
    int age;
    _Bool teenager;
    
    // Can replace:
    if (age >= 13)
        if (age <= 19)
            teenager = true;
        else
            teenager = false;
    else if (age < 13)
        teenager = false;

    // With a single statement:
    teenager = age >= 13 && age <= 19;

    return 0;
}