#include <iostream>
#include <string>
#include <limits>
#include <compare>

/* Only works in C++20 */

int main()
{
    // "World" comes after "Hello" in alphabetical order, considered to be greater
    std::string m1 {"Hello"};
    std::string m2 {"World"};

    // Built-in .compare does three-way compairson
    auto result1 = m1.compare(m2);

    if (result1 > 0)
    {
        std::cout << "m1 > m2" << std::endl;
    }
    else if (result1 == 0)
    {
        std::cout << "m1 == m2" << std::endl;
    }
    else
    {
        std::cout << "m1 < m2" << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Three-way comparison operator: spaceship operator <=>
    int n1 {5};
    int n2 {5};

    auto result2 = (n1 <=> n2);

    std::cout << std::boolalpha;

    std::cout << "n1 > n2: " << ( (n1 <=> n2) > 0) << std::endl;
    std::cout << "n1 >= n2: " << ( (n1 <=> n2) >= 0) << std::endl;
    std::cout << "n1 == n2: " << ( (n1 <=> n2) == 0) << std::endl;
    std::cout << "n1 < n2: " << ( (n1 <=> n2) < 0) << std::endl;
    std::cout << "n1 <= n2: " << ( (n1 <=> n2) <= 0) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Strong Ordering
    std::cout << std::boolalpha;
    std::cout << "n1 > n2: " << (n1 > n2) << std::endl;
    std::cout << "n1 == n2: " << (n1 == n2) << std::endl; // Absolute equality
    std::cout << "n1 < n2: " << (n1 < n2) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Weak Ordering
    std::string m3 {"Hello"};
    std::string m4 {"HELLO"};

    std::cout << std::boolalpha;
    std::cout << "m3 > m4: " << (m3 > m4) << std::endl;
    std::cout << "m3 == m4: " << (m3 == m4) << std::endl; // Equivalence
    std::cout << "m3 < m4: " << (m3 < m4) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Partial Ordering
    double d1 {33.9};
    double d2 {std::numeric_limits<double>::quiet_NaN()};

    std::cout << std::boolalpha;
    std::cout << "d1 > d2: " << (d1 > d2) << std::endl; // false
    std::cout << "d1 == d2: " << (d1 == d2) << std::endl; // false
    std::cout << "d1 < d2: " << (d1 < d2) << std::endl; // false

    return 0;
}