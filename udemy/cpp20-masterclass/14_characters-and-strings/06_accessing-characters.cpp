#include <iostream>
#include <string>

int main()
{
    // Strings are just arrays of characters, so can access the individual characters
    std::string str1 {"Hello There"};

    // To loop over the characters in the string, need to determine the size of the string
    for (size_t i {0}; i < str1.size(); i++)
    {
        std::cout << str1[i] << " ";
    }

    std::cout << std::endl;

    // Can also use a range-based for loop
    for (char value : str1)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;

    // Can also use the .at() method
    for (size_t i {0}; i < str1.size(); i++)
    {
        std::cout << str1.at(i) << " ";
    }

    std::cout << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can use accessing methods to modify the characters
    std::cout << "str1 (original): " << str1 << std::endl;

    str1[0] = 'B';
    str1.at(1) = 'a';

    std::cout << "str1 (modified): " << str1 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can use .front() and .back() methods to access characters
    std::string str2 {"The Pheonix King"};

    std::cout << "str2: " << str2 << std::endl;

    char &front_char = str2.front(); // references the actual underlying character
    char &back_char = str2.back(); // references the actual underlying character

    std::cout << "str2 (front char): " << front_char << std::endl;
    std::cout << "str2 (back char): " << back_char << std::endl;

    std::cout << std::endl;

    // Can also use the results of .front() and .back() to modify the underlying string
    front_char = '.';
    back_char = 'o';

    std::cout << "str2 (modified): " << str2 << std::endl;

    std::cout << std::endl;

    // Can even modify directly from calls to .front() and .back()
    str2.front() = 'f';
    str2.back() = '$';

    std::cout << "str2 (references): " << str2 << std::endl;

    // CANNOT go through const references to make any modifications
    str2 = "The Pheonix King";

    const char &front_char_const_ref = str2.front();
    const char &back_char_const_ref = str2.back();

    std::cout << "\n----------\n" << std::endl;

    // The .c_str() Method: get pointer to underlying character
    std::string str3 {"The Phoenix King"};

    const char *wrapped_c_string = str3.c_str(); // Returns const char *

    std::cout << "Wrapped c string: " << wrapped_c_string << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // The .data() Method: like .c_str(), but can modify the underlying char * array
    char *data = str3.data();

    std::cout << "Wrapped c string: " << data << std::endl;

    data[0] = 'B';

    std::cout << "Original string (after modification): " << str3 << std::endl;
    std::cout << "Wrapped c string (after modification): " << data << std::endl;

    return 0;
}