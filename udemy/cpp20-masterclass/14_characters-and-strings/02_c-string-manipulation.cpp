#include <iostream>
#include <cstring>

int main()
{
    // Using the standard library to manipulate c string

    // 1. std::strlen ... find the length of a string
    const char message1[] {"The sky is blue."}; // Real array
    const char *message2 {"The sky is blue."}; // Array that decays into a pointer

    std::cout << "message1: " << message1 << std::endl;
    std::cout << "message2: " << message2 << std::endl;

    std::cout << std::endl;

    // std::strlen ignores the null character and works for decayed arrays
    std::cout << "std::strlen(message1): " << std::strlen(message1) << std::endl;
    std::cout << "std::strlen(message2): " << std::strlen(message2) << std::endl;

    std::cout << std::endl;

    // sizeof does not ignore the null character and returns the size of pointers
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /*
        2. std::strcmp ... compare two strings
        Returns negative value if lhs appears before rhs in lexicographical order
        Returns zero if lhs and rhs are equal
        Returns positive value if lhs appears after rhs in lexicographical order
    */

    const char *string_data1 {"Alabama"};
    const char *string_data2 {"Blabama"};

    // Alabama < Blabama, so returns negative value
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " 
              << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    // Alabama < Alabamb, so returns negative value
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " 
              << std::strcmp(string_data1, string_data2) << std::endl;
    
    string_data1 = "Alacama";
    string_data2 = "Alabama";

    // Alacama > Alabamb, so returns positive value
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " 
              << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alabama";
    string_data2 = "Alabama";

    // Alabama == Alabama, so returns zero
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " 
              << std::strcmp(string_data1, string_data2) << std::endl;
    
    std::cout << "\n----------\n" << std::endl;

    /*
        3. std::strncmp ... compare two strings over a certain number of characters
        Returns negative value if lhs appears before rhs in lexicographical order
        Returns zero if lhs and rhs are equal
        Returns positive value if lhs appears after rhs in lexicographical order
    */

    string_data1 = "Alabama";
    string_data2 = "Blabama";
    size_t n {3};

    // Ala < Bla, so returns negative value
    std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaia";
    string_data2 = "aaance";

    // aaa == aaa, so returns zero
    std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /*
        4. std::strchr ... finds the first occurrence of a character in a string
        Returns where in the string the character is located, if it is found
        Returns a nullptr if the character is not found
    */

    const char *str {"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *result = str;
    int iterations {0};

    // Move along result, a copy of str... each iteration moves the pointer (starting point of the search) to the next character
    while ( (result = std::strchr(result, target)) != nullptr )
    {
        std::cout << "Found '" << target << "' starting at '" << result << "'\n";

        // Move pointer to next character after finding the target
        result++;

        // Increment number of iterations it takes to go through entire string
        iterations++;
    }

    std::cout << "Iterations: " << iterations << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /*
        5. std::strrchr ... finds the last occurrence of a character in a string
        Returns where in the string the character is located, if it is found
        Returns a nullptr if the character is not found
    */

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');

    // If output is not the nullptr...
    if (output)
    {   
        // Add +1 because we want to start printing past the character found by std::strrchr
        std::cout << output + 1 << std::endl;
    }

    return 0;
}