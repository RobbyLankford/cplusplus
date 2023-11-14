#include <iostream>
#include <concepts>

// Concepts can be combined with the logical operators && and ||

template <typename T>
concept TinyType = requires(T t)
{
    sizeof(T) <= 4; // Simple requirement
    requires sizeof(T) <= 4; // Nested requirement
};

template <typename T>
requires std::integral<T> && TinyType<T>        // AND operator
// requires std::integral<T> || TinyType<T>     // OR operator
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int a {7};
    int b {5};

    add(a, b); // Works fine because int is less or equal to size 4

    long long int x {7};
    long long int y {5};

    // add(x, y); // error because long long in is not less than or equal to size 4

    return 0;
}