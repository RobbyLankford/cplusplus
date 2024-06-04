#include <iostream>

#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape *s)
{
    s->draw();
}

void draw_shape_v1(const Shape &s_r)
{
    s_r.draw();
}

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
    draw_shape(&circle1);
    draw_shape_v1(circle1);

    std::cout << "\n-------\n" << std::endl;

    // Shapes Stored in Collections
    Shape *shape_collection[] {&shape1, &oval1, &circle1};

    for (Shape *s_ptr : shape_collection)
    {
        s_ptr->draw();
    }

    return 0;
}