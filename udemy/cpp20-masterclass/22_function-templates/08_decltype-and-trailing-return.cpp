#include <iostream>

/*
    decltype: detects the type of the result of an expression
    trailing return type: return type that is specified in a different location
*/

// Trailing return using decltype
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a {9};
    double b {5.5};

    // Can use the return of an expression to declare the type
    std::cout << "size: " << sizeof(decltype((a > b) ? a : b)) << std::endl; // Will return int type

    // Can use it to declare a variable type
    decltype((a > b) ? a : b) c {67}; // c will be an int

    std::cout << "size: " << sizeof(c) << std::endl;

    // Can use to specify the return type of a template
    auto result = maximum(a, b); // will be an int
    std::cout << "size: " << sizeof(result) << std::endl;

    return 0;
}
