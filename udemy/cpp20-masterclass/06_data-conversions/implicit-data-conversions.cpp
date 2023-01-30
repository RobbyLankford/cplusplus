#include <iostream>

int main()
{
    // Implicit Conversions: done automatically by complier

    /*
        The compiler applies implicit conversions when types are different in an expression.
        Usually, conversions done from the smallest type to the largest type.
        For example, an int is transformed to a double before the expression is evaluated.
        Exception is when doing an assignment.
        The assignment operation is going to cause an implicit narrowing conversion.
    */

    double price { 46.5 };
    int units { 10 };

    // Variable units will be implicitly converted to a double
    auto total_price = price * units;

    // If total_price is a double, its size in memory should be 8
    std::cout << "Total price: " << total_price << std::endl;
    std::cout << "Size of total_price in memory: " << sizeof(total_price) << std::endl;

    std::cout << "\n ------- \n" << std::endl;

    int x { 0 };
    double y { 45.44 };

    // Value of y will be converted to an int (decimals will be lost)
    x = y;

    std::cout << "The value of x is: " << x << std::endl;
    std::cout << "Size of x in memory: " << sizeof(x) << std::endl;

    return 0;
}