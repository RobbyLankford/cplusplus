#ifndef POINT_H
#define POINT_H

// Included to get access to size_t
#include <iostream>

class Point
{
    public:
        // Constructors
        Point(double x, double y);
        Point(double xy_coord);     // Point Constructor
        Point();                    // Default Constructor
        Point(const Point &point);  // Point Copy Constructor
        ~Point();                   // Point Destructor

        // Function to calculate distance from the point(0,0)
        double length() const;

        size_t get_point_count() const
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

        static size_t m_point_count;
};

#endif