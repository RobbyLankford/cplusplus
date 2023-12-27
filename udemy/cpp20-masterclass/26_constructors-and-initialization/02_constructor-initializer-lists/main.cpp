#include <iostream>
#include "cylinder.h"

int main()
{
    // Uses default constructor
    Cylinder cylinder1;

    std::cout << "Radius: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "Height: " << cylinder1.get_height() << std::endl;
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    return 0;
}