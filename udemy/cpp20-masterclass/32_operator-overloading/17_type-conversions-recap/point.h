#ifndef POINT_H
#define POINT_H

#include <iostream>

class Number;

class Point
{
    friend std::ostream &operator<<(std::ostream &out, const Point &point);

    public:
        Point() = default;
        Point(double x, double y);
        
        // Copy Constructor
        Point(const Point &p);

        ~Point() = default;

        // Copy Assignment Operator
        Point &operator=(const Point &right_op)
        {
            std::cout << "Copy assignment operator called..." << std::endl;

            if (this != &right_op)
            {
                m_x = right_op.m_x;
                m_y = right_op.m_y;
            }

            return *this;
        }

        // Copy Assignment Operator for Number
        void operator=(const Number &n);
    
    private:
        double m_x {0.0};
        double m_y {0.0};
};

inline std::ostream &operator<<(std::ostream &os, const Point &point)
{
    os << "Point [x: " << point.m_x << ", y: " << point.m_y << "]";

    return os;
}

#endif