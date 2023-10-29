#include <iostream>

// A way to simplify template creation

auto func (auto a, auto b)
{
    return a + b;
}

/*
    The code above will generate the following template
    template <typename T, typename P>
    decltype(auto) func(T a, T b)
    {
        return a + b;
    }
*/

int main()
{
    auto result = func(10, 20.0);
    std::cout << "result: " << result << std::endl;

    return 0;
}