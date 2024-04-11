#include <iostream>
#include "point.h"

int main()
{
    Point p1(10, 10);

    std::cout << "p1: " << p1 << std::endl;

    std::cout << std::endl;

    // Prefix
    ++p1;

    std::cout << "p1: " << p1 << std::endl;

    // Postfix
    p1++;

    std::cout << "p1: " << p1 << std::endl;

    return 0;
}