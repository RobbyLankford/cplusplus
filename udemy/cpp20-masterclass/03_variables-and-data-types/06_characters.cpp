#include <iostream>

int main()
{
    /* Characters */

    // Declare using 'char'
    char character1 {'s'};
    char character2 {'a'};
    char character3 {'n'};
    char character4 {'t'};
    char character5 {'a'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    // Characters take up one byte in memory (2^8 = 256 different values, 0-255)
    std::cout << "Size of char: " << sizeof(char) << std::endl;

    std::cout << "\n#=======#\n" << std::endl;
    
    // Can store the ASCII code and coerce to integer (65 = 'A')
    char value = 65;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;

    return 0;
}