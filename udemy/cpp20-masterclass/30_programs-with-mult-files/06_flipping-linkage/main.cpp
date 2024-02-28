#include <iostream>

/*
    Can change an object from internal linkage to external linkage, or vice-versa
*/

// Internal Linkage (const double by default) -> External Linkage (add extern keyword)
extern const double distance {45.9};

// Declarations
void print_distance();

//void some_other_function();

int main()
{
    std::cout << "distance (main): " << distance << std::endl;
    std::cout << "&distance (main): " << &distance << std::endl;

    std::cout << std::endl;

    print_distance();

    std::cout << "\n-------\n" << std::endl;

    // Will not work because not defined here
    //some_other_function();
    
    return 0;
}