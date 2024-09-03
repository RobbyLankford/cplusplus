#include <iostream>

int main()
{
    int a {7};
    int b {3};

    int some_var {28};
    double some_other_var {55.5};

    // Capturing a few variables by reference
    auto func = [&a, &b] (int c, int d)
    {
        // Modifying member vars allowed by default
        a++;

        std::cout << "Captured values:";
        std::cout << " a: " << a;
        std::cout << " b: " << b;

        std::cout << std::endl;

        std::cout << "Parameters:";
        std::cout << " c: " << c;
        std::cout << " d: " << d;

        std::cout << std::endl;
    };

    std::cout << "a: " << a << std::endl;

    func(10, 20);

    std::cout << "a: " << a << std::endl;

    return 0;
}
