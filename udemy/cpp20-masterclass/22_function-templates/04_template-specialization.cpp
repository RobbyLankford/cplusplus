#include <iostream>
#include <cstring>

// Regular function template
template <typename T> T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

// However, this would not work for a const char * because they are pointers

// Can use a template specialization to specify how a function template should work for a certain input
template <>
const char *maximum<const char *> (const char *a, const char *b)
{
    // This is different than the original function template
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{
    // Usual template
    int a {10};
    int b {23};

    double c {34.7};
    double d {23.4};

    std::string e {"hello"};
    std::string f {"world"};

    auto max_int = maximum(a, b); // int type deduced
    auto max_double = maximum(c, d); // double type deduced
    auto max_string = maximum(e, f); // string type deduced

    std::cout << "max_int: " << max_int << std::endl;
    std::cout << "max_double: " << max_double << std::endl;
    std::cout << "max_string: " << max_string << std::endl;

    // Template specialization
    const char *g {"wild"};
    const char *h {"animal"};

    const char *max_char = maximum(g, h);

    std::cout << "max_char: " << max_char << std::endl;

    return 0;
}