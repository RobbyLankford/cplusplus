#include <iostream>

// Global variables with external linkage
int age {12};
const double distance {44.9};

// Declarations
void print_age();
void print_distance();

int main()
{
    std::cout << "age (main): " << age << std::endl;
    std::cout << "&age (main): " << &age << std::endl;

    std::cout << std::endl;

    print_age();

    std::cout << "\n-------\n" << std::endl;

    std::cout << "distance (main): " << distance << std::endl;
    std::cout << "&distance (main): " << &distance << std::endl;

    std::cout << std::endl;

    print_distance();
    
    return 0;
}