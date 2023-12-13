#include <iostream>
#include "dog.h"

// Will throw two warnings for the dangling pointer and reference in dog.h

int main()
{   
    Dog dog1("Fluffy", "Shepherd", 2);

	// Throws an error because of dangling reference
	/*
	const std::string &str_ref = dog1.compile_dog_info();
	std::cout << "info: " << str_ref << std::endl;
	*/

	// Dangling pointer, but does not throw an error
	unsigned int *int_ptr = dog1.jumps_per_minute();
	std::cout << "jumps_per_minute: " << *int_ptr << std::endl;

    return 0;
}