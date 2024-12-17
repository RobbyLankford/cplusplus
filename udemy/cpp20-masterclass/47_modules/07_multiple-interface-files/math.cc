module;

#include <string>

export module math_stuff;

import <iostream>;

export
{
    double add(double a, double b);

    class Point
    {
        public:
            Point() = default;
            Point(double x, double y);

            friend std::ostream &operator<<(std::ostream &out, const Point &point)
            {
                out << "Point [x: " << point.m_x << ", y: " << point.m_y << "]";

                return out;
            }
        
        private:
            double m_x;
            double m_y;
    };
}