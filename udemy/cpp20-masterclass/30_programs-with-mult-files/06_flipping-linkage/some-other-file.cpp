#include <iostream>

// Declaration (use extern to make sure External Linkage)
extern const double distance;

// Definition
void print_distance()
{
    std::cout << "distance (other): " << distance << std::endl;
    std::cout << "&distance (other): " << &distance << std::endl;
}

/*
// External Linkage (function by default) -> Internal Linkage (add static keyword)
static void some_other_function()
{
    std::cout << "Hello There" << std::endl;
}
*/

// External Linkage (function by default) -> Internal Linkage (put in anonymous namespace)
namespace
{
    void some_other_function()
    {
        std::cout << "Hello There" << std::endl;
    }
}