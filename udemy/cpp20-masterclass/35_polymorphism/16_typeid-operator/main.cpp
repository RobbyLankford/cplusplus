#include <iostream>

#include "polymorphic.h"
#include "nonpolymorphic.h"

/*
    Notes:
    - Allows peaking on the dynamic type of a base class pointer or reference
    - Works only for polymorphic types
    - Returns the dynamic type if it can and the static type otherwise
*/

int main()
{
    // 1. typeid with fundamental types: returns static type
    std::cout << "typeid(int): " << typeid(int).name() << std::endl;

    if (typeid(22.2f) == typeid(float))
    {
        std::cout << "22.2f is a float." << std::endl;
    }
    else
    {
        std::cout << "22.f is NOT a float." << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // 2. typeid with references(polymorphic)
    std::cout << "Polymorphic references: " << std::endl;

    DynamicDerived dynamic_derived;
    DynamicBase &base_ref = dynamic_derived;

    std::cout << "Type of dynamic_derived: " << typeid(dynamic_derived).name() << std::endl;
    std::cout << "Type of base_ref: " << typeid(base_ref).name() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // 3. typeid with pointers(polymorphic)
    std::cout << "Polymorphic pointers: " << std::endl;

    DynamicBase *b_ptr = new DynamicDerived;

    std::cout << "Type of b_ptr: " << typeid(b_ptr).name() << std::endl;

    // For pointers, you have to de-reference to see the dynamic type
    std::cout << "Type of *b_ptr: " << typeid(*b_ptr).name() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // 4. typeid with non-polymorphic pointers and references: get static types
    std::cout << "Non-polymorphic pointers and references: " << std::endl;

    StaticBase *b_ptr_s = new StaticDerived;
    StaticDerived staticderived;
    StaticBase &static_base_ref {staticderived};

    std::cout << "Type of *b_ptr_s: " << typeid(*b_ptr_s).name() << std::endl;
    std::cout << "Type of static_base_ref: " << typeid(static_base_ref).name() << std::endl;

    delete b_ptr;
    delete b_ptr_s;

    return 0;
}