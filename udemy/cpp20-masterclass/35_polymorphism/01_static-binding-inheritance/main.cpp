#include <iostream>

#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_circle(const Circle &circle)
{
    circle.draw();
}

void draw_oval(const Oval &oval)
{
    oval.draw();
}

// This gets messy makign more functions for more shape types...

int main()
{
    Shape shape1("Shape1");
    Oval oval1(2.0, 3.5, "Oval1");
    Circle circle1(3.3, "Circle1");

    shape1.draw();
    oval1.draw();
    circle1.draw();

    std::cout << "\n-------\n" << std::endl;

    // Base Pointers
    Shape *shape_ptr = &shape1;
    shape_ptr->draw();

    shape_ptr = &oval1;
    shape_ptr->draw();

    shape_ptr = &circle1;
    shape_ptr->draw();

    std::cout << "\n-------\n" << std::endl;

    // Base References
    Shape &shape_ref = circle1;
    shape_ref.draw();

    std::cout << "\n-------\n" << std::endl;

    // Drawing Shapes
    draw_circle(circle1);
    draw_oval(oval1);

    // Shapes Stored in Collections
    Circle circle_collection[] {circle1, Circle(10.0, "Circle2"), Circle(20.0, "Circle3")};
    Oval oval_collection[] {oval1, Oval(22.3, 51.1, "Oval2")};

    // More shape types woudl require even more arrays, which gets messy quickly

    return 0;
}