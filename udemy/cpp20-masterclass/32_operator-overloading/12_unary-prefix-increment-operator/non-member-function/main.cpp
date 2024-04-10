#include <iostream>
#include "point.h"

int main()
{
    Point p1(10, 10);

    std::cout << "p1: " << p1 << std::endl;

    ++p1;

    std::cout << "p1: " << p1 << std::endl;

    operator++(p1);

    std::cout << "p1: " << p1 << std::endl;

    std::cout << std::endl;

    for (size_t i {}; i < 20; i++)
    {
        ++p1;

        std::cout << "p1: " << p1 << std::endl;
    }

    return 0;
}