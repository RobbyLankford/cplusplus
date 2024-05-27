#include <iostream>

#include "person.h"
#include "engineer.h"

int main()
{
    Person p1("John Doe", 23, "123 Street");

    std::cout << p1 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    Engineer eng1("John Doe", 23, "123 Street", 4);

    std::cout << eng1 << std::endl;

    return 0;
}