#include <iostream>

int main()
{
    // Make sure that, when you are using a pointer, it contains a valid address
    int *p_number {nullptr};

    // A simple check for nullptr is often the best solution
    if (!(p_number == nullptr))
    {
        std::cout << "p_number points to a VALID address: " << p_number << std::endl;
        std::cout << "*p_number: " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    // Can also do it like this as pointers can coerce to a boolean
    if (p_number)
    {
        std::cout << "p_number points to a VALID address: " << p_number << std::endl;
        std::cout << "*p_number: " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    // Calling delete on a nullptr is fine, so do not need to check for nullptr before calling delete
    int *p_number1 {nullptr};

    delete p_number1;

    return 0;
}