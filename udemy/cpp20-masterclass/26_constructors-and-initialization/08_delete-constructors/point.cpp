#include "point.h"

Point::Point(double x_param, double y_param)
    : x(new double(x_param)), y(new double(y_param))
{
    std::cout << "Point constructed: " << this << std::endl;
}

Point::~Point()
{
    delete x;
    delete y;
}