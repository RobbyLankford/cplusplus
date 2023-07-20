#include <iostream>

/*
    This will prevent going through the pointer to modify the data
    However, the pointer itself can still be changed to point elsewhere
*/

void say_age(const int *age);

int main()
{
    int age {23};

    std::cout << "age (before): " << age << std::endl;
    
    say_age(&age);

    std::cout << "age (after): " << age << std::endl;

    return 0;
}

void say_age(const int *age)
{
    // ++(*age); // Will give an error

    std::cout << "Hello! You are " << *age << " years old." << std::endl;

    return;
}