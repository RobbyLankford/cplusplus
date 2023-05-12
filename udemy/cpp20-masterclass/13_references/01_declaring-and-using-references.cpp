#include <iostream>

int main()
{
    // A reference is an alias variable used to reference original variable
    
    int int_value {45};
    double double_value {33.65};

    // Must declare and initialize in a single statement
    int& ref_to_int_value1 {int_value};
    int& ref_to_int_value2 = int_value;
    double& ref_to_double_value {double_value};

    std::cout << "int_value: " << int_value << std::endl;
    std::cout << "double_value: " << double_value << std::endl;

    std::cout << std::endl;

    // Two references referencing the same variable
    std::cout << "ref_to_int_value1: " << ref_to_int_value1 << std::endl;
    std::cout << "ref_to_int_value2: " << ref_to_int_value2 << std::endl;

    std::cout << "ref_to_double_value: " << ref_to_double_value << std::endl;

    std::cout << std::endl;

    // References have the same address as the variable that is being referenced
    std::cout << "&int_value: " << &int_value << std::endl;
    std::cout << "&ref_to_int_value1: " << &ref_to_int_value1 << std::endl;
    std::cout << "&ref_to_int_value2: " << &ref_to_int_value2 << std::endl;

    std::cout << std::endl;

    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_to_double_value: " << &ref_to_double_value << std::endl;

    std::cout << std::endl;

    // Object sizes are the same
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
    std::cout << "sizeof(ref_to_int_value1): " << sizeof(ref_to_int_value1) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // If reference is modified, the original variable is modified
    ref_to_int_value1 = 55;

    std::cout << "int_value: " << int_value << std::endl;
    std::cout << "ref_to_int_value1: " << ref_to_int_value1 << std::endl;
    std::cout << "ref_to_int_value2: " << ref_to_int_value2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // If original variable is modified, the references are modified
    double_value = 9.99;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_to_double_value: " << ref_to_double_value << std::endl;

    return 0;
}