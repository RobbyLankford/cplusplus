#include <iostream>

/*
    A struct is like a class, except that its member variables are public by default
*/

// Common use case is when you want public member variables by default
struct Point
{
    double x;
    double y;
};

void print_point(const Point &point)
{
    std::cout << "Point [x: " << point.x << ", y: " << point.y << "]" << std::endl;
}

// Can override public by default in struct by creating public and private
class Dog
{
    public:
        std::string d_name; // would have been private by default
};

struct Cat
{
    private:
        std::string c_name; // would have been public by default
};

int main()
{
    Dog dog1;
    Cat cat1;

    dog1.d_name = "Fluffy";
    // cat1.c_name = "Kitty"; // Compiler error because c_name is private

    Point point1;
    point1.x = 10;
    point1.y = 55.5;

    print_point(point1);

    point1.x = 40.4;
    point1.y = 2.7;
    
    print_point(point1);

    return 0;
}