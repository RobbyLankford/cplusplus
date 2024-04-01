#include <iostream>
#include "point.h"

int main()
{
    Point p1(10, 20);
    Point p2(3, 4);

    // Print method #1
    p1.print_info();

    std::cout << std::endl;

    // Print method #2
    std::cout << p1 << "\n" << p2 << std::endl;

    return 0;
}