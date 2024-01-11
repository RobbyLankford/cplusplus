#include <iostream>
#include "point.h"

/* disable a constructor from being used to create objects */

int main()
{
    Point p1(4.6, 5.2);
    
    // Will no longer work because it is a deleted constructor
    /* Point p2(std::move(Point(4.6, 5.2))); */

    return 0;
}