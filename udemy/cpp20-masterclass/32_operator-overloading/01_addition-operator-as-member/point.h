#ifndef POINT_H
#define POINT_H

#include <iostream>

/*
    Overwrite operators to work with custom classes
        Return type operator [x] [parameters]
*/

class Point
{
    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y)
        {
            
        }
        ~Point() = default;

        Point operator+ (const Point &right);

        void print_info()
        {
            std::cout << "Point [x: " << m_x << ", y: " << m_y << "]" << std::endl;
        }
    
    private:
        // Function to calculate distance from the point(0, 0)
        double length() const;
        double m_x;
        double m_y;
};

#endif