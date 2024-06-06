#include <iostream>

#include "ellipse.h"

int main()
{
    // Shapes
    Shape shape1("shape1");
    std::cout << "Shape count: " << Shape::m_count << std::endl;

    Shape shape2("shape2");
    std::cout << "Shape count: " << Shape::m_count << std::endl;

    Shape shape3;
    std::cout << "Shape count: " << Shape::m_count << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Ellipses
    Ellipse ellipse1(10, 12, "ellipse1");
    std::cout << "Shape count: " << Shape::m_count << std::endl;
    std::cout << "Ellipse count: " << Ellipse::m_count << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Shape Polymorphism
    Shape *shapes[] {&shape1, &ellipse1};
    
    for (auto &s : shapes)
    {
        std::cout << "Count: " << s->get_count() << std::endl;
    }

    return 0;
}