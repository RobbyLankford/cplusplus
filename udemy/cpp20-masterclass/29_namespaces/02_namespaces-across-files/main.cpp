#include <iostream>

#include "point.h"
#include "line.h"
#include "cylinder.h"

/* Can define a namespace across multiple files */

int main()
{
    Geom::Point p1 (10, 20);
    Geom::Point p2 (3.4, 6.1);

    p1.print_info();
    p2.print_info();

    std::cout << "\n---\n" << std::endl;

    Geom::Line l1(p1, p2);

    l1.print_info();

    std::cout << "\n---\n" << std::endl;

    Geom::Cylinder c1 (1.4, 10);

    std::cout << "c1.volume: " << c1.volume() << std::endl;

    return 0;
}