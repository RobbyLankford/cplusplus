#include <iostream>

int main()
{
    // Overflow: value is greater than the maximum value of the data type storing it

    // Unsigned char is one byte, can only hold up to 255
    unsigned char data { 254 };

    std::cout << "data: " << static_cast<int>(data) << std::endl;

    // At 255, cannot go higher for one byte
    data++;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    // Overflow (should be 256, but restarts at 0)
    data++;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    std::cout << "\n ------- \n" << std::endl;

    // Underflow: value is less than the minimum value of the data type storing it

    data = 1;

    std::cout << "data: " << static_cast<int>(data) << std::endl;

    // At 0, cannot go lower for one byte
    --data; 
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    // Underflow (should be -1, but restarts at 255)
    --data; 
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    return 0;
}