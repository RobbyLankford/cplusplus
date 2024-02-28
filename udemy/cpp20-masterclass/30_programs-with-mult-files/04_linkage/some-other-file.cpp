#include <iostream>

// Internal linkage, different from the distance variable in main
const double distance {};

// Declaration of some variable defined in some other translation unit
extern int item_count;

// Functions have external linkage by default
void print_distance()
{
    std::cout << "distance (other_file): " << distance << ", &distance: " << &distance << std::endl;
}

void print_item_count()
{
    std::cout << "item_count (other_file): " << item_count << ", &item_count: " << &item_count << std::endl;
}