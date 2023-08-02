#include <iostream>

/*
    Compiler will try to convert argument if you pass a different type than what is defined.
*/

void print_sum(int a, int b);

int main()
{
    int a {10};
    int b {20};

    double c {30.0};
    double d {40.0};

    print_sum(a, b); // Works as expected as two ints are passed
    print_sum(c, d); // Implicitly converted to int, some data may be lost

    return 0;
}

void print_sum(int a, int b)
{
    int sum = a + b;

    std::cout << "sizeof(a): " << sizeof(a) << std::endl;
    std::cout << "sizeof(b): " << sizeof(b) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sum: " << sum << std::endl;
    std::cout << std::endl;
}