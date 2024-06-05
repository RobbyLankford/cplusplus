#include <iostream>
#include <memory>

#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    Oval *shape_ptr = new Circle(10, "Circle1");

    // First draw method (from Oval class)
    shape_ptr->draw();

    // Second draw method (from Oval class)
    shape_ptr->draw(45, "Red");

    return 0;
}