#include <iostream>

// Gives a lambda function access to variables outside of it

int main()
{
    // Basic usage
    double a {10};
    double b {20};

    auto func = [a, b]()
    {
        std::cout << "a + b = " << a + b  << std::endl;
    };

    func();

    std::cout << "\n----------\n" << std::endl;

    // Capture by value (the original value will be captured, no updates will be captured)
    int c {42};

    auto func2 = [c]()
    {
        std::cout << "Inner value: " << c << std::endl;
    };

    for (size_t i {0}; i < 5; i++)
    {
        std::cout << "Outer value: " << c << std::endl;
        func2();
        std::cout << std::endl;

        c++;
    }

    std::cout << "----------\n" << std::endl;

    // Capture by reference (the original value AND any updates will be captured)
    auto func3 = [&c]()
    {
        std::cout << "Inner value: " << c << std::endl;
    };

    for (size_t i {0}; i < 5; i++)
    {
        std::cout << "Outer value: " << c << std::endl;
        func3();
        std::cout << std::endl;

        c++;
    }

    return 0;
}