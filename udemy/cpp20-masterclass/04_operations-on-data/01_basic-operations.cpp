#include <iostream>

int main()
{
    // Declarations
    int number1 {3};
    int number2 {7};
    
    // Addition
    int sum1 {number1 + number2};
    int sum2 = number1 + number2 + number1;

    std::cout << "sum1: " << sum1 << std::endl;
    std::cout << "sum2: " << sum2 << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Subtraction
    int diff1 = {number1 - number2};
    int diff2 = number1 - number2 - number2;

    std::cout << "diff1: " << diff1 << std::endl;
    std::cout << "diff2: " << diff2 << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Multiplication
    int product1 = {number1 * number2};
    int product2 = number1 * 2 * number2;

    std::cout << "product1: " << product1 << std::endl;
    std::cout << "product2: " << product2 << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Integer Division (will cut off deciimal portion)
    int quotient1 {number2 / number1};
    int quotient2 = number1 / 2;

    std::cout << "quotient1: " << quotient1 << std::endl;
    std::cout << "quotient2: " << quotient2 << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Modulus (returns remainder of the division)
    int modulus1 {number2 % number1};
    int modulus2 = number2 % 4;

    std::cout << "modulus1: " << modulus1 << std::endl;
    std::cout << "modulus2: " << modulus2 << std::endl;
    std::cout << "\n-------\n" << std::endl;

    return 0;
}