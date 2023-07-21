#include <iostream>

/*
    Will prevent from being able to go through reference to alter variable
    Still results in cleaner syntax than dereferencing a pointer
*/

void say_age(const int &age);

int main()
{
    int age {23};

    std::cout << "age (before): " << age << std::endl;
    
    say_age(age);

    std::cout << "age (after): " << age << std::endl;

    return 0;
}

void say_age(const int &age)
{
    //++age; // Will cause an error

    std::cout << "Hello! You are " << age << " years old." << std::endl;

    return;
}