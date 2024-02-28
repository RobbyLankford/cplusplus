#include <iostream>

// Declarations
extern int age;

// Definition of a DIFFERENT variable
const double distance {};

// Definitions
void print_age()
{
    std::cout << "age (other): " << age << std::endl;
    std::cout << "&age (other): " << &age << std::endl;
}

void print_distance()
{
    std::cout << "distance (other): " << distance << std::endl;
    std::cout << "&distance (other)" << &distance << std::endl;
}