#include <iostream>
#include <string>
#include <cstring>

int main()
{
    /*
        Comparing Strings:
            Two strings are equal if they have the same size and if they have the same characters in all positions
            Comparisons are carried out lexicographically
    */
    
    // Comparing std::string to std::string using comparison operators
    std::string hello_str {"Hello"};
    std::string bello_str {"Bello"};

    std::cout << std::boolalpha;
    std::cout << hello_str << " == " << bello_str << ": " << (hello_str == bello_str) << std::endl; // false
    std::cout << hello_str << " != " << bello_str << ": " << (hello_str != bello_str) << std::endl; // true
    std::cout << hello_str << " > " << bello_str << ": " << (hello_str > bello_str) << std::endl; // true (hello is after bello)
    std::cout << hello_str << " >= " << bello_str << ": " << (hello_str >= bello_str) << std::endl; // true
    std::cout << hello_str << " < " << bello_str << ": " << (hello_str < bello_str) << std::endl; // false (bello is not after hello)
    std::cout << hello_str << " <= " << bello_str << ": " << (hello_str <= bello_str) << std::endl; // false

    std::cout << "\n----------\n" << std::endl;

    // Compare std::string to c-strings using comparison operators
    const char* c_string1 {"Bello"};

    std::cout << "hello_str.size(): " << hello_str.size() << std::endl;
    std::cout << "std::strlen(c_string1): " << std::strlen(c_string1) << std::endl;

    std::cout << std::endl;

    std::cout << hello_str << " == " << c_string1 << ": " << (hello_str == c_string1) << std::endl;
    std::cout << hello_str << " != " << c_string1 << ": " << (hello_str != c_string1) << std::endl;
    std::cout << hello_str << " > " << c_string1 << ": " << (hello_str > c_string1) << std::endl;
    std::cout << hello_str << " >= " << c_string1 << ": " << (hello_str >= c_string1) << std::endl;
    std::cout << hello_str << " < " << c_string1 << ": " << (hello_str < c_string1) << std::endl;
    std::cout << hello_str << " <= " << c_string1 << ": " << (hello_str <= c_string1) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Be careful about char arrays not terminated with null character
    
    //const char c_string2[] {'B', 'e', 'l', 'l', 'o'}; // May give erroneous results b/c compiler will read past the string
    const char c_string2[] {'B', 'e', 'l', 'l', 'o', '\0'}; // Works as expected

    std::cout << hello_str << " == " << c_string2 << ": " << (hello_str == c_string1) << std::endl;
    std::cout << hello_str << " != " << c_string2 << ": " << (hello_str != c_string1) << std::endl;
    std::cout << hello_str << " > " << c_string2 << ": " << (hello_str > c_string1) << std::endl;
    std::cout << hello_str << " >= " << c_string2 << ": " << (hello_str >= c_string1) << std::endl;
    std::cout << hello_str << " < " << c_string2<< ": " << (hello_str < c_string1) << std::endl;
    std::cout << hello_str << " <= " << c_string2 << ": " << (hello_str <= c_string1) << std::endl;

    return 0;
}