#ifndef POINT_H
#define POINT_H

#include <iostream>

/*
    Similar concept to overloading as a member of the class.
    The overload is a "friend" of the Point class and the function is defined outside of it.
*/

class Point
{
    friend Point operator+ (const Point &left, const Point &right);

    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y) 
        {

        }
        ~Point() = default;

        void print_info()
        {
            std::cout << "Point [x: " << m_x << ", y: " << m_y << "]" << std::endl;
        }
    
    private:
        double length() const;
        double m_x {};
        double m_y {};
};

inline Point operator+(const Point &left, const Point &right)
{
    return Point(left.m_x + right.m_x, left.m_y + right.m_y);
}

#endif