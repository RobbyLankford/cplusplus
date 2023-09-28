#include <iostream>

// Method to capture EVERYTHING outside of a lambda function to use inside of it

int main()
{
    int c {42};
    int d {5};

    // Capture by value
    auto func1 = [=]()
    {
        std::cout << "Inner value c: " << c << std::endl;
    };

    for (size_t i {0}; i < 5; i++)
    {
        std::cout << "Outer value c: " << c << std::endl;
        func1();
        std::cout << std::endl;

        c++;
    }

    std::cout << "----------\n" << std::endl;

    // Capture by reference
    auto func2 = [&]()
    {
        std::cout << "Inner value d: " << d << std::endl;
    };

    for (size_t i {0}; i < 5; i++)
    {
        std::cout << "Outer value d: " << d << std::endl;
        func2();
        std::cout << std::endl;

        d++;
    }

    return 0;
}