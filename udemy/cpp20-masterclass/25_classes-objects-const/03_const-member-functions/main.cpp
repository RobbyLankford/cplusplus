#include <iostream>
#include "dog.h"

// A method to fix being unable to read from const objects

// 1. Reference: no problem as we are dealing with a copy
void function_taking_dog(Dog dog)
{
    dog.set_name("Internal dog");
	dog.print_info();
}

// 2. Reference: error as compiler will not allow it
void function_taking_dog_ref(Dog &dog)
{
	// compiler will not allow
}

// 3. Const Reference: error as compiler will not allow it
void function_taking_const_dog_ref(const Dog &dog)
{
	// dog.set_name("Internal dog"); //compiler error: expected
	dog.print_info(); // no longer a compiler error
}

// 4. Pointer (to non const): error as compiler will not allow it
void function_taking_dog_p(Dog *dog)
{
	// compiler will not allow
}

// 5. Pointer to const: error as compiler will not allow it
void function_taking_pointer_to_const_dog(const Dog *dog)
{
	// dog->set_name("Internal dog"); //compiler error: expected
	dog->print_info(); // no longer a compiler error
}

int main()
{   
    const Dog dog1("Fluffy","Shepherd",2);

    dog1.print_info();

    function_taking_pointer_to_const_dog(&dog1);

    return 0;
}