#include <iostream>
#include "utility.h"

/*
    Allows us to voilate the one definition rule.
    That is, can have variables and functions with the same name across files.
    Start the declaration of these variables and functions with `inline`.
*/

void print_age_utility1();
void print_age_utility2();

int main()
{
    print_age_utility1();
    print_age_utility2();

    return 0;
}