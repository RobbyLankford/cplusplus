#include <iostream>

int main()
{
    // Precedence: which operation to do first
    // Associativity: which order to do operations with same precedence

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    /*
        Given the rules in C++, this equation is:
        6 + 3 * 8 - 9 / 3 - 2 + 5
        6 + 24 - 9 / 3 - 2 + 5     // Multiplication and division, left to right
        6 + 24 - 3 - 2 + 5
        30 - 3 - 2 + 5             // Addition and subtraction, left to right
        27 - 2 + 5
        25 + 5
        30
    */
    int result = a + b * c - d / e - f + g;
    std::cout << "Result: " << result << std::endl;
    std::cout << "\n-------\n" << std::endl;


    /*
        6 / 3 * 8 + 9 - 3 + 2
        2 * 8 + 9 - 3 + 2      // Multiplication and division, left to right
        16 + 9 - 3 + 2 
        25 - 3 + 2             // Addition and subtraction, left to right
        22 + 2
        24
    */
    result = a / b * c + d - e + f;
    std::cout << "Result: " << result << std::endl;
    std::cout << "\n-------\n" << std::endl;


    // Making the first result very clear using ()
    result = a + (b * c) - (d / e) - f + g;
    std::cout << "Result: " << result << std::endl;
    std::cout << "\n-------\n" << std::endl;


    // Parentheses also "override" precedence by forcing expression within to be evaluated first
    /*
        (6 + 3) * 8 - 9 / 3 - 2 + 5
        9 * 8 - 9 / 3 - 2 + 5        // Parentheses first
        72 - 9 / 3 - 2 + 5           // Multiplication and division, left to right
        72 - 3 - 2 + 5
        69 - 2 + 5                   // Addition and subtraction, left to right
        67 + 5
        72
    */
    result = (a + b) * c - d / e - f + g;
    std::cout << "Result: " << result << std::endl;

    return 0;
}