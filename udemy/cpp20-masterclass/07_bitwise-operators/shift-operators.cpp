#include <iostream>
#include <bitset>

int main()
{
    // Shift Operators: shift bits to the left or to the right
    // Only supported for integral types like int, char

    /*
        Outcomes of Bit Shifting:
        1. Shifting right divides by 2^n
        2. Shifting left multiplies by 2^n

        n = number of digits by which you shift
        Rule breaks if you throw off 1's either to the right or the left
    */

    // Use unsigned short in so we have 16 bits
    unsigned short int value {0xff0u};
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // Shift left by one bit
    // Bit shifting is not supported for types shorter than an integer, so we static cast to get what we want
    // When we shift in either direction, we pad the opposite direction with a zero so the value is the same length
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the left]" << std::endl;

    // Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the right]" << std::endl;
   
    std::cout << "\n-------\n" << std::endl;

    // Shift multiple times, one at a time
    value = 0xff0u;
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the left]" << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the left]" << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the left]" << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the left]" << std::endl;

    // Shift left by one bit (we now lose a leading 1)
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the left]" << std::endl;

    // Shift right by one bit (we do not get the 1 back; once you lose a 1, you cannot get it back)
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 1 bit to the right]" << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Shift by multiple bits at the same time
    value = 0xff0u;
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;
    
    // Shift right by four bits
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [after shifting 4 bits to the right]" << std::endl;

    return 0;
}