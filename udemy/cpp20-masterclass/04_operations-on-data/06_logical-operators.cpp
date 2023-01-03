#include <iostream>

int main()
{
    // Declarations
    bool a {true};
    bool b {false};
    bool c {true};

    // Make booleans render as true/false instead of 1/0
    std::cout << std::boolalpha;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;

    // AND: evaluates to true if ALL bools are true
    std::cout << "a && b: " << (a && b) << std::endl;
    std::cout << "a && c: " << (a && c) << std::endl;
    std::cout << "b && c: " << (b && c) << std::endl;
    std::cout << "a && b && c: " << (a && b && c) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // OR: evaluates to true if ANY bools are true
    std::cout << "a || b: " << (a || b) << std::endl;
    std::cout << "a || c: " << (a || c) << std::endl;
    std::cout << "b || c: " << (b || c) << std::endl;
    std::cout << "a || b || c: " << (a || b || c) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // NOT: negates what the expression evaluates to
    std::cout << "!a: " << !a << std::endl;
    std::cout << "!b: " << !b << std::endl;
    std::cout << "!c: " << !c << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Combinations of operators
    std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Combining logical operators with relational operators
    int d {45};
    int e {20};
    int f {11};

    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;

    std::cout << std::endl;

    std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl;
    std::cout << "(d == e) || (d <= f): " << ((d == e) || (d <= f)) << std::endl;
    std::cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << std::endl;
    std::cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << std::endl;
    std::cout << "(d > f) && (d < f): " << ((d > f) && (d < f)) << std::endl;
    std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(!a) && (d == e): " << ((!a) && (d == e)) << std::endl;

    std::cout << std::endl;

    return 0;
}