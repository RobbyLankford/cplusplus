#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    friend std::ostream &operator<<(std::ostream &os, const Point &p);
    
    // As a non-member function, must declare as a friend
    friend void operator++(Point &operand);

    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y) {}

        ~Point() = default;
    
    private:
        double length() const;

        double m_x {};
        double m_y {};
};

inline std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << "Point [x: " << p.m_x << ", y: " << p.m_y << "]";

    return os;
}

#endif