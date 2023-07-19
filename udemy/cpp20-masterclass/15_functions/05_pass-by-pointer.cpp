#include <iostream>

/*
    Passing parameters by value results in a copy being made.
    Passing by pointer allows the variable itself to be modified.
*/

void say_age(int *age);

int main()
{
    int age {23};

    std::cout << "age (before): " << age << std::endl;
    
    say_age(&age);

    std::cout << "age (after): " << age << std::endl;

    return 0;
}

void say_age(int *age)
{
    ++(*age); // will change the variable passed to the function

    std::cout << "Hello! You are " << *age << " years old." << std::endl;

    return;
}