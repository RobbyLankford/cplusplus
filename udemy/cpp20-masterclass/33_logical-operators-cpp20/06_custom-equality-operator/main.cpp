#include <iostream>
#include "point.h"

int main()
{
    Point p1(10.0, 10.0);
    Point p2(20.0, 20.0);

    std::cout << "Point1: " << p1 << std::endl;
    std::cout << "Point2: " << p2 << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;

    std::cout << "Point1 == Point2: " << (p1 == p2) << std::endl;
    std::cout << "Point1 != Point2: " << (p1 != p2) << std::endl;
    std::cout << "10.5 == Point1: " << (10.5 == p1) << std::endl;
    std::cout << "Point1 == 10.5: " << (p1 == 10.5) << std::endl;

    return 0;
}