#include <iostream>

int main()
{
    int number1 = 15; // Decimal system
    int number2 = 017; // Octal system
    int number3 = 0x0f; // Hexidecimal system
    int number4 = 0b00001111; // Binary system

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;
    std::cout << "Number 4: " << number4 << std::endl;

    return 0;
}