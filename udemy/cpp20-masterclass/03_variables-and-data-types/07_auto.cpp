#include <iostream>

int main()
{
    /* The auto Keyword */

    // Declare using 'auto', deduces the data type for you
    auto var1 {12}; // integer
    auto var2 {13.0}; // double
    auto var3 {14.0f}; // float
    auto var4 {15.0l}; // long
    auto var5 {'e'}; // char

    // Integer modifier suffixes
    auto var6 {123u}; // Unsigned
    auto var7 {123ul}; // Unsigned long
    auto var8 {123ll}; // Long long

    // Print out sizes to check if deduction is correct
    std::cout << "var1 occupies " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies " << sizeof(var8) << " bytes" << std::endl;

    return 0;
}