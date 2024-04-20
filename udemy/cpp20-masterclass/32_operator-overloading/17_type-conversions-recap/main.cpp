#include <iostream>

#include "point.h"
#include "number.h"

void do_something_with_point(const Point &p)
{
    std::cout << "point: " << p << std::endl;
}

int main(int argc, char **argv)
{
    Point p1(10, 10);
    Number n1(22);

    p1 = n1;

    do_something_with_point(n1);

    return 0;
}