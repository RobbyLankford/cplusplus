#include <iostream>

int main()
{
    // Some common ways of working with characters in the standard library

    // 1. Check if character is alphanumeric
    std::cout << "C is alphanumeric? : " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric? : " << std::isalnum('^') << std::endl;

    std::cout << std::endl;

    // Can use it as a test condition
    char input_char {'*'};

    if (std::isalnum(input_char))
    {
        std::cout << input_char << " is alphanumeric." << std::endl;
    }
    else
    {
        std::cout << input_char << " is NOT alphanumeric." << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // 2. Check if character is alphabetic
    std::cout << "C is alphabetic? : " << std::isalpha('C') << std::endl;
    std::cout << "^ is alphabetic? : " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic? : " << std::isalpha('7') << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // 3. Check if a character is blank
    char message[] {"Hello there. How are you doing? The sun is shining!"};

    std::cout << "message: " << message << std::endl;
    std::cout << std::endl;

    int blank_count {0};
    for (size_t i {0}; i < std::size(message); i++)
    {
        if (std::isblank(message[i]))
        {
            std::cout << "Found a blank character at index [" << i << "]" << std::endl;
            blank_count++;
        }
    }

    std::cout << std::endl;
    std::cout << "in total, we found " << blank_count << " blank characters." << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // 4. Check if a character is lowercase or uppercase
    char thought[] {"The C++ Programming Language is one of the most used on Earth!"};
    
    std::cout << "thought: " << thought << std::endl;
    std::cout << std::endl;

    size_t lowercase_count {0};
    size_t uppercase_count {0};

    for (auto character : thought)
    {
        if (std::islower(character))
        {
            lowercase_count++;
        }
        if (std::isupper(character))
        {
            uppercase_count++;
        }
    }

    std::cout << "In total, we found " << lowercase_count << " lowercase characters and " << uppercase_count << " uppercase characters." << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // 5. Check if a character is a digit
    char statement[] {"Mr. Hamilton owns 221 cows. That's a lot of cows! The kid exlaimed."};

    int digit_counter {0};
    for (auto character : statement)
    {
        if (std::isdigit(character)){
            std::cout << "Found digit: " << character << std::endl;
            digit_counter++;
        }
    }

    std::cout << std::endl;
    std::cout << "In total, we found " << digit_counter << " digits." << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // 6. Turning a character to uppercase or lowercase
    char original_str[] {"Home. The feeling of belonging."};
    char dest_str[std::size(original_str)];

    for (size_t i {0}; i < std::size(original_str); i++)
    {
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "Original: " << original_str << std::endl;
    std::cout << "Uppercase: " << dest_str << std::endl;

    for (size_t i {0}; i < std::size(original_str); i++)
    {
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout << "Lowercase: " << dest_str << std::endl;

    return 0;
}