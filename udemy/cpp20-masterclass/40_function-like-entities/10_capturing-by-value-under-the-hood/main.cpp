#include <iostream>

int main()
{
    int a {7};
    int b {3};

    // Not captured by the [=] lambda, so it will not be set up as a member variable under the hood
    int some_var {28};
    double some_other_var {55.5};

    // Capturing a few variables by value
    auto func1 = [a,b] (int c, int d)
    {
        std::cout << "Captured values:" << std::endl;

        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << std::endl;

        std::cout << "Parameters:" << std::endl;
        
        std::cout << "c: " << c << std::endl;
        std::cout << "d: " << d << std::endl;
    };

    func1(10, 20);

    std::cout << "\n-------\n" << std::endl;

    // Capturing all variables by value
    auto func2 = [=] (int c, int d)
    {
        std::cout << "Captured values:" << std::endl;

        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << std::endl;

        std::cout << "Parameters:" << std::endl;
        
        std::cout << "c: " << c << std::endl;
        std::cout << "d: " << d << std::endl;
    };

    func2(10, 20);

    std::cout << "\n-------\n" << std::endl;

    // Modifying captured data
    auto func3 = [a, b] (int c, int d) mutable
    {
        a++;

        std::cout << "Captured values:" << std::endl;

        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << std::endl;

        std::cout << "Parameters:" << std::endl;
        
        std::cout << "c: " << c << std::endl;
        std::cout << "d: " << d << std::endl;
    };

    func3(10, 20);

    std::cout << std::endl;

    func3(20, 30);

    return 0;
}
