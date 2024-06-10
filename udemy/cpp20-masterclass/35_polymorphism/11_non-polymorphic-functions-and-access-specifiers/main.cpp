#include <iostream>
#include <memory>

#include "ellipse.h"

int main()
{
    /* Accessing methods and objects through the base class pointer */
    std::shared_ptr<Shape> shape0 = std::make_shared<Ellipse>(1, 5, "ellipse0");

    // Static binding
    shape0->draw();

    // Will not work as func is private in Shape
    //shape0->func();

    std::cout << "\n-------\n" << std::endl;

    /* Direct objects: static binding */

    // Method func is inherited from Shape and made public in Ellipse scope
    Ellipse ellipse1(1, 6, "ellipse1");

    // Works
    ellipse1.func();

    // Error, draw() is private in Ellipse
    //ellipse1.draw();

    std::cout << "\n-------\n" << std::endl;

    /* Raw derived object assigned to raw base object */
    
    // Slicing will occur
    Shape shape2 = Ellipse(2, 3, "ellipse2");

    // Shape::draw() called
    shape2.draw();

    // Error, func() is private in Shape
    //shape2.func();

    return 0;
}