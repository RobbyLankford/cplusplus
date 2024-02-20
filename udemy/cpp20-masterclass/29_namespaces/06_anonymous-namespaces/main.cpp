#include <iostream>

/*
    Anonymous Namespaces: can create a namespace without naming it
    - When compiler sees an anonymous namespace declaration, it will generate an internal name
    - Internal unique namespace is NOT accessible to the developer
    - There can be only one anonymous namespace for a single translation unit
    - If multiple anonymous namespace blocks are set up, they will be extensions of the first one
    - Anonymous namespaces in different translation units are completely separate from each other
    - Names declared inside anonymous namespaces are only reachable in the translation unit where declared
*/

// Can declare here and add the definition later
namespace
{
    double add(double a, double b);
}

int main()
{
    double result = add(10.2, 20.2);

    std::cout << "result: " << result << std::endl;

    return 0;
}

namespace
{
    double add(double a, double b)
    {
        return a + b;
    }
}