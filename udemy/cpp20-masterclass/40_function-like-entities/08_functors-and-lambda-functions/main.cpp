#include <iostream>

/* Behind the scenes, a lambda function is converted into a functor by the compiler */

int main()
{
    // Modeled as a functor by the compiler
    int result = [] (int x, int y) -> int { return x + y; }(7, 3);

    std::cout << result << std::endl;

    auto func = [] (int x, int y) -> int { return x + y; };
    result = func(10, 20);

    std::cout << result << std::endl;

    return 0;
}
