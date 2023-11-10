#include <iostream>
#include <type_traits>
#include <concepts>

// Aside from the built-in concepts, custom ones can be created
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

MyIntegral auto add(MyIntegral auto a, MyIntegral auto b)
{
    return a + b;
}

template <typename T>
concept Multipliable = requires(T a, T b)
{
    a * b;
};

template <typename T>
concept Incrementable = requires(T a)
{
    a += 1;
    ++a;
    a++;
};

template <typename T>
requires Incrementable<T>
T add (T a, T b)
{
    return a + b;
}

int main()
{
    double x {6};
    double y {7};

    add(x, y);

    return 0;
}