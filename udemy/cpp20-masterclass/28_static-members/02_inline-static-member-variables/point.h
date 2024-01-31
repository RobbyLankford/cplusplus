#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    public:
        // Constructors
        Point(double x, double y);
        Point (double xy_coord);
        Point();
        Point(const Point &point);
        ~Point();

        double length() const;
    
        size_t get_point_count()
        {
            return m_point_count;
        }
    
        void print_info() const
        {
            std::cout << "Point [&m_x: " << &m_x << ", &m_y: " << &m_y << "]" << std::endl;
        }

    private:
        double m_x;
        double m_y;

        // Starting in C++17, can do inline
        inline static size_t m_point_count {0};
};

#endif
