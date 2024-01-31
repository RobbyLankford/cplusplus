#include "point.h"
#include <cmath>

Point::Point(double x, double y) : m_x {x}, m_y {y}
{
    std::cout << "Point constructor called." << std::endl;
    ++m_point_count;
}

Point::Point(double xy_coord) : Point(xy_coord, xy_coord)
{

}

Point::Point() : Point(0.0, 0.0)
{

}

Point::Point(const Point &point) : Point {point.m_x, point.m_y}
{

}

Point::~Point()
{
    --m_point_count;
}

double Point::length() const
{
    return sqrt(pow(m_x - 0, 2) + pow(m_y - 0, 2) * 1.0);
}
