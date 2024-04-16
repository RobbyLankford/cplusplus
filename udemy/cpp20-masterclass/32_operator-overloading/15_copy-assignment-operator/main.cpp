#include <iostream>
#include "point.h"

int main()
{
    Point p1(10, 10, 10);
    Point p2(20, 20, 20);
    Point p77(3, 3, 3);

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Assignment
    //p1 = p2 = p77; // One method
    //p1.operator=(p2).operator=(p77); // Another method
    p1.operator=(p2.operator=(p77)); // Yet another method

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Change Data
    p1.set_data(55);

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    return 0;
}