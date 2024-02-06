#include <iostream>
#include "point.h"

int main()
{
    std::cout << std::endl;
    std::cout << "Entering main()..." << std::endl;

    Point point1(3.0, 3.0);

    std::cout << "distance: " << point1.length() << std::endl;

    std::cout << std::endl;
    std::cout << "Reading in the integers..." << std::endl;

    std::cout << "point1.i1: " << point1.i1.get_value() << std::endl;
    std::cout << "point1.i2: " << point1.i2.get_value() << std::endl;
    std::cout << "point1.i3: " << point1.i3.get_value() << std::endl;
    std::cout << "point1.i4: " << point1.i4.get_value() << std::endl;

    point1.i1.set_value(8); // Will work because i1 is not constant
    // point1.i2.set_value(10); // Will not work because i2 is const, cannot modify it

    std::cout << std::endl;
    std::cout << "point1.p_15 (pointer): " << point1.p_i5->get_value() << std::endl;

    std::cout << std::endl;
    std::cout << "Point::i6: " << Point::i6.get_value() << std::endl;
    std::cout << "Point::i7: " << Point::i7.get_value() << std::endl;

    std::cout << std::endl;
    std::cout << "Leaving main()..." << std::endl;

    std::cout << std::endl;

    return 0;
}