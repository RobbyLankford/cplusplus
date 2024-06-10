#include <iostream>
#include <memory>

#include "ellipse.h"

/*
    Notes:
        - When a virtual function is called through a base class pointer,
          the access specifier in the base class determines whether the
          function is accessible, regardless of the access specifier
          in the derived class
        
        - In general, when the function call is done through dynamic binding
          the access specifier of the base class applies, if the call is done
          through static binding, the access specifier of the derived class applies
*/

int main()
{
    /* Accessing methods the base class pointer */

    // Through base class pointer, can call a virtual method that is private in derived class
    std::shared_ptr<Shape> shape0 = std::make_shared<Ellipse>(1, 5, "ellipse0");

    // Polymorphism
    shape0->draw();

    // Error, func is private in Shape
    //shape0->func();

    std::cout << "\n-------\n" << std::endl;

    /* Direct objects: static binding */

    // Method func() is inherited from Shape and made public in Ellipse scope
    Ellipse ellipse1(1, 6, "ellipse1");

    // Works
    ellipse1.func();

    // Error, draw is private in Ellipse (static binding)
    //ellipse1.draw(); 

    std::cout << "\n-------\n" << std::endl;

    /* Raw derived objecta ssigned to raw base object */

    // Slicing will occur
    Shape shape2 = Ellipse(2, 3, "ellipse2");

    // Shape::draw() will be called
    shape2.draw();

    // Error, func is private in shape
    //shape2.func();

    return 0;
}