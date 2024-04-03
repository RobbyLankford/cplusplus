#include <iostream>
#include "point.h"

int main()
{
    std::cout << (Point(20, 20) - Point(10, 10)) << std::endl;
    std::cout << (Point(20, 20) + Point(10, 10)) << std::endl;

    std::cout << std::endl;

    Point p1(10, 10);
    Point p2(20, 20);

    Point p3 {p1 + p2};
    Point p4 {p2 - Point(5, 5)};

    std::cout << "point1: " << p1 << std::endl;
    std::cout << "point2: " << p2 << std::endl;
    std::cout << "point3: " << p3 << std::endl;
    std::cout << "point4: " << p4 << std::endl;

    return 0;
}