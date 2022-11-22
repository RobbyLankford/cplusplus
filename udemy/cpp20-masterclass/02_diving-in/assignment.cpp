#include <iostream>
#include <string>

int main() 
{
    std::string response;
    
    std::cout << "Where do you live? ";
    std::getline(std::cin, response);

    std::cout << "I've heard great things about " << response << ". I'd like to go sometime." << std::endl;

    return 0;
}