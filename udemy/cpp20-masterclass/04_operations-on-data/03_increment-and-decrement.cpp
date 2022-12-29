#include <iostream>

int main()
{
    // Declarations
    int value {5};

    // Basic incrementing and decrementing
    value = value + 1;
    std::cout << "Increment: " << value << std::endl;

    value = 5;
    value = value - 1;
    std::cout << "Decrement: " << value << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Postfix incrementing and decrementing
    value = 5;
    std::cout << "value++ does not change it right away: " << value++ << std::endl;
    std::cout << "But now the value is changed: " << value << std::endl;
    std::cout << std::endl;

    value = 5;
    std::cout << "value-- does not change it right away: " << value-- << std::endl;
    std::cout << "But now the value is changed: " << value << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Prefix incrementing and decrementing
    value = 5;
    std::cout << "++value increments in-place right away: " << ++value << std::endl;
    std::cout << std::endl;

    value = 5;
    std::cout << "--value decrements in-place right away: " << --value << std::endl;

    return 0;
}