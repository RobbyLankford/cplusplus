#include <iostream>

#include "point.h"
#include "line.h"
#include "cylinder.h"
#include "operations.h"

/* Using a namespace means that you do not need to prefix functions with the namespace */
/* Note that many people use `using namespace std`, but this is not recommended */

// Can bring in just one function from a namespace
using Geom::Point;

// Can use an entire namespace
using namespace Geom;

double add(double a, double b)
{
    std::cout << "::add" << std::endl;
    return a + b + 0.555;
}

int main()
{
    Point p1(10, 20);
    Point p2(3.4, 6.1);

    p1.print_info();
    p2.print_info();

    std::cout << "\n---\n" << std::endl;

    Line l1 (p1, p2);

    l1.print_info();

    std::cout << "\n---\n" << std::endl;

    Cylinder c1 (1.4, 10);

    std::cout << "c1.volume: " << c1.volume() << std::endl;

    std::cout << "\n---\n" << std::endl;

    // Access the add function from Math_Weighted
    Math_Weighted::add(10, 20);

    // Access the add function from the global namespace
    add(10, 20);

    return 0;
}