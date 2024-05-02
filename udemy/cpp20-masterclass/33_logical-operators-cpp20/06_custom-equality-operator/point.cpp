#include <cmath>
#include "point.h"

double Point::length() const
{
    return sqrt(pow(m_x - 0, 2) + pow(m_y - 0, 2) * 1.0);
}

/*
    Default == operator would just compare lexicographically
    Instead, we want the distance from the origin to decide equality
    In C++20, just specifying == will also create !=
*/
bool Point::operator==(const Point &other) const
{
    return (this->length() == other.length());
}