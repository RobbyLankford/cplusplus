#include <iostream>
#include <string>

int main() 
{
    // OUTPUT
    
    // Regular Text
    std::cout << "Hello C++20" << std::endl;

    // Variables
    int age{21};
    std::cout << "Age: " << age << std::endl;

    // Error Messages
    std::cerr << "Error message: Something is wrong" << std::endl;

    // Log Messages
    std::clog << "Log message: Something happened" << std::endl;

    // INPUT
    
    std::string full_name;
    int age1;

    std::cout << "Please type in your full name and age: " << std::endl;
    
    std::getline(std::cin, full_name);
    std::cin >> age1;
    
    std::cout << "Hello " << full_name << " you are " << age1 << " years old!" << std::endl;

    return 0;
}