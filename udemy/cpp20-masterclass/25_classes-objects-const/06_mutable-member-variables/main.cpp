#include <iostream>
#include "dog.h"

// A method to mutate a supposedly constant variable

int main()
{   
    Dog dog1("Fluffy", "Shepherd", 2);

	dog1.print_info(); // m_print_info_count = 1
	dog1.print_info(); // m_print_info_count = 2, so it has been mutated

	// Despite being consant, we can now mutate the m_print_info_count variable
	for (size_t i {0}; i < 10; i++)
	{
		dog1.print_info();
	}

    return 0;
}
