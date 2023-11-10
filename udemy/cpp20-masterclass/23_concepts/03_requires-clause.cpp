#include <iostream>
#include <concepts>

/*
    The requires clause can take in four kinds of requirements:
    1. Simple requirements
    2. Nested requirements
    3. Compound requirements
    4. Type requirements (not covered here)
*/

// Simple requirement: expressions only checked for valid syntax
template <typename T>
concept TinyType1 = requires(T t)
{
    sizeof(T) <= 4; // Only checks syntax
};

// Nested requirement: checks if the expression is true
template <typename T>
concept TinyType2 = requires(T t)
{
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
};

// Compound requirement: multiple reqirements
template <typename T>
concept Addable = requires(T a, T b)
{
    // noexcept is optional
    {a + b} noexcept -> std::convertible_to<int>; // Does not throw an exception

    /*
        Checks if a + b is valid syntax, does not throw exceptions.
        Then, checks if the result a + b can be converted to int.
    */
};

Addable auto add(Addable auto a, Addable auto b)
{
    return a + b;
}

int main()
{
    double x {67};
    double y {56};
    auto result = add(x, y);

    std::cout << "result: " << result << std::endl;
    std::cout << "sizeof(result): " << sizeof(result) << std::endl;

    return 0;
}