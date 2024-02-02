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
        ~Point();

        double length() const;

        size_t get_point_count() const
        {
            return m_point_count;
        }

        void initialize_pointer(double x, double y)
        {
            p_m_point4 = new Point(x, y);
        }

        void print_info() const
        {
            std::cout << "Point [m_x: " << m_x << ", m_y: " << m_y << "]" << std::endl;
        }
    
    /* What if we wanted to initialize objects of type Point within the class of Point? */
    public:
        // This would not work because Point has not yet been completely defined
        // Point m_point1;
        // const Point m_point2;
        // static inline const Point m_point3 {};

        // Declaring it as a pointer WILL work as the Point object will be created later
        Point *p_m_point4;

        // Declaring it as a static member variable WILL work as the compiler will come back to it later
        static const Point m_point4;
        static Point m_point5;

    private:
        double m_x;
        double m_y;
        inline static size_t m_point_count {};
};

#endif