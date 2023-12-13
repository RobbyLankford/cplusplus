#include <iostream>
#include "dog.h"

int main()
{   
    Dog dog1("Fluffy", "Shepherd", 2);

	dog1.print_info();

	std::cout << "Name: " << dog1.get_name() << std::endl;
	std::cout << std::endl;

	// Modify the object (because it returns a reference)
	dog1.get_name() = "Milou";

	dog1.print_info();

	std::cout << "Name: " << dog1.get_name() << std::endl;

    return 0;
}