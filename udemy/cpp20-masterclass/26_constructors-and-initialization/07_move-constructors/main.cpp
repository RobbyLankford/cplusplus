#include <iostream>
#include "point.h"

/* A move constructor allows you to create a copy from a temporary object */

int main()
{
    // Create a copy from a temporary
    Point p1(std::move(Point(20.5, 5.8)));
    p1.print_info();

    return 0;
}