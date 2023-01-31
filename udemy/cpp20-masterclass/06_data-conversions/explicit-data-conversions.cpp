#include <iostream>

int main()
{
    // Explicit Conversions: done by you, the programmer (makes it very clear what is going on)

    // Implicit Cast: add up the doubles then turn result into int
    double x { 12.5 };
    double y { 34.6 };
    int sum = x + y;

    std::cout << "Implicit Cast: the sum of x and y is: " << sum << std::endl;

    // Explicit Cast: cast x and y as int then sum them up
    sum = static_cast<int>(x) + static_cast<int>(y);

    std::cout << "Explicit Cast: casting first, the sum of x and y is: " << sum << std::endl;

    // Explict Cast: add x and y as doubles then cast the sum to int
    sum = static_cast<int>(x + y);

    std::cout << "Explicit Cast: casting second, the sum of x and y is: " << sum << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // C-Style Cast (not the best approach in C++)
    double pi_dbl { 3.14 };
    int pi_int = (int)(pi_dbl);

    std::cout << "PI (double): " << pi_dbl << std::endl;
    std::cout << "PI (int): " << pi_int << std::endl;

    return 0;
}