#include <iostream>

/*
    Sometimes it is more flexible to split the function into its header and body
    Can store these items in separate places
    Usually the header above main() and the body below main()
*/

// Function declarations of headers/prototypes
int max(int a, int b);

int min(int a, int b);

int inc_mult(int a, int b);

// Main Function
int main()
{
    int x {5};
    int y {12};

    std::cout << "max(" << x << ", " << y << "): " << max(x, y) << std::endl;
    std::cout << std::endl;
    std::cout << "min(" << x << ", " << y << "): " << min(x, y) << std::endl;
    std::cout << std::endl;
    std::cout << "inc_mult(" << x << ", " << y << "): " << inc_mult(x, y) << std::endl;

    return 0;
}

// Function Bodys
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int inc_mult(int a, int b)
{
    return ( (++a) * (++b) );
}