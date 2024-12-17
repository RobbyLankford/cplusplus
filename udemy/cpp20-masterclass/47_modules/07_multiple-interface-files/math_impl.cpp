module;

module math_stuff;

import <iostream>;
import print;

double add(double a, double b)
{
    return a + b;
}

Point::Point(double x, double y) : m_x(x), m_y(y)
{
    std::cout << "Creating point object and greeting John..." << std::endl;
    greet();
};