#include <iostream>

/*
    A method to create and use functions without naming them (anonymous functions)
    Lambda Function Signature:
        [capture list](parameters)
        {
            // Function Body
        }
*/

int main()
{
    // Declare lambda function and assign it to a variable (note the ; at the end)
    auto func = []()
    {
        std::cout << "Hello World!" << std::endl;
    };

    func();
    func();

    std::cout << std::endl;

    // Declare lambda function and call it directly (put () at the end)
    []()
    {
        std::cout << "Hello World!!" << std::endl;
    }();

    std::cout << std::endl;

    // Lambda function that takes parameters
    [](double a, double b)
    {
        std::cout << "a + b = " << a + b << std::endl;
    }(10.0, 50.0);

    auto func1 = [](double a, double b)
    {
        std::cout << "a + b = " << a + b << std::endl;
    };

    func1(10.0, 50.0);

    std::cout << std::endl;

    // Lambda function that returns something
    auto result = [](double a, double b)
    {
        return a + b;
    }(10.0, 60.0);

    std::cout << "result = " << result << std::endl;
    std::cout << std::endl;

    // Explicitly specify the return type
    auto func2 = [](double a, double b) -> int
    {
        return a + b;
    };

    auto func3 = [](double a, double b)
    {
        return a + b;
    };

    double a {6.9};
    double b {3.5};

    auto result2 = func2(a, b);
    auto result3 = func3(a, b);

    std::cout << "result2 = " << result2 << std::endl;
    std::cout << "result3 = " << result3 << std::endl;
    std::cout << "sizeof(result2) = " << sizeof(result2) << std::endl;
    std::cout << "sizeof(result3) = " << sizeof(result3) << std::endl;

    return 0;
}