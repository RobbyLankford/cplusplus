#include <iostream>
#include <string_view>
#include <cstring>

int main()
{
    // A type that allows memory to be saved (std::string can be wasteful)

    // Copying strings in this way will use more memory than necessary
    std::string string {"Hello"};
    std::string string1 {string};
    std::string string2 {string};

    std::cout << "Address of string: " << &string << std::endl;
    std::cout << "Address of string1: " << &string1 << std::endl;
    std::cout << "Address of string2: " << &string2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Using std::string_view will view the literal string from elsewhere
    std::string_view sv {"Hello"};
    std::string_view sv1 {sv};
    std::string_view sv2 {sv};

    std::cout << "sizeof(std::string_view): " << sizeof(std::string_view) << std::endl;
    std::cout << std::endl;
    std::cout << "sv: " << sv << std::endl;
    std::cout << "sv1: " << sv1 << std::endl;
    std::cout << "sv2: " << sv2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Many different ways to create string_view variables
    std::string string3 {"Regular std::string"};
    const char *c_string {"Regular c-string"};
    const char char_array[] {"Char array"}; // Null terminated
    char char_array2[] {'H', 'u', 'g', 'e'}; // Non null terminated... works, but do not actually do this

    std::string_view sv3 {"String literal"};
    std::string_view sv4 {string3};
    std::string_view sv5 {c_string};
    std::string_view sv6 {char_array};
    std::string_view sv7 {sv3};
    std::string_view sv8 {char_array2, std::size(char_array2)}; // Need to pass in size info since non null terminated

    std::cout << "sv3 : " << sv3 << std::endl;
    std::cout << "sv4 : " << sv4 << std::endl;
    std::cout << "sv5 : " << sv5 << std::endl;
    std::cout << "sv6 : " << sv6 << std::endl;
    std::cout << "sv7 (constructed from other string_view) : " << sv7 << std::endl;
    std::cout << "sv8 (non null termianted string): " << sv8 << std::endl;
    
    std::cout << "\n----------\n" << std::endl;

    // Changing the underlying string will show up in the string_view
    char word[] {"Dog"};
    std::string_view sv9 {word};

    std::cout << "word: " << word << std::endl;
    std::cout << "sv9: " << sv9 << std::endl;
    std::cout << std::endl;

    word[2] = 't';

    std::cout << "word: " << word << std::endl;
    std::cout << "sv9: " << sv9 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can "shrink" the window through which the string_view is viewing the string
    const char *c_string1 {"The animals have left the region."};
    std::string_view sv10 {c_string1};

    std::cout << "sv10: " << sv10 << std::endl;
    std::cout << std::endl;

    sv10.remove_prefix(4); // Removes 'The ' from the start

    std::cout << "sv10: " << sv10 << std::endl;
    std::cout << std::endl;

    sv10.remove_suffix(12); // Removes ' the region';

    std::cout << "sv10: " << sv10 << std::endl;
    std::cout << std::endl;

    // Does not affect the underlying string
    std::cout << "c_string1: " << c_string1 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // A string_view cannot outlive the string it is viewing
    std::string_view sv11;
    {
        std::string string4 {"Hello there"};
        sv11 = string4;
        std::cout << "sv11 is viewing: " << sv11 << std::endl;
    }

    // string4 is now out of scope and cannot be viewed by sv11
    // std::cout << "sv11 is viewing: " << sv11 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can use the .data() method to see the underlying data in the string we are viewing
    std::string_view sv13 {"Ticket"};

    // The .data() method works fine as long as we have not modified the view and the string is null terminated
    std::cout << "sv13: " << sv13 << std::endl;
    std::cout << "Number of characters in underlying string: " << std::strlen(sv13.data()) << std::endl;
    std::cout << std::endl;

    // Things can go very wrong if we modify the string
    std::string_view sv14 {"Ticket"};
    sv14.remove_prefix(2);
    sv14.remove_suffix(2);

    std::cout << sv14 << " has " << std::strlen(sv14.data()) << " characters." << std::endl;
    std::cout << "sv14.data() is: " << sv14.data() << std::endl;
    std::cout << "sv14 is: " << sv14 << std::endl;
    std::cout << std::endl;

    // Also do not try to view non null terminated string (will be navigating memory that does not belong to you)
    char char_array3[] {'H', 'e', 'l', 'l', 'o'};
    std::string_view sv15 {char_array3, std::size(char_array3)};

    std::cout << sv15 << " has " << std::strlen(sv15.data()) << " characters." << std::endl;
    std::cout << "sv15.data() is " << sv15.data() << std::endl;
    std::cout << "sv15 is " << sv15 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // std::string_view has most of the methods that are in std::string
    std::string_view sv16 {"There is a huge forest in that area"};

    std::cout << "sv16 is " << sv16.length() << " characters long." << std::endl;
    std::cout << "The front character is: " << sv16.front() << std::endl;
    std::cout << "The back character is: " << sv16.back() << std::endl;
    std::cout << "Substring: " << sv16.substr(0, 22) << std::endl;

    return 0;
}