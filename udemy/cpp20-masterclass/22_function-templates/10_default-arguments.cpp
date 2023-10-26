#include <iostream>

// Can set a default return type in a function template

// Default ReturnType goes in function declaration
template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b);

int main()
{   
    // Default is double
    auto max1 = maximum(10, 20);

    std::cout << "max1: " << max1 << std::endl;
    std::cout << "sizeof(max1): " << sizeof(max1) << std::endl;
    std::cout << std::endl;

    // Specify the return type as int
    auto max2 = maximum<int>(10, 20);

    std::cout << "max2: " << max2 << std::endl;
    std::cout << "sizeof(max2): " << sizeof(max2) << std::endl;
    std::cout << std::endl;

    // Can specify all inputs as int
    auto max3 = maximum<int, int, int>(10, 20);

    std::cout << "max3: " << max3 << std::endl;
    std::cout << "sizeof(max3): " << sizeof(max3) << std::endl;

    return 0;
}

// Using a default type allows function definition to be separate
template <typename ReturnType, typename T, typename P>
ReturnType maximum(T a, P b)
{
    return (a > b) ? a : b;
}
