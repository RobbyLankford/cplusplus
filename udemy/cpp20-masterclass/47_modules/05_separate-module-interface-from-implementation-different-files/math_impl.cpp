module;

#include <cstring>
#include <string>

module math_stuff;

import <iostream>;

// Preamble

// Implementations
double add(double a, double b)
{
    return a + b;
}

void greet(const std::string &name)
{
    std::string dest;

    dest = "Hello ";
    dest.append(name);

    std::cout << dest << std::endl;
}

void print_name_length(const char *c_str_name)
{
    std::cout << "Lenght: " << std::strlen(c_str_name) << std::endl;
}

// Point Constructor
Point::Point(double x, double y) : m_x(x), m_y(y) {};