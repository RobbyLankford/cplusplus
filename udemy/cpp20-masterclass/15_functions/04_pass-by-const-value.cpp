#include <iostream>

/*
    Passing a copy of a constant variable into a function as the
    argument makes it to where even that copy cannot be modified
*/

void say_age(const int age);

int main()
{
    int age {23};

    std::cout << "age (before): " << age << std::endl;
    
    say_age(age);

    std::cout << "age (after): " << age << std::endl;

    return 0;
}

void say_age(const int age)
{
    // ++age; // Error! since age is const

    std::cout << "Hello! You are " << age << " years old." << std::endl;

    return;
}