#include <iostream>

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    Person p1;
    Engineer e1;
    CivilEngineer c1;

    std::cout << p1 << std::endl;
    std::cout << e1 << std::endl;
    std::cout << c1 << std::endl;

    return 0;
}