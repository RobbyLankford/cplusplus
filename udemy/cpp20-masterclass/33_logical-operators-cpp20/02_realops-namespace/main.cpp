#include <iostream>
#include "point.h"

int main()
{   
    /* Deprecated as of C++20 */
    //using namespace std::rel_ops;

    Point point1(10.0, 10.0);
    Point point2(20.0, 20.0);

    std::cout << "Point1: " << point1 << std::endl;
    std::cout << "Point2: " << point2 << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;

    std::cout << "Point1 Point2: " << (point1 > point2) << std::endl;
    std::cout << "Point1 Point2: " << (point1 < point2) << std::endl;
    std::cout << "Point1 Point2: " << (point1 >= point2) << std::endl;
    std::cout << "Point1 Point2: " << (point1 <= point2) << std::endl;
    std::cout << "Point1 Point2: " << (point1 == point2) << std::endl;
    std::cout << "Point1 Point2: " << (point1 != point2) << std::endl;

    return 0;
}