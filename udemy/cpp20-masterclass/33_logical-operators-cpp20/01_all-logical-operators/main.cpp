#include <iostream>
#include "point.h"

int main()
{
    Point p1(10.0, 10.0);
    Point p2(20.0, 20.0);

    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha << std::endl;

    std::cout << "Point1 > Point2: " << (p1 > p2) << std::endl;
    std::cout << "Point1 < Point2: " << (p1 < p2) << std::endl;
    std::cout << "Point1 >= Point2: " << (p1 >= p2) << std::endl;
    std::cout << "Point1 <= Point2: " << (p1 <= p2) << std::endl;
    std::cout << "Point1 == Point2: " << (p1 == p2) << std::endl;
    std::cout << "Point1 != Point2: " << (p1 != p2) << std::endl;

    return 0;
}