#include <iostream>

int main()
{
    // Integral types less than 4 bytes do not support arithmetic operations

    // Declare variables
    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    // short int has size of 2 bytes, char has size of 1 byte
    std::cout << "Size of var1: " << sizeof(var1) << std::endl;
    std::cout << "Size of var2: " << sizeof(var2) << std::endl;
    std::cout << "Size of var3: " << sizeof(var3) << std::endl;
    std::cout << "Size of var4: " << sizeof(var4) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Compiler will automatically convert to an integer if arithmetic is used
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;
    
    std::cout << "Size of result1: " << sizeof(result1) << std::endl;
    std::cout << "Size of result2: " << sizeof(result2) << std::endl;

    return 0;
}