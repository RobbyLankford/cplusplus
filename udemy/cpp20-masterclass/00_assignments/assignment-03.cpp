#include <iostream>

// Calculate base area and volume of a box
int main()
{
    // Declare Variables
    double length;
    double width;
    double height;
    double area;
    double volume;

    // Get information from user
    std::cout << "Length: ";
    std::cin >> length;

    std::cout << "Width: ";
    std::cin >> width;

    std::cout << "Height: ";
    std::cin >> height;

    // Calculate base area and volume
    area = length * width;
    volume = length * width * height;

    // Respond to user
    std::cout << "Base area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}