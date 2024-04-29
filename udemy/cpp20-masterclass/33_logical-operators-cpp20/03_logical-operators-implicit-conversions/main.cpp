#include <iostream>
#include "number.h"

int main()
{
    Number n1(10);
    Number n2(20);

    std::cout << std::boolalpha;

    // Two Number objects
    std::cout << "n1 < n2: " << (n1 < n2) << std::endl;

    // Integer on left, Number object on right
    std::cout << "15 < n2: " << (15 < n2) << std::endl;

    // Number object on left, Integer on right
    std::cout << "n1 < 25: " << (n1 < 25) << std::endl;

    return 0;
}