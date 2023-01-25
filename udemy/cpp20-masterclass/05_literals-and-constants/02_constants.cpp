#include <iostream>

int main()
{
    // Constants: cannot change after initialization

    // Must initialize a constant with some value
    const int age {34};
    const float height {1.67f};

    // Cannot modify, will cause an error
    // age = 55;
    // height = 1.8f;

    // Can use constants in other calculations
    int years {3 * age};

    std::cout << "age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;
    std::cout << "years: " << years << std::endl;

    return 0;
}