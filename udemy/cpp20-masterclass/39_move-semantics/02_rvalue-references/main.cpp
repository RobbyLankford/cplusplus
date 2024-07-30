#include <iostream>

/*
    When an rvalue reference is bound to an rvalue, the life is extended
    We can manipulate the rvalue through the rvalue reference
*/

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int x {5};
    int y {10};

    int &&result = x + y; // && is the rvalue reference keyword
    double &&outcome = add(10.1, 20.2);

    std::cout << "result: " << result << std::endl;
    std::cout << "outcome: " << outcome << std::endl;

    return 0;
}
