#include <iostream>
#include <iomanip>

int main()
{
    /* Data types: float, doule, and long double */

    // 4 bytes, precision to 7 digits, append with an 'f'
    float number1 {1.12345678901234567890f}; 

    // 8 bytes, precision to ~15 digits, recommended default
    double number2 {1.12345678901234567890}; 

    // 16 bytes, precision greater than a double, append with an 'L'
    long double number3 {1.12345678901234567890L};

    // Print out the sizes
    std::cout << "sizeof float: " << sizeof(number1) << std::endl;
    std::cout << "sizeof double: " << sizeof(number2) << std::endl;
    std::cout << "sizeof long double: " << sizeof(number3) << std::endl;

    std::cout << "\n" << std::endl;

    // Print out the precision
    std::cout << std::setprecision(20); // Control the precision of std::cout
    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << "number3: " << number3 << std::endl;

    std::cout << "\n" << std::endl;

    // Problems with float: precision is usually too limited
    float number4 = 192400023.0f;
    std::cout << "number4: " << number4 << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    /* Scientific Notation */
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};
    double number8 {0.00000000003498};
    double number9 {3.498e-11};

    std::cout << "number5 is: " << number5 << std::endl;
    std::cout << "number6 is: " << number6 << std::endl;
    std::cout << "number7 is: " << number7 << std::endl;
    std::cout << "number8 is: " << number8 << std::endl;
    std::cout << "number9 is: " << number9 << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    /* Infinity and nan */
    double number10 {5.6};
    double number11 {};
    double number12 {};

    // Infinity (divide by zero)
    double pos_inf {number10 / number11};
    double neg_inf {-1 * (number10 / number11)};

    std::cout << number10 << " / " << number11 << " yields " << pos_inf << std::endl;
    std::cout << "-" << number10 << " / " << number11 << " yields " << neg_inf << std::endl;

    std::cout << "\n" << std::endl;

    // nan (not a number)
    double result = number11 / number12;

    std::cout << number11 << " / " << number12 << " = " << result << std::endl;

    return 0;
}