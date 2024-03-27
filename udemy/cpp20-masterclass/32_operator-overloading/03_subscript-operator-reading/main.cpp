#include <iostream>
#include "point.h"

int main()
{
    Point p1(10, 20);

    std::cout << "p1.x: " << p1[0] << std::endl;
    std::cout << "p1.y: " << p1[1] << std::endl;

    std::cout << std::endl;

    std::cout << "p1.x: " << p1.operator[](0) << std::endl;
    std::cout << "p1.y: " << p1.operator[](1) << std::endl;

    return 0;
}