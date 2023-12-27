#include <iostream>
#include "cylinder.h"

int main()
{
    // Uses default constructor
    Cylinder cylinder1;

    std::cout << "Radius: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "Height: " << cylinder1.get_height() << std::endl;

    std::cout << std::endl;

    // Uses constructor with default height
    Cylinder cylinder2(5);
    
    std::cout << "Radius: " << cylinder2.get_base_radius() << std::endl;
    std::cout << "Height: " << cylinder2.get_height() << std::endl;

    return 0;
}