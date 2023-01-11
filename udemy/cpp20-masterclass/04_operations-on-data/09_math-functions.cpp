#include <iostream>
#include <cmath>

int main()
{
    // Declare variables
    double weight {7.7};
    double savings {-5000};

    // Floor: round down to nearest whole number
    std::cout << "Weight floor: " << std::floor(weight) << std::endl;

    // Ceiling: round up to nearest whole number
    std::cout << "Weight ceiling: " << std::ceil(weight) << std::endl;

    // Absolute Value
    std::cout << "Absolute value of weight: " << std::abs(weight) << std::endl;
    std::cout << "Absolute value of savings: " << std::abs(savings) << std::endl;

    // Exponential: f(x) = e ^ x
    std::cout << "The exponential of 10 is: " << std::exp(10) << std::endl;

    // Power
    std::cout << "3 ^ 4: " << std::pow(3, 4) << std::endl;
    std::cout << "9 ^ 3: " << std::pow(9, 3) << std::endl;

    // Logarithm
    std::cout << "Log of base e of 54.59: " << std::log(54.59) << std::endl;
    std::cout << "Log of base 10 of 10,000: " << std::log10(10000) << std::endl;

    // Square Root
    std::cout << "The square root of 81: " << std::sqrt(81) << std::endl;

    // Rounding
    std::cout << "3.654 rounds to: " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounds to: " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounds to: " << std::round(2.4) << std::endl;

    return 0;
}