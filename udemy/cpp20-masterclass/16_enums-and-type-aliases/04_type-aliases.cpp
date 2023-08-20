#include <iostream>

/*
    Give alternative names to types, usually more complex types.
    Modern C++ uses `using`
    Older C++ used `typedef`
*/

int main()
{
    // Old method, not recommended for newer code
    // typedef unsigned long long int HugeInt; 

    // New method
    using HugeInt = unsigned long long int;

    HugeInt huge_number {123378997};

    std::cout << "sizeof(unsigned long long int): " << sizeof(unsigned long long int) << std::endl;
    std::cout << "sizeof(HugeInt): " << sizeof(HugeInt) << std::endl;

    std::cout << "huge_number: " << huge_number << std::endl;

    return 0;
}