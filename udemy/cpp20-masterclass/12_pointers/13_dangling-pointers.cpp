#include <iostream>

int main()
{
    // Dangling Pointer: a pointer that does not point to a valid memory address

    // Problem #1: Uninitialized Pointer
    int *p_number;
    
    std::cout << "p_number: " << p_number << std::endl;
    // std::cout << "*p_number: " << *p_number << std::endl; // Will cause a crash

    std::cout << std::endl;

    // Problem #2: Deleted Pointer
    int *p_number1 {new int {67}};

    std::cout << "p_number1: " << p_number1 << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl;

    delete p_number1;

    // std::cout << "*p_number1 (after delete): " << *p_number1 << std::endl; // May cause a crash

    std::cout << std::endl;

    // Problem #3: Multiple Pointers Pointing to Same Address
    int *p_number2 {new int {83}};
    int *p_number3 {p_number2};

    std::cout << "p_number2: " << p_number2 << " contains value: " << *p_number2 << std::endl;
    std::cout << "p_number3: " << p_number3 << " contains value: " << *p_number3 << std::endl;

    delete p_number2;

    // std::cout << "p_number3: " << p_number3 << " contains value: " << *p_number3 << std::endl; // May cause a crash

    std::cout << "\n----------\n" << std::endl;

    // Solution #1: Initialize Pointers
    int *p_number4 {nullptr}; // If you do not know what value the pointer will have
    int *p_number5 {new int (87)}; // If you know what value the pointer will have

    // Can check for nullptr before using it
    if (p_number5 != nullptr)
    {
        std::cout << "p_number5: " << p_number5 << " contains value: " << *p_number5 << std::endl;
    }

    std::cout << std::endl;

    // Solution #2: Reset Pointer to nullptr After Calling delete
    int *p_number6 {new int {82}};

    if (p_number6 != nullptr)
    {
        std::cout << "p_number6: " << p_number6 << " contains value: " << *p_number6 << std::endl;
    }

    delete p_number6;
    p_number6 = nullptr;

    if (p_number6 != nullptr)
    {
        std::cout << "p_number6: " << p_number6 << " contains value: " << *p_number6 << std::endl;
    }
    else
    {
        std::cout << "p_number6 is null pointer" << std::endl;
    }

    std::cout << std::endl;

    // Solution #3: Select One Pointer as the "Master" Pointer
    int *p_number7 {new int {382}}; // Let p_number7 be the master pointer
    int *p_number8 {p_number7};

    if (!(p_number7 == nullptr))
    {
        std::cout << "p_number7: " << p_number7 << " contains value: " << *p_number7 << std::endl;
        std::cout << "p_number8: " << p_number8 << " contains value: " << *p_number8 << std::endl;
    }
    else
    {
        std::cerr << "WARNING: Master pointer p_number7 is nullptr, pointer p_number8 is invalid.";
    }

    delete p_number7;
    p_number7 = nullptr;

    if (!(p_number7 == nullptr))
    {
        std::cout << "p_number7: " << p_number7 << " contains value: " << *p_number7 << std::endl;
        std::cout << "p_number8: " << p_number8 << " contains value: " << *p_number8 << std::endl;
    }
    else
    {
        std::cerr << "WARNING: Master pointer p_number7 is nullptr, pointer p_number8 is invalid." << std::endl;
    }

    return 0;
}