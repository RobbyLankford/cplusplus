#include <iostream>

/*
    Let the compiler deduce the return type of a function.
    It does this by examining the return statements in the function.
*/

// Correct way
auto process_number1(int value)
{
    if (value < 10)
    {
        return 22; // Deduces an int literal
    }
    else
    {
        return 55; // Deduces an int literal
    }
}

// Incorrect way, cannot mix types, will cause compiler error
/*
auto process_number2(int value)
{
    if (value < 10)
    {
        return 22; // Deduces an int literal
    }
    else
    {
        return 33.1; // Deduces a double literal
    }
}
*/

// Can correct by not using auto
double process_number2(int value)
{
    if (value < 10)
    {
        return 22; // Returning int literal, but will coerce to double
    }
    else
    {
        return 33.1; // Returning double literal
    }
}

// If want to use auto, can cast non-doubles to double
double process_number3(int value)
{
    if (value < 10)
    {
        return static_cast<double>(22);
    }
    else
    {
        return 33.1;
    }
}

int main()
{
    // Result will be an int
    auto result1 = process_number1(17);

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "sizeof(result1): " << sizeof(result1) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;

    std::cout << std::endl;

    // Result will be a double
    auto result2 = process_number2(17);

    std::cout << "result2: " << result2 << std::endl;
    std::cout << "sizeof(result2): " << sizeof(result2) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;

    std::cout << std::endl;

    // Result will be a double
    auto result3 = process_number3(17);

    std::cout << "result3: " << result3 << std::endl;
    std::cout << "sizeof(result3): " << sizeof(result3) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;

    return 0;
}