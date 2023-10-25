#include <iostream>

/*
    Can use `decltype(auto)` to remove the need to duplicate code
    However, using it means you have to define your function all at once
*/

template <typename T, typename P>
decltype(auto) maximum(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x {7};
    double y {45.9};

    auto result = maximum(x, y);

    std::cout << "result: " << result << std::endl;
    std::cout << "sizeof(result): " << sizeof(result) << std::endl;

    return 0;
}