#include <iostream>
#include <string>

int main()
{
    /*
        Rules of std::compare return:
        - Negative Value: if the std::string appears before the character sequence in lexicographic order
        - Zero: if the character sequences are equivalent
        - Positive Value: if the std::string appears after the character sequence in lexicographic order
    */
    
    // Comparing entire std::string
    std::string str1 {"Hello"};
    std::string str2 {"World"};

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    std::cout << "str1.compare(str2): " << str1.compare(str2) << std::endl; // "Hello" comes before "World" (neg)
    std::cout << "str2.compare(str1): " << str2.compare(str1) << std::endl; // "World" comes after "Hello" (pos)

    std::cout << "\n----------\n" << std::endl;

    // Comparing portions of std::string
    std::string str3 {"Hello World"}; // "World" starts at character 6

    std::cout << "Comparing 'World' to 'Hello': " << str3.compare(6, 5, str1) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Compare std::string to c-string
    std::string str4 {"Hello"};
    const char *message {"World"};

    std::cout << "Comparing 'Hello' to 'World': " << str4.compare(message) << std::endl;
    std::cout << "Comparing 'Hello' to 'World': " << str4.compare("World") << std::endl;

    return 0;
}