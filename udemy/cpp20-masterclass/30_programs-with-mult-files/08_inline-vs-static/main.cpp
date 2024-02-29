#include <iostream>

/*
    inline: will optimize all definitions for a name into one
    static/unnamed namespaces: will do NO optimization
*/

// inline
void print_age_1();
void print_age_2();

// static (unnamed namespaces)
void print_distance_1();
void print_distance_2();

int main()
{
    std::cout << "inline:" << std::endl;
    print_age_1();
    std::cout << std::endl;
    print_age_2();

    std::cout << "\n-------\n" << std::endl;

    std::cout << "static:" << std::endl;
    print_distance_1();
    std::cout << std::endl;
    print_distance_2();

    return 0;
}