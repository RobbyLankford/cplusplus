#include <iostream>
#include <string>

int main()
{
    // Replacing: replace part of the std::string with all of another std::string
    std::string str1 {"Finding Nemo"};
    std::string str2 {"Searching For"};

    std::cout << "str1: " << str1 << std::endl;

    // Starting at character 0 in str1, replace the first 7 characters with all of str2
    std::cout << "str1 (replaced): " << str1.replace(0, 7, str2) << std::endl;

    std::cout << std::endl;

    // Replacing: replace part of the std::string with part of another std::string
    str1 = "Finding Nemo";
    std::string str3 = "The Horse Was Found in the Fields Searching For Food";

    std::cout << "str1: " << str1 << std::endl;

    // Starting at character 0 in str1, replace the first 7 characters with...
    // the first 13 characters in str3 starting at character 34
    std::cout << "str1 (replaced): " << str1.replace(0, 7, str3, 34, 13) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Copying: Copying from std::string into char array
    std::string str4 {"Climbing Kilimanjaro"};
    char txt4[15] {}; // Initialized with zero equivalent for characters ('\0')

    std::cout << "std::size(txt4): " << std::size(txt4) << std::endl; // Size of 15, as expected

    // Starting at character 11, copy the next 9 characters in str4 to txt4 (which has a size of 15, so can do this)
    str4.copy(txt4, 11, 9);

    // Safe to print out because the char array was initialized with the null character
    std::cout << "Copied Text: " << txt4 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Resize: Resize std::string up and autofill with '\0'
    std::string str5 {"Hello"};

    std::cout << "null char: " << '\0' << std::endl;
    std::cout << "str5: " << str5 << std::endl;
    std::cout << "str5.size(): " << str5.size() << std::endl; // 5 (H, e, l, l, o)
    std::cout << "str5.capacity(): " << str5.capacity() << std::endl; // 22

    std::cout << std::endl;

    // Resize to 8, filling the 3 additional characters with '\0'
    str5.resize(8);

    std::cout << "str5: " << str5 << std::endl; // Null characters are not printed
    std::cout << "str5.size(): " << str5.size() << std::endl; // 8 (H, e, l, l, o, \0, \0, \0)
    std::cout << "str5.capacity(): " << str5.capacity() << std::endl; // Still 22

    std::cout << std::endl;

    // Can print out character-by-character to prove it was resized with null characters
    for (size_t i {0}; i < str5.size(); i++)
    {
        std::cout << i << ": " << str5[i] << std::endl;
    }

    std::cout << std::endl;

    // Resize: Resize std::string up and autofill with a specified character
    std::cout << "str5: " << str5 << std::endl;

    // Resize to 10 and add 'f'
    str5.resize(10, 'f');

    std::cout << "str5: " << str5 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Resize: Resize std::string down
    std::cout << "str5: " << str5 << std::endl;
    std::cout << "str5.size(): " << str5.size() << std::endl; // 10 (H, e, l, l, o, \0, \0, \0, f, f)
    std::cout << "str5.capacity(): " << str5.capacity() << std::endl; // Still 22

    std::cout << std::endl;

    // Resize to 5, the original size
    str5.resize(5);

    std::cout << "str5: " << str5 << std::endl;
    std::cout << "str5.size(): " << str5.size() << std::endl; // 5 (H, e, l, l, o)
    std::cout << "str5.capacity(): " << str5.capacity() << std::endl; // Still 22

    std::cout << "\n----------\n" << std::endl;

    // Swapping: Swap two std::string values
    std::string str_a {"This is a string stored in A."};
    std::string str_b {"This is also a string, but it is stored in B."};

    // Before swapping
    std::cout << "str_a: " << str_a << std::endl;
    std::cout << "str_a.size(): " << str_a.size() << std::endl; // 29
    std::cout << "str_a.capacity(): " << str_a.capacity() << std::endl; // 31

    std::cout << "str_b: " << str_b << std::endl;
    std::cout << "str_b.size(): " << str_b.size() << std::endl; // 45
    std::cout << "str_b.capacity(): " << str_b.capacity() << std::endl; // 47

    std::cout << std::endl;

    str_a.swap(str_b);

    // After swapping
    std::cout << "str_a: " << str_a << std::endl;
    std::cout << "str_a.size(): " << str_a.size() << std::endl; // 45
    std::cout << "str_a.capacity(): " << str_a.capacity() << std::endl; // 47

    std::cout << "str_b: " << str_b << std::endl;
    std::cout << "str_b.size(): " << str_b.size() << std::endl; // 29
    std::cout << "str_b.capacity(): " << str_b.capacity() << std::endl; // 31

    return 0;
}