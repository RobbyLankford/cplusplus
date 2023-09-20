#include <iostream>

/*
    Putting const in an otherwise similar function declaration will cause a compiler error.
    The compiler will see them as the same function.
    Since copies of the variables are passed to the function, the functions are basically the same.
*/

// Will cause a compiler error

/*
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int max(const int a, const int b)
{
    return (a > b) ? a : b;
}
*/

// If you want to use const, use it in the function definition, not the declaration
int max(int a, int b);

int main()
{
    int x {1};
    int y {2};

    std::cout << "Max: " << max(x, y) << std::endl;
    
    return 0;
}

int max(const int a, const int b)
{
    return (a > b) ? a : b;
}