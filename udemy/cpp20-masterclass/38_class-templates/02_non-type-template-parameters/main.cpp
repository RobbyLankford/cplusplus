#include <iostream>

#include "boxcontainer.h"

template <typename T, T threshold>
class Point
{
    public:
        Point(T x, T y);
        ~Point() = default;
    
    private:
        T m_x;
        T m_y;
};

template <typename T, T threshold>
Point<T, threshold>::Point(T x, T y) : m_x(x), m_y(y) {}


int main()
{
    BoxContainer<int, 5> int_box1;
    BoxContainer<int, 10> int_box2;

    Point<int, 44> point1(10, 20); // Works
    //Point<double, 33.1> point2(11.22, 22.33); // Compiler error: double is not valid

    return 0;
}
