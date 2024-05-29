#include <iostream>

#include "child.h"

int main()
{
    Child child(33);

    // Calls the method in Child
    child.print_var();

    // Calls the method in Parent
    child.Parent::print_var();

    std::cout << "\n-------\n" << std::endl;

    child.show_values();

    return 0;
}