#include <iostream>
#include <string_view>

// Have multiple functions of the same name, but different parameters

// Basic Function
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Cannot overload on the return type, will cause a compiler error
// double max(int a, int b)
// {
//     return (a > b) ? a : b;
// }

// Can overload on return AND input types
double max(double a, double b)
{
    return (a > b) ? a : b;
}

// Can also mix up input types, add additional inputs, etc.
double max(int a, double b)
{
    return (a > b) ? a : b;
}

double max(double a, int b)
{
    return (a > b) ? a : b;
}

double max(double a, int b, int c)
{
    return (a > b) ? a : b;
}

// Can also mix numbers and characters
std::string_view max(std::string_view a, std::string_view b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x {4};
    int y {9};
    double a {5.4};
    double b {7.4};
    std::string_view str1 {"Hello"};
    std::string_view str2 {"World"};

    std::cout << "max (" << x << ", " << y << "): " << max(x, y) << std::endl;
    std::cout << "max (" << a << ", " << b << "): " << max(a, b) << std::endl;
    std::cout << "max (" << x << ", " << b << "): " << max(x, b) << std::endl;
    std::cout << "max (" << a << ", " << y << "): " << max(a, y) << std::endl;
    
    std::cout << "max (" << str1 << ", " << str2 << "): " << max(str1, str2) << std::endl;

    return 0;
}
