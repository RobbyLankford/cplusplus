#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <compare>

class Point
{
    friend std::ostream &operator<<(std::ostream &out, const Point &p);

    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y) {}

        double m_x {};
        double m_y {};

        bool operator==(const Point &other) const;
        std::partial_ordering operator<=>(const Point &right) const;

    private:
        double length() const;
};

inline std::ostream &operator<<(std::ostream &out, const Point &p)
{
    out << "Point [x: " << p.m_x << ", y: " << p.m_y << ", length: " << p.length() << "]";

    return out;
}

#endif 