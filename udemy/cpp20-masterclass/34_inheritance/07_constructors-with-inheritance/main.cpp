#include <iostream>

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    Person p1("John Smith", 27, "33 Street #75");
    Engineer e1("John Smith", 27, "33 Street #75", 12);
    CivilEngineer ce1("John Smith", 27, "33 Street #75", 12, "Geotechnical");

    std::cout << std::endl;

    std::cout << "Person:" << std::endl;
    std::cout << p1 << std::endl;

    std::cout << std::endl;

    std::cout << "Engineer:" << std::endl;
    std::cout << e1 << std::endl;

    std::cout << std::endl;

    std::cout << "Civil Engineer:" << std::endl;
    std::cout << ce1 << std::endl;

    std::cout << std::endl;

    return 0;
}