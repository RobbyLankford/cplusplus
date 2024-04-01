#ifndef POINT_H
#define POINT_H

#include <iostream>

/* Method to print out using std::cout << */

class Point
{
    // Recommended to use references
    friend std::ostream &operator<<(std::ostream &os, const Point &p);

    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y) {}
        
        ~Point() = default;

        void print_info()
        {
            std::cout << "Point[x: " << m_x << ", y: " << m_y << "]" << std::endl;
        }
    
    private:
        double length() const;

        double m_x {};
        double m_y {};
};

// Print to the output stream
inline std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << "Point [x: " << p.m_x << ", y: " << p.m_y << "]";

    return os;
}

#endif