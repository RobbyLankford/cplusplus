#include <iostream>

int main()
{
    // Allows for conditional programming at compile time
    // If heavy computation is required at runtime, each user will pay that price
    // If can move heavy computation to compile time, it will save users time

    constexpr bool condition {false};

    if constexpr (condition)
    {
        std::cout << "Condition is true!" << std::endl;
    }
    else
    {
        std::cout << "Condition is false!" << std::endl;
    }
    
    return 0;
}