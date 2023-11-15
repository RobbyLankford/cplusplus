#include <iostream>
#include <concepts>

// Can constrain the auto parameters to comply with a concept
std::integral auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}

int main()
{
    //std::floating_point auto x = add(5, 8); // will fail because output must be integral type
    //std::integral auto x = add(5.0, 8.0); // will fail because inputs must be integral type
    std::integral auto x = add(5, 8);

    return 0;
}