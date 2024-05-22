#include <iostream>

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    Person p1;

    std::cout << p1 << std::endl;
    std::cout << std::endl;

    // Person is constructed first, then Engineer
    Engineer e1;

    std::cout << e1 << std::endl;
    std::cout << std::endl;

    // Person is constructed first, then Engineer, then CivilEngineer
    CivilEngineer ce1;

    std::cout << ce1 << std::endl;

    return 0;
}