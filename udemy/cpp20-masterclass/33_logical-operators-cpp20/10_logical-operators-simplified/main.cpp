#include <iostream>
#include "number.h"

int main()
{
    Number n1(10);
    Number n2(20);

    std::cout << std::boolalpha;

    // Having defined only 4 comparisons, all these comparisons are now possible
    std::cout << "n1 > n2: " << (n1 > n2) << std::endl;
    std::cout << "15 > n2: " << (15 > n2) << std::endl;
    std::cout << "n1 > 25: " << (n1 > 25) << std::endl;

    std::cout << std::endl;

    std::cout << "n1 >= n2: " << (n1 >= n2) << std::endl;
    std::cout << "15 >= n2: " << (15 >= n2) << std::endl;
    std::cout << "n1 >= 25: " << (n1 >= 25) << std::endl;

    std::cout << std::endl;

    std::cout << "n1 == n2: " << (n1 == n2) << std::endl;
    std::cout << "15 == n2: " << (15 == n2) << std::endl;
    std::cout << "n1 == 25: " << (n1 == 25) << std::endl;

    std::cout << std::endl;

    std::cout << "n1 < n2: " << (n1 < n2) << std::endl;
    std::cout << "15 < n2: " << (15 < n2) << std::endl;
    std::cout << "n1 < 25: " << (n1 < 25) << std::endl;

    std::cout << std::endl;

    std::cout << "n1 <= n2: " << (n1 <= n2) << std::endl;
    std::cout << "15 <= n2: " << (15 <= n2) << std::endl;
    std::cout << "n1 <= 25: " << (n1 <= 25) << std::endl;

    return 0;
}