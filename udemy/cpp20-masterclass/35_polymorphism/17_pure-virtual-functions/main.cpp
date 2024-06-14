#include <iostream>

#include "circle.h"
#include "rectangle.h"

/*
    Notes
    - If a class has at least one pure virtual function, it becomes an abstract class
    - Cannot create objects of an abstract class (compiler error)
    - Derived classes from an abstract class must explicitly override all pure virtual functions
    - Pure virtual functions do not have an implementation in the abstract class
    - Pure virtual functions are meant to be implemented by deriving classes
    - Cannot call the pure virtual functions from the constructor of the abstract class
    - Constructor of the abstract class is used by deriving class
*/

int main()
{
    const Shape *shape_rect = new Rectangle(10, 10, "rect1");
    double surface = shape_rect->surface();

    std::cout << "Dynamic type of shape_rect: " << typeid(*shape_rect).name() << std::endl;
    std::cout << "The surface of shape_rect is: " << surface << std::endl;

    std::cout << "\n-------\n" << std::endl;

    const Shape *shape_circle = new Circle(10, "circle1");
    surface = shape_circle->surface();

    std::cout << "Dynamic type of shape_circle: " << typeid(*shape_circle).name() << std::endl;
    std::cout << "The surface of shape_circle is: " << surface << std::endl;

    return 0;
}