#include <iostream>

/* A method to access member variables of a struct */

struct Point
{
    double x;
    double y;
};

int main()
{
    Point point1 {4.4, 5.9};

    // Will save copies of the member variables
    auto [a, b] = point1;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    point1.x = 10.1;
    point1.y = 66.2;

    std::cout << std::endl;

    // Point point1 has changed, but a and b have not since they are just copies
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}