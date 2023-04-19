#include <iostream>

int main()
{
    // A variable whose value is the address of another variable in memory

    // Can store an address of a variable of type int (null pointer)
    int *p_number {};

    // Can store an address of a variable of type double (null pointer)
    double *p_fractional_number {};

    // Explicitly initialize with nullptr (recommended)
    int *p_number1 {nullptr};
    int *p_fractional_number1 {nullptr};

    // Pointers to different variables all have the same size
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*): " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Initializing pointers and assigning them data (use & to get the address of an existing variable)
    int int_var {43};
    int *p_int {&int_var};

    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int (address of int_var): " << p_int << std::endl;

    // You can change the address stored in a pointer at any time
    int int_var1 {65};
    
    p_int = &int_var1;
    std::cout << "p_int (now the address of int_var1): " << p_int << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Dereferencing a pointer: reading a variable through the pointer pointing to its address
    int* p_int2 {nullptr};
    int int_var2 {56};

    p_int2 = &int_var2;

    std::cout << "int_var2: " << int_var2 << std::endl;
    std::cout << "int_var2 (via pointer): " << *p_int2 << std::endl;

    return 0;
}