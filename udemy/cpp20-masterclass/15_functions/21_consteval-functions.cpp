#include <iostream>

/*
    Ensures that the function gets evaluated at compile time.
    If it cannot be evaluated at compile time, it will throw a compiler error.
    Unlike constexpr, the result does not need to be prefixed with consteval.
*/

consteval int get_value(int multiplier)
{
    return 3 * multiplier;
}

int main()
{
    // Works because 4 is a literal so function can be evaluated at compile time.
    int result = get_value(4);
    std::cout << "result: " << result << std::endl;

    // Compiler error because the value of some_var is unavailable at compile time.
    int some_var {5};
    // int new_result = get_value(some_var);
    
    return 0;
}