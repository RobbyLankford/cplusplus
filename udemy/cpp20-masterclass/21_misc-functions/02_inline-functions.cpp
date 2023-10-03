#include <iostream>

/*
    Can increase the size of the application binary, but eliminates function call overhead.
    Recommended to use them for short, frequently used functions.
    Always weight the benefits against the downsides of inlining functions.
    Usually only functions of a few lines of code and simple logic should be inlined.
    Marking a function with `inline` is only a suggestion to the compiler. It may agree or disagree.
*/

inline int max(int a, int b)
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
    int a {15};
    int b {8};

    std::cout << "max: " << max(a, b) << std::endl;

    /*
        Compiler would see call to max() and may replace it with:

        std::cout << "max: ";

        if (a > b)
        {
            std::cout << a << std::endl;
        }
        else
        {
            std::cout << b << std::endl;
        }

        Therefore, no function is called and the overhead of calling it is eliminated.
    */

    return 0;
}