#include <iostream>

// Demonstrates ways that the auto keyword works for auto type deductions

int main()
{
    // Basic example: type deduction with auto is just a copy
    double some_var {55.5};
    auto x = some_var;

    // Same sizes, but different addresses because x is just a copy of some_var
    std::cout << "sizeof(some_var): " << sizeof(some_var) << std::endl;
    std::cout << "sizeof(x): " << sizeof(x) << std::endl;
    std::cout << "&some_var: " << &some_var << std::endl;
    std::cout << "&x: " << &x << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Type deduction with reference
    double some_var2 {55.5};
    double &some_var2_ref {some_var2};
    auto y = some_var2_ref;

    // y is not deduced as a reference to double, it's a double that contains the value in some_var2_ref

    // Same size, but y has a different address because it is NOT a reference
    std::cout << "sizeof(some_var2): " << sizeof(some_var2) << std::endl;
    std::cout << "sizeof(some_var2_ref): " << sizeof(some_var2_ref) << std::endl;
    std::cout << "sizeof(y): " << sizeof(y) << std::endl;

    std::cout << std::endl;

    std::cout << "&some_var2: " << &some_var2 << std::endl;
    std::cout << "&some_var2_ref: " << &some_var2_ref << std::endl;
    std::cout << "&y: " << &y << std::endl;

    std::cout << std::endl;

    // Incrementing y only changes y, not the other variables
    y++;

    std::cout << "some_var2: " << some_var2 << std::endl;
    std::cout << "some_var2_ref: " << some_var2_ref << std::endl;
    std::cout << "y: " << y << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // To properly deduce a reference, use &
    double some_var3 {55.5};
    double &some_var3_ref {some_var3};
    auto &z = some_var3_ref;

    // Some size and same addresses because z IS a reference
    std::cout << "sizeof(some_var3): " << sizeof(some_var3) << std::endl;
    std::cout << "sizeof(some_var3_ref): " << sizeof(some_var3_ref) << std::endl;
    std::cout << "sizeof(z): " << sizeof(z) << std::endl;

    std::cout << std::endl;

    std::cout << "&some_var3: " << &some_var3 << std::endl;
    std::cout << "&some_var3_ref: " << &some_var3_ref << std::endl;
    std::cout << "&z: " << &z << std::endl;

    std::cout << std::endl;

    // Incrementing z only changes all variables because it is a reference
    z++;

    std::cout << "some_var3: " << some_var3 << std::endl;
    std::cout << "some_var3_ref: " << some_var3_ref << std::endl;
    std::cout << "z: " << z << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Auto-deducing a reference preserves const if it is applied
    const double some_var4 {44.3};
    const double &const_ref {some_var4};
    auto &p = const_ref;

    //p++ // will cause a compiler error because p is a const reference

    // Auto-deducing a non-reference to a const does not have an effect
    const double i_am_const {71.2};
    auto q = i_am_const;

    // q is just a copy, so can be modified with no problem
    q++;

    return 0;
}