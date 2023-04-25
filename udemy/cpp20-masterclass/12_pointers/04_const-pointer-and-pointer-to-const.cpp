#include <iostream>

int main()
{
    /*
        | NAME                   | MODIFY VARIBALE THROUGH POINTER? | MODIFY POINTER? | SYNTAX EXAMPLE                                         |
        |------------------------|----------------------------------|-----------------|--------------------------------------------------------|
        | Regular Variable       | N/A                              | N/A             | int name {123}                                         |
        | Regular Pointer        | Y                                | Y               | int *p_name {&name}                                    |
        | Pointer to const       | N                                | Y               | const int *p_name {&name}                              |
        | const Pointer          | Y                                | N               | int *const p_name {&name}                              |
        | const Pointer to const | N                                | N               | const *int const p_name {&name} (const int name {123}) |
    */

    /* RAW VARIABLE */
    int number {5};
    
    std::cout << "Variable number: " << number << std::endl;
    std::cout << "Memory Location: " << &number << std::endl;

    std::cout << std::endl;

    number = 12;

    std::cout << "Variable number: " << number << std::endl;
    std::cout << "Memory Location: " << &number << std::endl;

    std::cout << std::endl;

    number += 7;

    std::cout << "Variable number: " << number << std::endl;
    std::cout << "Memory Location: " << &number << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /* POINTER: can modify the data and the pointer itself */
    int *p_number1 {nullptr};
    int number1 {123};

    std::cout << "Pointer p_number1: " << p_number1 << std::endl;
    std::cout << "Variable number1: " << number1 << std::endl;
    std::cout << "Address of number1: " << &number1 << std::endl;

    std::cout << std::endl;

    p_number1 = &number1;

    std::cout << "Pointer p_number1: " << p_number1 << std::endl;
    std::cout << "Value p_number1 points to: " << *p_number1 << std::endl;
    std::cout << "Variable number1: " << number1 << std::endl;
    std::cout << "Address of number1: " << &number1 << std::endl;

    std::cout << std::endl;

    // Modify the pointed-to value through the pointer
    *p_number1 = 223;

    std::cout << "Pointer p_number1: " << p_number1 << std::endl;
    std::cout << "Value p_number1 points to: " << *p_number1 << std::endl;
    std::cout << "Variable number1: " << number1 << std::endl;
    std::cout << "Address of number1: " << &number1 << std::endl;

    std::cout << std::endl;

    // Make the pointer point somewhere else
    int number2 {456};

    p_number1 = &number2;

    std::cout << "Pointer p_number1: " << p_number1 << std::endl;
    std::cout << "Value p_number1 points to: " << *p_number1 << std::endl;
    std::cout << "Variable number1: " << number1 << std::endl;
    std::cout << "Address of number1: " << &number1 << std::endl;
    std::cout << "Variable number2: " << number2 << std::endl;
    std::cout << "Address of number2: " << &number2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /* POINTER TO CONST: cannot modify the data through the pointer, but can change the pointer */
    int number3 {789};
    const int *p_number3 {&number3};

    std::cout << "Pointer p_number3: " << p_number3 << std::endl;
    std::cout << "Value p_number3 points to: " << *p_number3 << std::endl;
    std::cout << "Variable number3: " << number3 << std::endl;
    std::cout << "Address of number3: " << &number3 << std::endl;

    // Trying to modify the value pointed to by p_number3 through the pointer would cause a compiler error
    // *p_number3 = 444; // compiler error

    std::cout << std::endl;

    // Can still change where p_number3 is pointing though
    int number4 {987};

    p_number3 = &number4;

    std::cout << "Pointer p_number3: " << p_number3 << std::endl;
    std::cout << "Value p_number3 points to: " << *p_number3 << std::endl;
    std::cout << "Variable number3: " << number3 << std::endl;
    std::cout << "Address of number3: " << &number3 << std::endl;
    std::cout << "Variable number4: " << number4 << std::endl;
    std::cout << "Address of number4: " << &number4 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /* CONST POINTER: can modify the data through the pointer, but cannot change the pointer */
    int number5 {654};
    int *const p_number5 {&number5};

    std::cout << "Pointer p_number5: " << p_number5 << std::endl;
    std::cout << "Value p_number5 points to: " << *p_number5 << std::endl;
    std::cout << "Variable number5: " << number5 << std::endl;
    std::cout << "Address of number5: " << &number5 << std::endl;

    // Trying to modify the pointer will cause a compiler error
    int number6 {321};
    // p_number5 = &number6; // compiler error

    std::cout << std::endl;

    // Can modify the data through the pointer
    *p_number5 = 321;
    
    std::cout << "Pointer p_number5: " << p_number5 << std::endl;
    std::cout << "Value p_number5 points to: " << *p_number5 << std::endl;
    std::cout << "Variable number5: " << number5 << std::endl;
    std::cout << "Address of number5: " << &number5 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /* CONST POINTER TO CONST: cannot modify the data through the pointer and cannot change the pointer */
    const int number7 {123};
    const int* const p_number7 {&number6};

    std::cout << "Pointer p_number7: " << p_number7 << std::endl;
    std::cout << "Value p_number7 points to: " << *p_number7 << std::endl;
    std::cout << "Variable number7: " << number7 << std::endl;
    std::cout << "Address of number7: " << &number7 << std::endl;

    // Trying to modify the data through the pointer will cause a compiler error
    // *p_number7 = 456; // compiler error

    // Tryin gto modify the pointer will cause a compiler error
    int number8 {456};
    // p_number7 = &number8; // compiler error

    return 0;
}