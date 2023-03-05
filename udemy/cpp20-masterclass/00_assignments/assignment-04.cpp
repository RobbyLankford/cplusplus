#include <iostream>

int main()
{
    int input;
    
    std::cout << "Please type in an integral value: " << std::endl;
    std::cin >> input;

    // Check if input is even or odd
    if (input % 2 == 0)
    {
        std::cout << input << " is even" << std::endl;
    }
    else
    {
        std::cout << input << " is odd" << std::endl;
    }
    
    return 0;
}