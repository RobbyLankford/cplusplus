#include <iostream>

/*
    Functions that have the potential to be evaluated at compile time.
    Doing so would save the user time when running your application.
    Must mark the function and the resulting value as constexpr.
*/

constexpr int get_value(int multiplier)
{
    return 3 * multiplier;
}

int main()
{
    // Run at compile time
    constexpr int result = get_value(4);

    std::cout << "result: " << result << std::endl;

    // Cannot always run at compile time, for example if input is now known until run time
    int some_var {5};
    int new_result = get_value(some_var);

    std::cout << "new result: " << new_result << std::endl;
    
    return 0;
}