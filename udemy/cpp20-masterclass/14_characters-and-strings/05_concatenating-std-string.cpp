#include <iostream>
#include <string>

int main()
{
    // Can use the + operator to concatenate two strings
    std::string str1 {"Hello"};
    std::string str2 {"World"};

    std::string message = str1 + " " + str2 + "!";

    std::cout << "message: " << message << std::endl;
    std::cout << std::endl;

    // Cannot use + operator to concatenate two string literals (cannot add const char* arrays)
    //std::string str3 {"Hello " + "World"}; // compiler error
    //std::string str4 "Hello " + "World";  // compiler error

    // A few ways around string literal concatenation
    std::string str5 {"Hello World"}; // make a single string literal in the first place
    std::string str6 {"Hello", " World"}; // put the literals side by side
    std::string str7 {std::string("Hello") + " World"}; // Turn one or both into a std::string

    std::cout << "str5: " << str5 << std::endl;
    std::cout << "str6: " << str6 << std::endl;
    std::cout << "str7: " << str7 << std::endl;

    // Necessary for the s suffix
    using namespace std::string_literals;

    std::string str8 {"Hello"s + " World"}; // Turn one or both into strings using the s suffix

    std::cout << "str8: " << str8 << std::endl;

    // using namespace pollutes the namespace, so do this instead
    std::string str9;
    {
        using namespace std::string_literals;
        str9 = "Hello"s + " World";

        std::cout << "str9: " << str9 << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // std::string is a compound type, it has properties and behaviors that can be accessed using "."
    std::string str10 {"Hello"};
    std::string str11 {" World"};
    std::string str12 = str10.append(str11);
    
    std::cout << "str12: " << str12 << std::endl;

    std::string str13 {std::string("Hello").append(" World")};

    std::cout << "str13: " << str13 << std::endl;
    std::cout << std::endl;

    // the append method can do more than the + operator
    std::string str14 {"Hello "};
    std::string str15 {str14.append(5, '?')}; // appends 5 '?' characters

    std::cout << "str15: " << str15 << std::endl;

    std::string str16 {"The World Is Our Shared Home."};
    std::string str17 {"Hello "};
    std::string str18 {str17.append(str16, 4, 5)}; // append a sub-section of another string

    std::cout << "str18: " << str18 << std::endl;

    // Can also do direct output
    std::string str19 {"Hello "};

    std::cout << "Direct Output: " << str19.append(str16, 4, 5) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Concatenating strings and characters
    std::string str20 {"Hello"};
    (str20 += ',') += ' '; // can use += to append

    std::cout << "str20: " << str20 << std::endl;
    std::cout << std::endl;

    std::string str21 = "Hello";
    std::string str22 {"I am here to see you."};
    std::string str23 {str21 + ',' + ' ' + str22};

    std::cout << "str23: " << str23 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Appending C-strings and character arrays
    const char message1[] {"World"}; // character array
    const char *message2 {"World"}; // C-string

    std::cout << "+ char array: " << std::string {"Hello "} + message1 << std::endl;
    std::cout << "+ C-string: " << std::string {"Hello "} + message2 << std::endl;
    std::cout << "Append char array: " << std::string("Hello ").append(message1) << std::endl;
    std::cout << "Append C-string: " << std::string("Hello ").append(message2) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Concatenating std::string and numbers
    std::string str24 {"Hello "};

    str24 += std::to_string(67.5f); // treats 67 as a character code

    std::cout << "str24: " << str24 << std::endl;

    return 0;
}