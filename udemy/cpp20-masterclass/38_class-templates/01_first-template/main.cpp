#include <iostream>

#include "boxcontainer.h"

class Point
{
    friend std::ostream &operator<<(std::ostream &out, const Point &operand);

    public:
        Point(double x, double y) : m_x(x), m_y(y) {}

        // Default constructor must be there for bags of Points to be able to be initialized
        Point() : m_x(0.0), m_y(0.0) {}
    
    private:
        double m_x {};
        double m_y {};
};

std::ostream &operator<<(std::ostream &out, const Point &operand)
{
    out << "Point [x: " << operand.m_x << ", y: " << operand.m_y << "]";

    return out;
}

// A template is only instantiated once, it is reused every time the type is needed in the code

int main()
{
    // int
    std::cout << "BoxContainer of int: " << std::endl;
    BoxContainer<int> int_box;

    int_box.add(33);
    int_box.add(44);

    std::cout << "int_box: " << int_box << std::endl;
    std::cout << std::endl;

    // double
    std::cout << "BoxContainer of double: " << std::endl;
    BoxContainer<double> double_box;

    double_box.add(100.11);
    double_box.add(200.22);

    std::cout << "double_box: " << double_box << std::endl;
    std::cout << std::endl;

    // Point
    std::cout << "BoxContainer of Point: " << std::endl;
    BoxContainer<Point> point_box;

    point_box.add(Point(20.1, 20.2));
    point_box.add(Point(200.22, 300.33));

    std::cout << "point_box: " << point_box << std::endl;
    std::cout << std::endl;

    // std::string
    std::cout << "BoxContainer of std::string: " << std::endl;
    BoxContainer<std::string> string_box;

    string_box.add("Hello");
    string_box.add("World");

    std::cout << "string_box: " << string_box << std::endl;
    std::cout << std::endl;

    // char
    std::cout << "BoxContainer of char: " << std::endl;
    BoxContainer<char> char_box;

    char_box.add('H');
    char_box.add('e');
    char_box.add('l');
    char_box.add('l');
    char_box.add('o');

    std::cout << "char_box: " << char_box << std::endl;

    std::cout << "\n-------\n" << std::endl;

    BoxContainer<int> int_box1;
    int_box1.add(10);
    int_box1.add(21);
    int_box1.add(44);

    std::cout << "int_box1: " << int_box1 << std::endl;

    int_box1.add(10);
    int_box1.add(55);
    int_box1.add(10);

    std::cout << "int_box1: " << int_box1 << std::endl;
    std::cout << std::endl;

    int_box1.remove_item(55);

    std::cout << "int_box1: " << int_box1 << std::endl;
    std::cout << std::endl;

    size_t removed = int_box1.remove_all(10);
    std::cout << removed << std::endl;
    std::cout << "int_box1: " << int_box1 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    BoxContainer<int> int_box2(int_box);

    std::cout << "int_box: " << int_box << std::endl;
    std::cout << "int_box2: " << int_box2 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    int_box2 = int_box1;
    
    std::cout << "int_box1: " << int_box1 << std::endl;
    std::cout << "int_box2: " << int_box2 << std::endl;
    std::cout << std::endl;

    int_box2 += int_box;

    std::cout << "operator+=" << std::endl;
    std::cout << "int_box1: " << int_box1 << std::endl;
    std::cout << "int_box2: " << int_box2 << std::endl;
    std::cout << std::endl;

    BoxContainer<int> int_box3;
    int_box3.add(100);
    int_box3.add(200);

    BoxContainer<int> int_box4;
    int_box4 = int_box2 + int_box3;
    
    std::cout << "operator+" << std::endl;
    std::cout << "int_box4: " << int_box4 << std::endl;

    return 0;
}
