#include <iostream>
#include <memory>

#include "boxcontainer.h"

/*
    Move Only Types:
    - A type whose copy constructor and copy assignment operator have been deleted
    - However, its move constructor and move assignment operator are left in
    - Its objects cannot be copied, they can only be moved
*/

void populate_box(BoxContainer<int> &box, int modifier)
{
    for (size_t i {0}; i < 20; i++)
        box.add((i + 1) * modifier);
}

int main()
{
    BoxContainer<int> box1;
    populate_box(box1, 2);

    std::cout << "Box1: " << box1 << std::endl;

    std::cout << std::endl;

    BoxContainer<int> box2;
    box2 = std::move(box1);

    std::cout << "Box1: " << box1 << std::endl;
    std::cout << "Box2: " << box2 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    std::unique_ptr<int> ptr_int = std::make_unique<int>(33);

    std::cout << "*ptr_int: " << *ptr_int << std::endl;

    std::unique_ptr<int> ptr_int_copy = std::move(ptr_int);

    if (ptr_int)
    {
        std::cout << "*ptr_int: " << *ptr_int << std::endl;
    }
    else
    {
        std::cout << "ptr_int does not contain any valid data" << std::endl;
    }

    std::cout << "*ptr_int_copy: " << *ptr_int_copy << std::endl;

    return 0;
}
