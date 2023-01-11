#include <iostream>

// Convert Celsius to Fahrenheit
int main()
{
    // Declare variables
    double celsius;
    double fahrenheit;
    
    // Get user input (Celsius)
    std::cout << "Celsius: ";
    std::cin >> celsius;

    // Celsius to Fahrenheit conversion
    fahrenheit = ((9.0 / 5) * celsius) + 32;

    // Provide result to user
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}