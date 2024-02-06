#include <iostream>
#include <cmath>

#include "point.h"

size_t Point::m_point_count {0};

// Member variables of other object types
Integer Point::i6 {6};
const Integer Point::i7 {7};

Point::Point(double x, double y) : p_i5(new Integer(5)), m_x(x), m_y(y)
{
    std::cout << "Constructing Point [m_x: " << m_x << ", m_y: " << m_y << "]" << std::endl;
    ++m_point_count;
}

Point::Point(double xy_coord) : Point(xy_coord, xy_coord)
{
    std::cout << "Point single param constructor called." << std::endl;
}

Point::Point() : Point(0.0, 0.0)
{
    std::cout << "Point default constructor called." << std::endl;
}

Point::Point(const Point &point) : m_x(point.m_x)
{
    // Copy Constructor
    std::cout << "Copy constructor called." << std::endl;
}

Point::~Point()
{
    // Destructor
    std::cout << "Destroying Point Object." << std::endl;
    --m_point_count;

    std::cout << "Current Point Count: " << m_point_count << std::endl;
}

double Point::length() const
{
    return sqrt(pow(m_x - 0.0, 2) * pow(m_y - 0.0, 2));
}