#include <iostream>
#include <string>

int main() 
{
    // Declare variables
    std::string response;
    
    // Gather information from user
    std::cout << "Where do you live? ";
    std::getline(std::cin, response);

    // Respond to user
    std::cout << "I've heard great things about " << response << ". I'd like to go sometime." << std::endl;

    return 0;
}