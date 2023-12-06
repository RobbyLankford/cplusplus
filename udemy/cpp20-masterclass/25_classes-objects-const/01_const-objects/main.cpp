#include <iostream>
#include "dog.h"

/*
    We cannot modify const objects, which is what we want...
    However, we cannot read from them either.
    A solution will be presented later.
*/

int main()
{
    const Dog dog1("Fluffy", "Shepherd", 2);

    // Direct access
    /*
    dog1.print_info(); // Compiler error, unexpected
    dog1.set_name("Milou"); // Compiler error, expected
    */

   // Can we work around this with the following attempts?

   // Point to non const
   //Dog *dog_ptr = &dog1; // Compiler error

    // Non const reference
    // Dog &dog_ref = dog1; // Compiler error

    // Pointer to const
    const Dog *const_dog_ptr = &dog1; // This works
    //const_dog_ptr->set_name("Milou"); // Compiler error, expected
    //const_dog_ptr->get_name(); // Compiler error, unexpected

    // Const reference
    const Dog &const_dog_ref = dog1; // This works
    //const_dog_ref.set_name("Milou"); // Compiler error, expected
    //const_dog_ref.get_name(); // Compiler error, unexpected

    return 0;
}