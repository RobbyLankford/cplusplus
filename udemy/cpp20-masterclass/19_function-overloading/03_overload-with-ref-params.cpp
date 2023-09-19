#include <iostream>
#include <string>

// Reference parameters can have several problems

// The calls can be ambiguous if multiple legal functions can be used for a single input
void say_my_name(const std::string &name)
{
    // Uses a reference
    std::cout << "Your name is (ref): " << name << std::endl;
}

void say_my_name(std::string name)
{
    // Uses a literal string
    std::cout << "Your name is (non-ref): " << name << std::endl;
}

// Also watch out for implicit conversions
double max(double a, double b)
{
    std::cout << "double max called" << std::endl;

    return (a > b) ? a : b;
}

int &max(int &a, int &b)
{
    std::cout << "int max called" << std::endl;

    return (a > b) ? a : b;
}

int main()
{
    std::string name {"Robert"};

    // Both of the following calls could use either function, so the compiler throws an error
    //say_my_name(name);
    //say_my_name("Robert");

    char a {45};
    char b {62};

    // The double function is called b/c a, b are implicitly converted to double
    int maximum = max(a, b);

    // Can force conversion to ensure correct function is called
    int int_a {static_cast<int>(a)};
    int int_b {static_cast<int>(b)};

    maximum = max(int_a, int_b);

    return 0;
}