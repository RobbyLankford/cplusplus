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

    auto result1 = (p1 > p2);
    auto result2 = (p1 >= p2);
    auto result3 = (p1 == p2);
    auto result4 = (p1 != p2);
    auto result5 = (p1 < p2);
    auto result6 = (p1 <= p2);

    std::cout << "Point1 > Point2: " << result1 << std::endl;
    std::cout << "Point1 >= Point2: " << result2 << std::endl;
    std::cout << "Point1 == Point2: " << result3 << std::endl;
    std::cout << "Point1 != Point2: " << result4 << std::endl;
    std::cout << "Point1 < Point2: " << result5 << std::endl;
    std::cout << "Point1 <= Point2: " << result6 << std::endl;

    std::cout << std::endl;

    // Implicit Conversions
    std::cout << "Point1 > 20.1: " << (p1 > 20.1) << std::endl;
    std::cout << "20.1 > Point1: " << (20.1 > p1) << std::endl;
    std::cout << "Point1 <=> 20.1: " << ((p1 <=> 20.1) < 0) << std::endl;

    return 0;
}