#include <iostream>

/*
    To return a reference with a deduced type, need to use '&' after 'auto'
*/

// Not using '&' will return a copy of the input variable
auto max1(int &a, int &b)
{
    if (a > b)
    {
        return a; // A copy of a, not a reference to it
    }
    else
    {
        return b; // A copy of b, not a reference to it
    }
}

// The correct way is to include '&' after 'auto'
auto &max2(int &a, int &b)
{
    if (a > b)
    {
        return a; // Returns a reference to input variable a
    }
    else
    {
        return b; // Returns a reference to input variable b
    }
}

int main()
{
    int x {10};
    int y {45};

    // int &result1 = max1(x, y); // Error, cannot treat return value as a reference
    int result1 = max1(x, y); // This is fine, but a copy is returned, not a reference

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "result1: " << result1 << std::endl;

    std::cout << std::endl;

    result1++; // Will only increment result1, because it is not a reference

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "result1: " << result1 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    int &result2 = max2(x, y); // Will return a reference to y, since it is larger

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "result2: " << result2 << std::endl;

    std::cout << std::endl;

    result2++; // Will increment result2 AND y, because it is a reference

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "result2: " << result2 << std::endl;

    return 0;
}