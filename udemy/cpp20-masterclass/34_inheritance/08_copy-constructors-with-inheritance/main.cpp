#include <iostream>

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    Person p1("John Smith", 41, "33 Street");
    Person p2(p1);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    Engineer e1("John Smith", 41, "33 Street", 12);
    Engineer e2(e1);

    std::cout << e1 << std::endl;
    std::cout << e2 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    CivilEngineer ce1("John Smith", 41, "33 Street", 12, "Roads");
    CivilEngineer ce2(ce1);

    std::cout << ce1 << std::endl;
    std::cout << ce2 << std::endl;

    return 0;
}