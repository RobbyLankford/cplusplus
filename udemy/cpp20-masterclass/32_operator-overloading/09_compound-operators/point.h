#ifndef POINT_H
#define POINT_H

#include <iostream>

// Overload compound operators += and -=

class Point
{
    friend std::ostream &operator<<(std::ostream &os, const Point &p);
    
    friend Point operator+(const Point &left, const Point &right);
    friend Point operator-(const Point &left, const Point &right);

    friend Point &operator+=(Point &left, const Point &right);
    friend Point &operator-=(Point &left, const Point &right);

    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y) {}

        ~Point() = default;

        void print_info()
        {
            std::cout << "point [x: " << m_x << ", y: " << m_y << "]" << std::endl;
        }
    
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

inline Point &operator+=(Point &left, const Point &right)
{
    // We are returning left by reference so add right to it
    left.m_x += right.m_x;
    left.m_y += right.m_y;

    return left;
}

inline Point &operator-=(Point &left, const Point &right)
{
    left.m_x -= right.m_x;
    left.m_y -= right.m_y;

    return left;
}

inline Point operator+(const Point &left, const Point &right)
{
    Point p(left);

    // Can reuse the overloaded compound operator in another overloaded operator
    return p += right;
}

inline Point operator-(const Point &left, const Point &right)
{
    Point p(left);

    return p -= right;
}

#endif