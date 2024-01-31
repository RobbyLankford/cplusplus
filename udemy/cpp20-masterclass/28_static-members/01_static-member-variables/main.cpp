#include <iostream>
#include "point.h"

/* 
    Member variables are not tied to any object of the class.
    They live in the context of object blueprints.
    They are created even before a single class object has been created.
*/

int main()
{
    // point count starts at 0 until a new Point is created
    Point p1(10.0, 20.1);

    std::cout << "Point count: " << p1.get_point_count() << std::endl;

    Point points[] { Point(1, 1), Point(), Point(4) };

    std::cout << "Point count: " << p1.get_point_count() << std::endl;

    return 0;
}