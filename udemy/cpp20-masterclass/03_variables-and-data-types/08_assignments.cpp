#include <iostream>

int main()
{
    /* Assigning New Values */
    
    // Declare and initialize
    int var1 {123};
    std::cout << "var1: " << var1 << std::endl;

    // Assign new value (do not need to declare data type)
    var1 = 55;
    std::cout << "var1: " << var1 << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    // Declare and initialize
    double var2 {44.55};
    std::cout << "var2: " << var2 << std::endl;

    // Assign new value using a different method
    var2 = 99.99;
    std::cout << "var2: " << var2 << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    // Declare and initialize
    bool state {false};
    std::cout << std::boolalpha;
    std::cout << "state: " << state << std::endl;

    // Assign new value
    state = true;
    std::cout << "state: " << state << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    // Be careful with auto type deduction
    auto var3 {333u};
    std::cout << "var3: " << var3 << std::endl;

    // Different types will not throw an error, but will use garbage values
    var3 = -22;
    std::cout << "var3: " << var3 << std::endl;

    return 0;
}