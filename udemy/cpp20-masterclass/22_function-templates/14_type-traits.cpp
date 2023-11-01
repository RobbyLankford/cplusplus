#include <iostream>
#include <type_traits>

// Use static_assert to ensure, at compile time, that inputs are correct types
template <typename T>
void print_number(T n)
{
    static_assert(std::is_integral<T>::value, "Must pass in an integral argument");
    std::cout << "n: " << n << std::endl;
}

int main()
{
    // Can use checks to ensure that a declared type is what it is supposed to be

    // Syntax is std::is_*<*>::value
    std::cout << std::boolalpha;
    std::cout << "std::is_integral<int>: " << std::is_integral<int>::value << std::endl;
    std::cout << "std::is_floating_point<int>: " << std::is_floating_point<int>::value << std::endl;

    std::cout << std::endl;

    // A shorter method is to use std::is_*_v<*>
    std::cout << "std::is_integral_v<int>: " << std::is_integral_v<int> << std::endl;
    std::cout << "std::is_floating_point_v<int>:" << std::is_floating_point_v<int> << std::endl;

    std::cout << std::endl;

    int n = 7;
    print_number(n);
    // print_number(std::string("hello")); // will cause a compiler error, not an integral type

    return 0;
}