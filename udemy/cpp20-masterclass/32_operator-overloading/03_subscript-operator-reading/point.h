#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cassert>

/*
    Overloading the subscript operator for reading
    - Subscript operator is a binary operator
    - It is one of the operators that MUST be set up as a member function
*/

class Point
{
    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y)
        {

        }
        ~Point() = default;

        double operator[](size_t index) const
        {
            // There are only two indices, so it MUST be one of them
            assert( (index == 0) || (index == 1) );

            return (index == 0) ? m_x : m_y;
        }

        void print_info()
        {
            std::cout << "Point [x: " << m_x << ", y: " << m_y << "]" << std::endl;
        }
    
    private:
        double length() const;

        double m_x {};
        double m_y {};
};

#endif