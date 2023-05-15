#include <iostream>

int main()
{
    /*
        References:
            - Do not use dereferencing for reading and writing
            - Cannot be changed to reference something else
            - Must be initialized at declaration
        
        Pointers:
            - Must go through dereferencing operator to read/write
            - Can be changed to point somewhere else
            - Can be declared un-initialized
    */

    double double_value {12.34};
    
    double& ref_double_value {double_value}; // Reference
    double *p_double_value {&double_value}; // Pointer
    
    // Reading
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Writing
    *p_double_value = 15.44;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    
    std::cout << std::endl;

    ref_double_value = 18.44;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Changing Reference/Pointer
    double some_other_double {78.45};

    // This works, but does not make ref_double_value reference some_other_double
    // Instead, it takes the value of some_other_double and assigns it to the original variable
    ref_double_value = some_other_double;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl; // Notice that this has not changed
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    std::cout << std::endl;

    // The pointer CAN be changed to point somewhere else 
    some_other_double = 100.10;

    p_double_value = &some_other_double;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl; // Notice that this has changed
    std::cout << "*p_double_value: " << *p_double_value << std::endl; // Notice that this has changed

    // Bottom line: references behave like constant pointers, but have a friendlier syntax

    return 0;
}