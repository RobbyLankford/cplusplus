#include <iostream>

// Can use auto type deduction on the return type
template <typename T, typename P>
auto maximum(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{
    // The largest type is what will be deduced and returned
    auto max1 = maximum(12.5, 33); // double > int so a double is returned

    std::cout << "max1: " << max1 << std::endl;
    std::cout << "sizeof(max1): " << sizeof(max1) << std::endl;

    std::cout << std::endl;

    auto max2 = maximum('b', 90); // int > char so an int is returned

    std::cout << "max2: " << max2 << std::endl;
    std::cout << "sizeof(max2): " << sizeof(max2) << std::endl;

    std::cout << std::endl;

    // Can also explicitly specify the different input types to force the return type
    auto max3 = maximum<char, char>('b', 90);
    
    std::cout << "max3: " << max3 << std::endl;
    std::cout << "sizeof(max3): " << sizeof(max3) << std::endl;

    return 0;
}