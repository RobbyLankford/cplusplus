#include <iostream>
#include <cstring>

// Function Template
template <typename T> T maximum(T a, T b)
{
    std::cout << "Template overload called (T)" << std::endl;
    return (a > b) ? a : b;
}

// Raw overload: Will take precendence over any template instance
const char *maximum(const char *a, const char *b)
{
    std::cout << "Raw overload called" << std::endl;
    return (std::strcmp(a, b) > 0) ? a : b;
}

// Overload through template: Will take precedence over raw overload
template <typename T> T *maximum(T *a, T *b)
{
    std::cout << "Template overload called (T*)" << std::endl;
    return (*a > *b) ? a : b;
}

int main()
{
    const char *g {"wild"};
    const char *h {"animal"};

    // Raw overload called over function template
    const char *result1 = maximum(g, h);
    std::cout << "result: " << result1 << std::endl;

    std::cout << std::endl;

    int a {810};
    int b {23};

    // Overload through template called over function template
    auto result2 = maximum(&a, &b);
    std::cout << "result: " << result2 << std::endl;
    
    return 0;
}