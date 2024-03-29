#include <iostream>
#include "point.h"

int main()
{
    Point p1(10.0, 20.1);

    std::cout << "Point count: " << p1.get_point_count() << std::endl;

    Point points[] { Point(1,1), Point(), Point(4) };

    std::cout << "Point count: " << p1.get_point_count() << std::endl;

    return 0;
}