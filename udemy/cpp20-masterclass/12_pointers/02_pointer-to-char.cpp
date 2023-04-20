#include <iostream>

int main()
{
    // You can create pointers just like previously
    char *p_char_var {nullptr};
    char char_var {'A'};
    char char_var1 {'C'};

    p_char_var = &char_var;

    std::cout << "The value stored in p_char_var is: " << *p_char_var << std::endl;
    
    p_char_var = &char_var1;

    std::cout << "The value stored in p_char_var is: " << *p_char_var << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // You can also initialize with a string literal (should declare as const char)
    const char *p_message {"Hello World!"};

    // "Hello World!" is turned into a character array, and p_message points to first character
    std::cout << "p_message: " << p_message << std::endl;
    std::cout << "*p_message: " << *p_message << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // If you want to modify the string, use character arrays
    char message[] {"Hello World!"};

    std::cout << "message: " << message << std::endl;

    message[0] = 'B';

    std::cout << "message: " << message << std::endl;

    return 0;
}