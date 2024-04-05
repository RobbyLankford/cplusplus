#include <iostream>

#include "point.h"
#include "number.h"

double sum(double a, double b)
{
    return a + b;
}

void use_point(const Point &p)
{
    std::cout << "Printing the point from use_point function: " << p << std::endl;
}

int main()
{
    Number n1(22);
    Number n2(10);

    double result = sum(static_cast<double>(n1), static_cast<double>(n2));

    std::cout << "result: " << result << std::endl;

    std::cout << std::endl;

    // Can now cast a Number to a Point
    use_point(static_cast<Point>(n1));

    return 0;
}