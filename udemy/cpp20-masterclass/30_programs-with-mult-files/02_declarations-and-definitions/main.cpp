#include <iostream>
#include "person.h"

/*
    Declaration: Introduces the name in a file
    Definition: Says what the name is or what it does

    A few facts:
    - If a name is never used, its definition is not needed and code will compile.
    - If compile without a declaration, and the name is used, get compiler error: unknown name
    - If compile with a declaration, but no definition, and name is used, get linker error
*/

// Declaration and definition
double weight {0};

// Declaration (defined in some_other_file.cpp)
double add(double a, double b);

// Declaration and definition
struct Point
{
    double m_x;
    double m_y;
};


int main()
{
    std::cout << "weight: " << weight << std::endl;
    
    weight = 5;

    std::cout << "weight: " << weight << std::endl;
    std::cout << std::endl;

    double result = add(10, 20.5);

    std::cout << "result: " << result << std::endl;
    std::cout << std::endl;

    Person p1("John Snow", 27);
    p1.print_info();

    return 0;
}