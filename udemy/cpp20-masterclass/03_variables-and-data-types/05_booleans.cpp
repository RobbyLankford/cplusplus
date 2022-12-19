#include <iostream>

int main()
{
    /* Booleans */
    
    // Can be one of two values: true or false
    bool red_light {true};
    bool green_light {false};

    // Bad style to check if a boolean is true or false
    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    } 
    else 
    {
        std::cout << "Go through!" << std::endl;
    }

    std::cout << "\n#=======#\n" << std::endl;

    // Instead, just pass in the name of the boolean variable
    if (green_light)
    {
        std::cout << "The light is green!" << std::endl;
    }
    else
    {
        std::cout << "The light is NOT green!" << std::endl;
    }

    std::cout << "\n#=======#\n" << std::endl;

    // Booleans take up 1 byte of memory
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
    
    std::cout << "\n#=======#\n" << std::endl;

    // By default, booleans print as 0 for true, 1 for false
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;
    
    std::cout << "\n#=======#\n" << std::endl;

    // Override this by using std::boolalpha
    std::cout << std::boolalpha;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    return 0;
}