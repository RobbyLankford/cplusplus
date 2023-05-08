#include <iostream>

int main()
{
    /* 
        So far we have been using memory allocated on the stack:
        - Memory is finite
        - The developer is not in full control of the memory lifetime
        - Lifetime is controlled by the scope mechanism
    */

    // How we have used pointers so far:
    int number {22};
    int *p_number = &number;

    std::cout << "number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    std::cout << std::endl;

    int number1 {12};
    int *p_number1; // uninitialized pointer, contains junk address
    
    p_number1 = &number1; // point to valid address

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "p_number1: " << p_number1 << std::endl;
    std::cout << "&number1: " << &number1 << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Several bad things can happen when pointers are used incorrectly

    // 1. Writing into uninitialized pointer through dereference
    /*
    int *p_number2; // contains junk address, could be anything

    *p_number2 = 55; // writing into junk address... could overwrite something important
    */

    // 2. Initializing 
    /*
    int *p_number3 {nullptr}; // a pointer pointing to nowhere

    *p_number3 = 33; // writing to a pointer pointing nowhere could cause a crash
    */

    /* 
        Now we are going to allocate memory from the heap
        - Memory is finite
        - Developer is in full control of when memory is allocated and when it is released
        - Lifetime is controlled explicitly through new and delete operators
    */

    // Initialize the pointer with dynamic memory, dynamically allocated at runtime
    // The memory belongs to the program and no other program on the system can use it
    int *p_number4 {nullptr};

    p_number4 = new int; // dynamically allocate space for a single int on the heap

    *p_number4 = 77;

    std::cout << "p_number4: " << p_number4 << std::endl;
    std::cout << "*p_number4: " << *p_number4 << std::endl;

    // Return memory to the OS after done using it
    delete p_number4;

    p_number4 = nullptr; // good practice to reset the pointer back to NULL

    std::cout << "p_number4: " << p_number4 << std::endl;
    // std::cout << "*p_number4: " << *p_number4 << std::endl; // will cause segmentation fault

    std::cout << std::endl;

    // Aside from nullptr, can initialize the pointer with a valid address on declaration
    int *p_number5 {new int}; // memory location contains junk value
    int *p_number6 {new int (22)}; // use direct initialization
    int *p_number7 {new int {23}}; // use uniform initialization

    std::cout << "p_number5: " << p_number5 << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl;

    std::cout << std::endl;

    std::cout << "p_number6: " << p_number6 << std::endl;
    std::cout << "*p_number6: " << *p_number6 << std::endl;

    std::cout << std::endl;

    std::cout << "p_number7: " << p_number7 << std::endl;
    std::cout << "*p_number7: " << *p_number7 << std::endl;

    std::cout << std::endl;

    // Release the memory
    delete p_number5;
    delete p_number6;
    delete p_number7;

    p_number5 = nullptr;
    p_number6 = nullptr;
    p_number7 = nullptr;

    // Can also reuse pointers
    p_number5 = new int (81);

    std::cout << "p_number5: " << p_number5 << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl;

    delete p_number5;

    p_number5 = nullptr;
    p_number5 = new int (99);

    std::cout << "p_number5: " << p_number5 << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl;

    p_number5 = nullptr;

    // Do NOT delete a pointer twice in a row
    // delete p_number5;
    // delete p_number5;

    return 0;
}