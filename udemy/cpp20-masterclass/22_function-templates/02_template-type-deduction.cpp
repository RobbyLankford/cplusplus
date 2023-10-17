#include <iostream>
#include <string>

template <typename T> T maximum(T a, T b);

int main()
{
    int a {10};
    int b {23};

    double c {34.7};
    double d {23.4};

    std::string e {"hello"};
    std::string f {"world"};

    // Implicit type deductions
    maximum(a, b); // int type deduced
    maximum(c, d); // double type deduced
    maximum(e, f); // string type deduced

    // Explicit type deductions
    maximum<double>(c, d); // Want the double version (if does not exist yet, it will be created)
    maximum<double>(a, c); // Works, even if parameters are different types; int will be converted to double
    //maximum<double>(a, e); // Error, cannot convert std::string to double

    return 0;
}

template <typename T> T maximum(T a, T b)
{   
    // a and b must support the > operator, otherwise an error is thrown
    return (a > b) ? a : b;
}