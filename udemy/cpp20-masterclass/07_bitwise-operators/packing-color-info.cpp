#include <iostream>

int main()
{
    // Packing color information in one byte
    
    // Masks to extract RGB and Transparency information
    const unsigned int red_mask {0xFF000000};
    const unsigned int green_mask {0x00FF0000};
    const unsigned int blue_mask {0x0000FF00};
    const unsigned int alpha_mask {0x000000FF};

    unsigned int my_color {0xAABCDE00};

    // Shift to make sure the color byte of interest is in the lower index byte position
    // This is so we can interpret it as an integer, which will be between 0 and 255

    std::cout << std::dec << std::showbase << std::endl;

    // Shift 24 bits for Red
    std::cout << "Red is: " << ((my_color & red_mask) >> 24) << std::endl;

    // Shift 16 bits for Green
    std::cout << "Green is: " << ((my_color & green_mask) >> 16) << std::endl;

    // Shift 8 bits for Blue
    std::cout << "Blue is: " << ((my_color & blue_mask) >> 8) << std::endl;

    // No shift for Transparency
    std::cout << "Alpha is: " << ((my_color & alpha_mask) >> 0) << std::endl;
    std::cout << std::endl;

    return 0;
}