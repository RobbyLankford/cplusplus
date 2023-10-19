#include <iostream>

// Template type parameters by value
// template <typename T> T maximum(T a, T b);

// Template type parameters by reference
template <typename T> const T &maximum(const T &a, const T &b);

// Do not use both by-value and by-reference overloads in a single template, it will cause an error

int main()
{
    double a {23.5};
    double b {51.2};

    double max = maximum(a, b);

    // Show that they are the same address inside the function and outside
    std::cout << "Out - &a: " << &a << std::endl;
    std::cout << "max: " << max << std::endl;

    return 0;
}

template <typename T> const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a: " << &a << std::endl;
    
    return (a > b) ? a : b;
}