#include <iostream>
#include <string>

int main()
{
    // Remove all characters from the string: .clear()
    std::string str1 {"The Lion King"};

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str1 size: " << str1.size() << std::endl;
    std::cout << "str1 capacity: " << str1.capacity() << std::endl;

    std::cout << std::endl;

    str1.clear();

    std::cout << "str1: " << str1 << std::endl; // Now empty
    std::cout << "str1 size: " << str1.size() << std::endl; // Now 0
    std::cout << "str1 capacity: " << str1.capacity() << std::endl; // Still the same

    std::cout << "\n----------\n" << std::endl;

    // Insert character(s) at a specific index: .insert()
    std::string str2 {"122"};

    std::cout << "str2: " << str2 << std::endl;

    str2.insert(1, 1, '3'); // At index 1, insert 1 character, the character '3'

    std::cout << "str2: " << str2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Insert c-string or std::string at specific index: .insert() with char *
    std::string str3 {"Hello!"};
    const char *txt3 {" World"};

    std::cout << "str3: " << str3 << std::endl;
    
    str3.insert(5, txt3); // At index 5, insert the characters from txt3

    std::cout << "str3: " << str3 << std::endl;

    std::cout << std::endl;

    std::string str4 {"Hello!"};
    const char *txt4 {" World Health Organization"};

    std::cout << "str4: " << str4 << std::endl;

    str4.insert(5, txt4, 6); // At index 5, insert the first 6 characters from txt4

    std::cout << "str4: " << str4 << std::endl;

    std::cout << std::endl;

    std::string str5 {" World"};
    std::string str6 {"Hello!"};

    std::cout << "str6: " << str6 << std::endl;

    str6.insert(5, str5); // At index 5, insert the characters from str5

    std::cout << "str6: " << str6 << std::endl;

    std::cout << std::endl;

    std::string str7 {"Hello!"};
    std::string str8 {"Statistical Analysis of the World Population."};

    std::cout << "str7: " << str7 << std::endl;

    str7.insert(5, str8, 27, 6); // At index 5, insert 6 characters from str8 starting at character 27

    std::cout << "str7: " << str7 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Erase characters from a string: .erase()
    std::string str9 {"Hello World is a message used to start off things when learning programming!"};

    std::cout << "str9: " << str9 << std::endl;

    str9.erase(11, str9.size() - 12); // Starting at index 11, erase the remaining characters of str9 except for the last one

    std::cout << "str9: " << str9 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Append a given character to the end of a string: .push_back()
    std::string str10 {"Hello World"};

    std::cout << "str10: " << str10 << std::endl;

    str10.push_back('!'); // Add '!' to the end of the string

    std::cout << "str10: " << str10 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Remove the last character from a string: .pop_back()
    std::string str11 {"Hello World!!"};

    std::cout << "str11: " << str11 << std::endl;

    str11.pop_back();

    std::cout << "str11: " << str11 << std::endl;
    
    return 0;
}