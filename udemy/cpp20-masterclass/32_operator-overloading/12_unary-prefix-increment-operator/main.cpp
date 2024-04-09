#include <iostream>
#include "point.h"

int main()
{
    Point p1(10, 10);

    std::cout << "p1: " << p1 << std::endl;

    // Method 1
    ++p1;

    std::cout << "p1: " << p1 << std::endl;

    // Method 2
    p1.operator++();

    std::cout << "p1: " << p1 << std::endl;

    std::cout << std::endl;

    // Multiple increments
    for (size_t i {}; i < 20; ++i)
    {
        ++p1;
        
        std::cout << "p1: " << p1 << std::endl;
    }

    return 0;
}