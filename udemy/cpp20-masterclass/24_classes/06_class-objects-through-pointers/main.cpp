#include <iostream>
#include "cylinder.h"

int main()
{
    // Create a Cylinder object on the stack (uses . notation)
    Cylinder c1(10, 2);
    
    std::cout << "Volume (c1): " << c1.volume() << std::endl;

    // Create a Cylinder object on the heap (uses dereferencing)
    Cylinder *c2 = new Cylinder(11, 20);

    std::cout << "Volume (c2): " << (*c2).volume() << std::endl;

    // Using dereferencing is ugly, so use -> notation
    std::cout << "Volume (c2): " << c2->volume() << std::endl;

    // Remember to release memory from the heap
    delete c2;

    return 0;
}