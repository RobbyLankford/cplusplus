#include <iostream>
#include "point.h"
#include "car.h"

int main()
{
    Point p1(10, 10, 10);
    Car c1("red", 200.0);

    std::cout << "Point p1: " << p1 << std::endl;

    p1 = c1;

    std::cout << "Point p1: " << p1 << std::endl;

    return 0;
}