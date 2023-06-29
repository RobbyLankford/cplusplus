#include <iostream>
#include <string>

int main()
{   
    // Find a std::string in another std::string
    std::string str1 {"Water has poured in the heater."};
    std::string search {"ter"}; // In water or heater

    // Will give us the position it finds or a junk value if nothing is found
    size_t found_pos = str1.find(search);

    std::cout << "find('ter'): index[" << found_pos << "]" << std::endl; // starts at index 2 (third character)

    search = "red";
    found_pos = str1.find(search);

    std::cout << "find('red'): index[" << found_pos << "]" << std::endl; // starts at index 13

    search = "chicken";
    found_pos = str1.find(search);

    std::cout << "find('chicken'): index[" << found_pos << "]" << std::endl; // Huge number, so "chicken" not found

    std::cout << "\n-----------\n" << std::endl;

    // Basically underflowing to interpret not finding the searched for string
    size_t large = -1;

    std::cout << "large: " << large << std::endl;
    std::cout << "std::sting::npos: " << std::string::npos << std::endl; // same thing

    std::cout << std::endl;

    // Can use std::string::npos to perform checks to see if we found the search term
    search = "red";
    found_pos = str1.find(search);

    if (found_pos == std::string::npos)
    {
        std::cout << "Could not find the string 'red'." << std::endl;
    }
    else
    {
        std::cout << "String 'red' found starting at position: " << found_pos << std::endl;
    }

    search = "chicken";
    found_pos = str1.find(search);

    if (found_pos == std::string::npos)
    {
        std::cout << "Could not find the string 'chicken'." << std::endl;
    }
    else
    {
        std::cout << "String 'chicken' found starting at position: " << found_pos << std::endl;
    }

    std::cout << "\n-----------\n" << std::endl;

    // Can also specify the position where we want to the search to start
    search = "ter";
    found_pos = str1.find(search); // Starts searching from the beginning, so will find 'ter' in 'Water'

    std::cout << "String 'ter' found at position: " << found_pos << std::endl;

    found_pos = str1.find(search, 0); // Start searching at position 0, so same as above

    std::cout << "String 'ter' found at position: " << found_pos << std::endl;

    found_pos = str1.find(search, 4); // Start searching AFTER 'Water', so will find 'ter' in 'heater'

    std::cout << "String 'ter' found at position: " << found_pos << std::endl;

    std::cout << "\n-----------\n" << std::endl;

    // Can also search for the equivalent of a c-string
    std::string str2 = "Beer is packaged by her in cans around here.";
    const char *c_str2 {"her"};

    found_pos = str2.find(c_str2, 23);

    if (found_pos != std::string::npos)
    {
        std::cout << "C-string '" << c_str2 << "' found starting at position: " << found_pos << std::endl;
    }
    else
    {
        std::cout << "C-string '" << c_str2 << "' was not found." << std::endl;
    }

    return 0;
}