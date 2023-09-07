#include <iostream>

/*
    When using return type deduction, cannot use function prototype.
    Have to define entire function above the main function.
*/

// auto max(int &a, int &b); // will cause compiler error

// Must define entire function before main
auto max(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int x {5};
    int y {9};

    int result = max(x, y);

    return 0;
}

// Splitting up the function this way will cause a compiler error
/*
auto max(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
*/