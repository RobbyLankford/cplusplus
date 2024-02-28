#include <iostream>

/*
    Linkage: A property associated with a name 
    - Controls how wide or narrow the visibility is across translation units
    
    Types of Linkage
    - No: only available in the place it is defined
    - Internal: only visible in the translation unit
    - External: across the program/translation units
*/

void some_function()
{
    // No Linkage: only available here
    int age {34};

    std::cout << "age: " << age << std::endl;
}

// Internal Linkage
const double distance {45.8};

// External Linkage
int item_count {6};

// Use extern for items declared in other files/translation units
extern void print_distance();
extern void print_item_count();

int main()
{
    std::cout << "item_count(main): " << item_count << ", &item_count: " << &item_count << std::endl;

    std::cout << "\n-------\n" << std::endl;

    print_item_count();

    return 0;
}