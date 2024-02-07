/* Static member functions belong to the blueprint, not any individual object */

#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    public:
        // Constructors
        Point(double x, double y);
        Point(double xy_coord);
        Point();
        Point(const Point &point);

        ~ Point();

        double length() const;

        // Add static member functions using the static keyword

        // Note that they can only access static member variables
        static size_t get_point_count()
        {
            return m_point_count;
        }

        // To access private member functions of an object, use a pointer
        static void print_info(const Point &p)
        {
            std::cout << "Point: [m_x: " << p.m_x << ", m_y: " << p.m_y << "]" << std::endl;
        }
    
    private:
        double m_x;
        double m_y;
        inline static size_t m_point_count {0};
};

#endif