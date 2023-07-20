#include <iostream>

/*
    This will prevent going through the pointer to modify the data
    AND will prevent the pointer from pointing somewhere else
*/

int some_var {2};

void say_age(const int *const age);

int main()
{
    int age {23};

    std::cout << "age (before): " << age << std::endl;
    
    say_age(&age);

    std::cout << "age (after): " << age << std::endl;

    return 0;
}

void say_age(const int *const age)
{
    //++(*age); // Will give an error, cannot change variable

    std::cout << "Hello! You are " << *age << " years old." << std::endl;

    //age = &some_var; // Will give an error, cannot change where pointer is pointing
}