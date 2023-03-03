#include <iostream>

int main()
{
    // Ternary Expression: alternative way to do if else (syntactic sugar)
    
    // Using conditional expressions
    int max {};
    int a {35};
    int b {200};

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    std::cout << "Using regular if statement, max = " << max << std::endl;

    // Using ternary expression
    max = (a > b) ? a : b;

    std::cout << std::endl;
    std::cout << "Using regular ternary expression, max = " << max << std::endl;

    // Ternary initialization
    bool fast = false;
    int speed {fast ? 300 : 150};

    std::cout << std::endl;
    std::cout << "The speed is: " << speed << std::endl;

    // Implicit Conversion
    auto max1 = (a > b) ? a : 22.5f;

    std::cout << std::endl;
    std::cout << "max: " << max1 << std::endl;

    return 0;
}