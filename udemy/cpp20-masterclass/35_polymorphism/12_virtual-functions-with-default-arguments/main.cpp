#include <iostream>

#include "derived.h"

/*
    Notes:
    - Default arguments are handled at compile time
    - Virtual functiosn are called at run time with polymorphism
    - If you use default arguments with virtual functions, might get weird results with polymorphism
    - Ultimately, default arguments in virtual functions are confusing and should be avoided
*/

int main()
{
    // Base Pointer: uses polymorphism
    Base *base_ptr = new Derived;
    double result = base_ptr->add();

    std::cout << "Result (base pointer): " << result << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Base Reference: uses polymorphism
    Derived derived1;
    Base &base_ref1 = derived1;
    result = base_ref1.add();

    std::cout << "Result (base reference): " << result << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Raw Objects
    Base base1;
    result = base1.add();
    
    std::cout << "Result (raw): " << result << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Direct Object: uses static binding
    Derived derived2;
    result = derived2.add();

    std::cout << "Result (direct object): " << result << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Raw Objects with Slicing: uses static binding
    Base base2 = derived2;
    result = base2.add();

    std::cout << "Result (raw object assignment): " << result << std::endl;

    return 0;
}