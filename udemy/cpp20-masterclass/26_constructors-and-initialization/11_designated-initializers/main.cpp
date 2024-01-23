#include <iostream>

/* For C++20, can be selective in what member variable we want to initialize */

struct Component
{
    double x;
    double y;
    double z;
};

void print_component(const Component &c)
{
    std::cout << "Component [x: " << c.x << ", y: " << c.y << ", z: " << c.z  << "]" << std::endl;
}

int main()
{
    // Use dot-notation to initialize
    Component c1 {.x = 10, .y = 20, .z = 30};

    // Any variable you do not initialize is initialized to 0
    Component c2 {.x = 2.4, .z = 5.8};
    Component c3 {.x = 5.9, .z = 6.1};

    // You cannot change the order in which the variable are declared
    //Component c4 {.x = 4.3, .z = 5.3, .y = 9.4};

    print_component(c1);
    print_component(c2);
    print_component(c3);

    return 0;
}