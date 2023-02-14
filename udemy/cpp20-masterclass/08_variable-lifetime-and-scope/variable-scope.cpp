#include <iostream>

/*
    Scope: Defines where a variable name can be mentioned
    Will get a compiler error if try to use a variable that is not in scope
*/

int global_var {23};

void some_function()
{
    int local_var {10};

    std::cout << "Inside some_function: global_var: " << global_var << std::endl;
    std::cout << "Inside some_function: local_var: " << local_var << std::endl;
}

void some_other_function()
{
    // Will cause an error b/c local_var is not in scope inside this function
    // local_var = 5;
}

int main()
{
    some_function();

    std::cout << "Inside main function: global_var: " << global_var << std::endl;

    // Will cause an error b/c local_var is not in scope inside this function
    // std::cout << "Inside main function: local_var: " << local_var << std::endl;

    return 0;
}