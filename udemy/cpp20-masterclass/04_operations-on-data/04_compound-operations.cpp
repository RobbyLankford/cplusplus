#include <iostream>

int main()
{
    // Declarations
    int value {45};

    std::cout << "Value: " << value << std::endl;
    std::cout << std::endl;

    // Perform a calculation and assign the result back to the variable in one command

    // Addition
    value += 5;
    std::cout << "Value (+= 5): " << value << std::endl;

    // Subtraction
    value -= 5;
    std::cout << "Value (-= 5): " << value << std::endl;

    // Multiplication
    value *= 2;
    std::cout << "Value (*= 2): " << value << std::endl;

    // Division
    value /= 3;
    std::cout << "Value (/= 3): " << value << std::endl;

    // Modulus
    value %= 11;
    std::cout << "Value (%= 11): " << value << std::endl;
    
    return 0;
}