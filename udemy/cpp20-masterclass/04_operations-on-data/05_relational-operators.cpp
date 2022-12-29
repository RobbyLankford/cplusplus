#include <iostream>

int main()
{
    // Declarations
    int number1 {45};
    int number2 {60};

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Make booleans render as true/false instead of 1/0
    std::cout << std::boolalpha;

    // Compare variables by value (use parentheses to avoid errors)
    std::cout << "number1 < number2: " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2: " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2: " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2: " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2: " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2: " << (number1 != number2) << std::endl;

    return 0;
}