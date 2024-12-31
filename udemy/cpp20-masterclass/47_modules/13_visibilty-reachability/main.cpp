#include <iostream>

import math;

int main()
{
    // Point is not visible, so we cannot create its instance
    // math::Point p(1, 2);

    auto p = math::generateRandomPoint();

    std::cout << p << std::endl;
    std::cout << "x: " << p.getX() << std::endl;

    return 0;
}