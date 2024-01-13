#include <iostream>

struct Point
{
    double x;
    double y;
};

void print_point(const Point &p)
{
    std::cout << "Point [x: " << p.x << ", y: " << p.y << "]" << std::endl;
}

int main()
{   
    // All aggregates can be initialized with brace initialization
    Point p1 {10, 20};
    int scores[] {44, 62, 67, 82, 98, 43, 2, 5, 67};

    print_point(p1);

    return 0;
}