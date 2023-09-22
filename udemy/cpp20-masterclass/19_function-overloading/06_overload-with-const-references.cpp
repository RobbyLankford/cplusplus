#include <iostream>

// These functions return a copy, so they are valid overloads
int max(int &a, int &b)
{
    std::cout << "max with int & called" << std::endl;

    // Can change a and b through the reference
    a = 200;

    return (a > b) ? a : b;
}

int max(const int &a, const int &b)
{
    std::cout << "max with const int & called" << std::endl;

    // Can NOT change a and b through the reference
    //a = 200; // compiler error

    return (a > b) ? a : b;
}

int main()
{
    int a {45};
    int b {85};

    const int &ref_a = a;
    const int &ref_b = b;

    int max1 = max(a, b);

    std::cout << "max1: " << max1 << std::endl;

    std::cout << std::endl;

    int max2 = max(ref_a, ref_b);

    std::cout << "max2: " << max2 << std::endl;

    return 0;
}