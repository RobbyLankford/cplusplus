#include <iostream>
#include <string>

int main()
{
    // std::string is provided by C++ to hide the technical details of storing strings as arrays
    
    // An empty string
    std::string full_name; 
    
    // Initialize with string literal
    std::string planet {"Earth. Where the sky is blue."}; 
    
    // Initialize with other existing string
    std::string preferred_planet {planet}; 
    
    // Initialize with part of a string literal. 
    std::string message {"Hello World", 5}; // Contains "Hello"

    // Initialize with multiple copies of a char
    std::string weird_message(4, 'e');

    // Initialize with part of an existing std::string. Start at index 6 and take 5 characters.
    std::string greeting {"Hello World"};
    std::string saying_hello {greeting, 6, 5}; // Contains "World"

    std::cout << "full_name: " << full_name << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "preferred_planet: " << preferred_planet << std::endl;
    std::cout << "message: " << message << std::endl;
    std::cout << "weird_message: " << weird_message << std::endl;
    std::cout << "greeting: " << greeting << std::endl;
    std::cout << "saying_hello: " << saying_hello << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Changing std::string at runtime... std::string will grow and shrink as needed
    planet = "Earth. Where the sky is blue. Earth. Where the grass is green.";

    std::cout << "planet: " << planet << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Using a raw character array, trying to reassign will make it point to a different character array in memory and waste the current memory.
    // This is much different than how std::string operates, it returns the original memory to the OS
    const char *planet1 {"Earth. Where the sky is blue."};
    planet1 = "Earth. Where the sky is blue. Earth. Where the grass is green.";
    
    std::cout << "planet1: " << planet1 << std::endl;

    return 0;
}