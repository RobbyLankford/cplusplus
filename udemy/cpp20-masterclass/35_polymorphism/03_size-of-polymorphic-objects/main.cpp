#include <iostream>

#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    // Comparing Size Objects
    std::cout << "sizeof(Shape): " << sizeof(Shape) << std::endl; // Dynamic: 40
    std::cout << "sizeof(Oval): " << sizeof(Oval) << std::endl; // Dynamic: 56
    std::cout << "sizeof(Circle): " << sizeof(Circle) << std::endl; // Dynamic: 56

    std::cout << "\n-------\n" << std::endl;

    // Slicing (Slice Off "Extra" Classes)
    Circle circle1(3.3, "Circle1");
    Shape shape1 = circle1;
    shape1.draw();

    return 0;
}