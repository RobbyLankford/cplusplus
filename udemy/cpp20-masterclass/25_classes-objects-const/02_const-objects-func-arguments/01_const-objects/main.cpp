#include <iostream>
#include "dog.h"

/*
    What is const objects are passed as function arguments? A few ways to attempt this:
        1. Pass by value
        2. Pass by (non const) reference
        3. Pass by const reference
        4. Pass by pointer (to non const)
        5. Pass by pointer to const
*/

// 1. Reference: no problem as we are dealing with a copy
void function_taking_dog(Dog dog)
{
    dog.set_name("Internal dog");
	dog.print_info();
}

// 2. Reference: error as compiler will not allow it
void function_taking_dog_ref(Dog &dog)
{
	// dog.set_name("Internal dog"); //compiler error: expected
	// dog.print_info(); // compiler error: unexpected
}

// 3. Const Reference: error as compiler will not allow it
void function_taking_const_dog_ref(const Dog &dog)
{
	// dog.set_name("Internal dog"); //compiler error: expected
	// dog.print_info(); // compiler error: unexpected
}

// 4. Pointer (to non const): error as compiler will not allow it
void function_taking_dog_p(Dog *dog)
{
	// dog->set_name("Internal dog"); //compiler error: expected
	// dog->print_info(); // compiler error: unexpected
}

// 5. Pointer to const: error as compiler will not allow it
void function_taking_pointer_to_const_dog(const Dog *dog)
{
	// dog->set_name("Internal dog"); //compiler error: expected
	// dog->print_info(); // compiler error: unexpected
}

int main()
{
    const Dog dog1("Fluffy", "Shepherd", 2);
    
    std::cout << "Address of object : " << &dog1 << std::endl;

    return 0;
}