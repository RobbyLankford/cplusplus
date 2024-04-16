#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    friend std::ostream &operator<<(std::ostream &os, const Point &p);

    public:
        Point() = default;
        Point(double x, double y, int data): m_x(x), m_y(y), p_data(new int(data)) {}

        // Copy constructor
        Point(const Point &p);

        Point &operator=(const Point &right_op)
        {
            std::cout << "Copy assignment operator called" << std::endl;

            if (this != &right_op)
            {
                delete p_data;
                p_data = new int(*(right_op.p_data));
                m_x = right_op.m_x;
                m_y = right_op.m_y;
            }

            return *this;
        }

        void set_data(int data)
        {
            *p_data = data;
        }

        ~Point()
        {
            delete p_data;
        }
    
    private:
        double length() const;

        double m_x {};
        double m_y {};

        int *p_data;
};

inline std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << "Point [x: " << p.m_x << ", y: " << p.m_y << " data: " << *(p.p_data) << "]";

    return os;
}

#endif